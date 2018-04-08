/*
 * @file flash_write_thread.c
 * @date 8 Apr 2018
 * @author Chester Gillon
 * @details Contains a thread which writes to the upper flash bank, while the program runs in the lower flash bank.
 *          The thread uses the UART to wait to be told to start the flash test, allowing a selection of the FPFOFF bit in the
 *          flash configuration registration.
 *          Once started erases and then programs a flash sector at a time until has completed.
 *
 *          The reason for allowing a selection of the FPOFF bit is that it can prevent the program from crashing.
 */

#include "test_interface.h"

#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/* Driver Header files */
#include <ti/drivers/UART.h>

#include <ti/devices/msp432e4/inc/msp432.h>

#include <ti/devices/msp432e4/driverlib/rom.h>
#include <ti/devices/msp432e4/driverlib/rom_map.h>

/* Example/Board Header files */
#include "Board.h"

#include "test_interface.h"

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

static void UARTprintf (UART_Handle uart, const char *format, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
static void UARTprintf (UART_Handle uart, const char *format, ...)
{
    static char line_buffer[512];
    va_list args;

    va_start (args, format);
    vsnprintf (line_buffer, sizeof (line_buffer), format, args);
    va_end (args);

    UART_write (uart, line_buffer, strlen (line_buffer));
}

static void fill_flash_line(void)
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

static int program_flash_line (UART_Handle uart)
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
        UARTprintf(uart, "erasing sector %d", current_sector );
#else
        UARTprintf(uart, "erasing sector %d", baseaddr % (len - 1) );
#endif
        res = MAP_FlashErase(baseaddr);
        if (res != 0)
        {
            UARTprintf(uart, " - Error" );
            return (res);
        }
#if (FLASH_LINE_SIZE < FLASH_SECTOR_SIZE)
        else
        {
            erased_sector = current_sector;
        }
#endif
        UARTprintf(uart, "\n" );
#if (FLASH_LINE_SIZE < FLASH_SECTOR_SIZE)
    }
#endif

    // writing flash line at <baseaddr>
    UARTprintf(uart, "writing flash line at %08X", baseaddr );

    res = MAP_FlashProgram((uint32_t*)linebuf, baseaddr, len);

    if (res != 0)
    {
        UARTprintf(uart, " - Error" );
        return (res);
    }
    UARTprintf(uart, "\n" );

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

/*
 *  ======== mainThread ========
 */
void *flashWriteThread(void *arg0)
{
    UART_Handle uart;
    UART_Params uartParams;
    char line[2];

    /* Call driver init functions */
    UART_init();

    /* Create a UART with data processing off. */
    UART_Params_init(&uartParams);
    uartParams.writeDataMode = UART_DATA_TEXT;
    uartParams.readDataMode = UART_DATA_TEXT;
    uartParams.readReturnMode = UART_RETURN_FULL;
    uartParams.readEcho = UART_ECHO_ON;
    uartParams.baudRate = 115200;

    uart = UART_open(Board_UART0, &uartParams);

    if (uart == NULL) {
        /* UART_open() failed */
        while (1);
    }

    /* Clear the terminal and print banner. */
    UARTprintf (uart, "\033[2J\033[H");
    UARTprintf (uart, "Flash Failure Test\n");
    UARTprintf (uart, "Press 0 (with FPFOFF clear) or 1 (with FPFOFF set) to start the flash test >");
    do
    {
        UART_read (uart, line, sizeof (line));
    } while (((line[0] != '0') && (line[0] != '1')) || (line[1] != '\n'));
    if (line[0] == '1')
    {
        UARTprintf (uart, "Setting FPFOFF\n");
        FLASH_CTRL->CONF |= FLASH_CONF_FPFOFF;
    }
    else
    {
        UARTprintf (uart, "Clearing FPFOFF\n");
        FLASH_CTRL->CONF &= ~FLASH_CONF_FPFOFF;
    }

    baseaddr = BASE_ADDR;
    for (;;)
    {

        fill_flash_line ();

        program_flash_line (uart);
        if (baseaddr >= BASE_ADDR_MAX)
        {
            baseaddr = BASE_ADDR;
            UARTprintf(uart,"Finished.\n");
            for (;;)
            {
            }
        }
    }
}

