/*
 * main.c
 */
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include "inc/hw_flash.h"
//#include "inc/tm4c1294ncpdt.h"
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_sysctl.h"
#include "inc/hw_types.h"
#include "inc/hw_nvic.h"
#include "driverlib/flash.h"
#include "driverlib/eeprom.h"
#include "driverlib/crc.h"
#include "driverlib/uart.h"
#include "driverlib/interrupt.h"
#include "driverlib/gpio.h"
#include "driverlib/rom.h"
#include "driverlib/rom_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/pin_map.h"
#include "utils/uartstdio.h"
#include "drivers/buttons.h"
#include "drivers/pinout.h"

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

#include "idle_task.h"
#include "led_task.h"
#include "priorities.h"

#include "drivers/shamd5.h"

//*****************************************************************************
//
// System clock rate in Hz.
//
//*****************************************************************************
uint32_t g_ui32SysClock;

//*****************************************************************************
//
// Hardware revision.
//
//*****************************************************************************
uint32_t g_ui32HwRev;

#define FLASH_SECTOR_SIZE   0x4000
#define FLASH_LINE_SIZE 0x4000

#define BASE_ADDR   0x90000
#define BASE_ADDR_MAX   0x100000

#define LED_PERIOD  10

__attribute__ ((aligned (FLASH_LINE_SIZE))) uint8_t  linebuf[FLASH_LINE_SIZE + 8];
static uint32_t             baseaddr;   // flash line buffer base address
static uint32_t             bytes_done; // the number of processed bytes (during reprogramming)
static uint16_t             filled;     // the number of filled bytes in the flash line buffer

static uint32_t flash_line_val = 0;
uint32_t led_count  =   LED_PERIOD;
TaskHandle_t        flash_wr_handle;
//*****************************************************************************
//
// Interrupt vector table.
//
//*****************************************************************************
extern void (*g_pfnVectors[])(void);

void CheckResetCause(void);
void fill_flash_line(void);
static int __program_flash_line(void);
void FlashWrInit(void);
static void FlashWrTask(void *pvParameters);
//*****************************************************************************
//
// The error routine that is called if the driver library encounters an error.
//
//*****************************************************************************
#ifdef DEBUG
void
__error__(char *pcFilename, uint32_t ui32Line)
{
    UARTprintf(" Error: Filename: %s, Line: %d\n", pcFilename, ui32Line);
}
#endif

//*****************************************************************************
//
// This hook is called by FreeRTOS when an stack overflow error is detected.
//
//*****************************************************************************
void
vApplicationStackOverflowHook(xTaskHandle *pxTask, signed char *pcTaskName)
{
    UARTprintf("Stack owerflow!!! Task name: %s\n", pcTaskName);
    //
    // This function can not return, so loop forever.  Interrupts are disabled
    // on entry to this function, so no processor interrupts will interrupt
    // this loop.
    //
    while(1)
    {
    }
}

void vAssertCalled( const char * pcFile, unsigned long ulLine )
{
    volatile unsigned long ul = 0;

    ( void ) pcFile;
    ( void ) ulLine;

    //__asm( "di" );
    portDISABLE_INTERRUPTS();
    {
        /* Set ul to a non-zero value using the debugger to step out of this
    function. */
        while( ul == 0 )
        {
            portNOP();
        }
    }
    //__asm( "ei" );
    portENABLE_INTERRUPTS();

}

/*
 * Configures the high frequency timers - those used to measure the timing
 * jitter while the real time kernel is executing.
 */
extern void vSetupHighFrequencyTimer( void );

void vApplicationTickHook(void)
{
    return;
}


uint8_t params_get_appid (void)
{
    static uint32_t data;
    uint32_t eeprom_end = EEPROMSizeGet();
    EEPROMRead(&data, eeprom_end - 4, 4);
    return ((uint8_t)data);
}

void params_set_appid (uint8_t id)
{
    uint32_t data;
    uint32_t eeprom_end = EEPROMSizeGet() - 4;
    if (id)
    {
        data = 1;
    }
    else
    {
        data = 0;
    }

    EEPROMProgram(&data, eeprom_end, 4);
}

int check_app_image (uint32_t app_num)
{
    int ret = -1;
    if (app_num != 0)
    {
        if (HWREG(FLASH_CONF) & FLASH_CONF_FMME)
        {
            ret = 0;
        }
    }
    else
    {
        if (!(HWREG(FLASH_CONF) & FLASH_CONF_FMME))
        {
            ret = 0;
        }
    }
    return (ret);
}

//*****************************************************************************
//
// Initialize FreeRTOS and start the initial set of tasks.
//
//*****************************************************************************
int
main(void)
{

    HWREG(NVIC_VTABLE)   = (uint32_t)g_pfnVectors;
    __asm( "    dsb" );
    __asm( "    isb" );

    //For debug purpose of Imprecise Bus Error
    //Should be commented out on working system
    //HWREG(NVIC_ACTLR) |= NVIC_ACTLR_DISWBUF;
    //
    // Run from the PLL at 120 MHz.
    //
    g_ui32SysClock = MAP_SysCtlClockFreqSet((SYSCTL_XTAL_25MHZ |
                                             SYSCTL_OSC_MAIN |
                                             SYSCTL_USE_PLL |
                                             SYSCTL_CFG_VCO_480),
                                            120000000);

    //
    // Configure the device pins on the board.
    //
    PinoutSet(false, false);

    //
    // Configure Debug UART.
    //
    UARTStdioConfig(0, 115200, g_ui32SysClock);
    //
    // Clear the terminal and print banner.
    //
    UARTprintf("\033[2J\033[H");
    UARTprintf("Flash Failure Test\n");

    CheckResetCause();

    //
    // Make sure the main oscillator is enabled because this is required by
    // the PHY.  The system must have a 25MHz crystal attached to the OSC
    // pins.  The SYSCTL_MOSC_HIGHFREQ parameter is used when the crystal
    // frequency is 10MHz or higher.
    //
    MAP_SysCtlMOSCConfigSet(SYSCTL_MOSC_HIGHFREQ);

    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_EEPROM0);
    if (EEPROM_INIT_OK != EEPROMInit())
    {
        UARTprintf("!!! EEPROM init error !!!\n");
    }
    uint8_t flash_used_id = params_get_appid();
    if (0 != check_app_image(flash_used_id))
    {
        UARTprintf("Flash used ID: 0x%X\n", flash_used_id);
    }

    LEDTaskInit();
    FlashWrInit();
    SHAMD5Init();

    baseaddr = BASE_ADDR;

    __nop();    // 1 work
    __nop();    // 2 work
    __nop();    // 3 work
    __nop();    // 4 work
    __nop();    // 5 work
    __nop();    // 6 work

    __nop();    // 7 no work
    __nop();    // 8 no work
    __nop();    // 9 no work
    __nop();    //10 no work


    __nop();    //11 work
    __nop();    //12 work
    __nop();    //13 work
    __nop();    //14 work
    __nop();    //15 work
    __nop();    //16 work
    __nop();    //17 work
    __nop();    //18 work
    __nop();    //19 work
    __nop();    //20 work
    __nop();    //21 work

    __nop();    //22 no work
    __nop();    //23 no work
    __nop();    //24 no work
    __nop();    //25 no work

    //__nop();    //26 work
/**/

    //
    // Start the scheduler.  This should not return.
    //
    vTaskStartScheduler();

    //
    // In case the scheduler returns for some reason, print an error and loop
    // forever.
    //
    UARTprintf("\nScheduler returned unexpectedly!\n");
    while(1)
    {
    }
}

void CheckResetCause(void)
{
    uint32_t ResetCause = SysCtlResetCauseGet();
    SysCtlResetCauseClear(0x107F);
    switch (ResetCause)
    {
    case SYSCTL_CAUSE_WDOG0:
        UARTprintf("WDT reset\n");
        break;
    case SYSCTL_CAUSE_HSRVREQ:
        UARTprintf("Hardware System Service Request\n");
        break;
    case SYSCTL_CAUSE_HIB:
        UARTprintf("Hibernate reset\n");
        break;
    case SYSCTL_CAUSE_WDOG1:
        UARTprintf("WDT 1 reset\n");
        break;
    case SYSCTL_CAUSE_SW:
        UARTprintf("Software reset\n");
        break;
    case SYSCTL_CAUSE_BOR:
        UARTprintf("Brown-out reset\n");
        break;
    case SYSCTL_CAUSE_POR:
        UARTprintf("Power on reset\n");
        break;
    case SYSCTL_CAUSE_EXT:
        UARTprintf("External reset\n");
        break;
    default:
        UARTprintf("Unknown Reset Cause 0x%X\n", ResetCause);
    }
}

void fill_flash_line(void)
{
    int i;
    uint32_t* pline_buf = (uint32_t*)&linebuf;
    for (i = 0; i < FLASH_LINE_SIZE/4; i++)
    {
        pline_buf[i] = flash_line_val;
        if (++flash_line_val == UINT32_MAX)
        {
            flash_line_val = 0;
        }
    }
}

//__attribute__((ramfunc))
static int __program_flash_line( void )
{
#if (FLASH_LINE_SIZE < FLASH_SECTOR_SIZE)
    static uint32_t erased_sector = 0;
    uint32_t current_sector;
#endif
    int res = 0;
    uint32_t len;

    if (sizeof(linebuf) > FLASH_LINE_SIZE)
    {
        len = FLASH_LINE_SIZE;
    }
    else
    {
        len = sizeof(linebuf);
    }

#if (FLASH_LINE_SIZE < FLASH_SECTOR_SIZE)
    current_sector = baseaddr / FLASH_SECTOR_SIZE;// % (len - 1);
    if (erased_sector != current_sector)
    {
        UARTprintf( "erasing sector %d", current_sector );
#else
        UARTprintf( "erasing sector %d", baseaddr % (len - 1) );
#endif
        res = MAP_FlashErase(baseaddr);
        //res = FlashErase(baseaddr);
        if (res != 0)
        {
            UARTprintf( " - Error" );
            return (res);
        }
#if (FLASH_LINE_SIZE < FLASH_SECTOR_SIZE)
        else
        {
            erased_sector = current_sector;
        }
#endif
        UARTprintf( "\n" );
#if (FLASH_LINE_SIZE < FLASH_SECTOR_SIZE)
    }
#endif

    // writing flash line at <baseaddr>
    UARTprintf( "writing flash line at %08X", baseaddr );

    res = MAP_FlashProgram((uint32_t*)linebuf, baseaddr, len);
    //res = FlashProgram((uint32_t*)linebuf, baseaddr, len);

    if (res != 0)
    {
        UARTprintf( " - Error" );
        return (res);
    }
    UARTprintf( "\n" );

    baseaddr    += len;
    bytes_done  += len;

    if( filled > FLASH_LINE_SIZE )
    {
        filled  -= FLASH_LINE_SIZE;
        memcpy( linebuf, &linebuf[FLASH_LINE_SIZE], filled );
        memset( &linebuf[filled], 0xFF, ( FLASH_LINE_SIZE - filled ) );
    }
    else
    {
        filled  = 0;
        memset( linebuf, 0xFF, FLASH_LINE_SIZE );
    }

    return (res);
}

//*****************************************************************************
//
// This task simply toggles the user LED at a 1 Hz rate.
//
//*****************************************************************************
static void
FlashWrTask(void *pvParameters)
{
    //TickType_t ui32LastTime;
    //
    // Get the current tick count.
    //
    //ui32LastTime = xTaskGetTickCount();

    //
    // Loop forever.
    //
    while(1)
    {

        fill_flash_line();

        __program_flash_line();
        if (baseaddr >= BASE_ADDR_MAX)
        {
            baseaddr = BASE_ADDR;
            UARTprintf("Finished.\n");
            //vTaskDelayUntil(&ui32LastTime, 30000 / portTICK_RATE_MS);
            while(1){};
        }
    }
}

void FlashWrInit(void)
{
    xTaskCreate(FlashWrTask, "FlashWr", configMINIMAL_STACK_SIZE, NULL,
                   tskIDLE_PRIORITY + PRIORITY_LED_TASK, &flash_wr_handle);
    configASSERT( flash_wr_handle );
}
