/**
 * @file MSP432E401Y_systick_wfi_main.c
 * @date 19/12/20
 * @author Chester Gillon
 * @brief Program to investigate causing a hard fault in an interrupt handler when the processor is woken up from sleep
 * @details The test is organised as a bare-metal program in which:
 *          a. The main thread spins a loop using a wfi instruction to put the processor to sleep,
 *             and just increments a global variable even time woken up by an interrupt.
 *          b. A systick timer handler which toggles some LEDs, where the systick timer runs a fixed rate.
 *          c. A timer0 handler which toggles some LEDs. The timer period is swept through a range to attempt to "beat"
 *             with the systick timer.
 *          d. The interrupt handlers write to the GPIOs for the LEDs every time they are called, with the LED state changed
 *             at a slower rate to give a visible flash.
 *
 *          The target board is a MSP-EXP432E401Y
 */
#include <stdint.h>
#include <stdbool.h>

#include <ti/devices/msp432e4/driverlib/driverlib.h>

/* User LEDs on port N */
#define LOWER_LED_PORT GPIO_PORTN_BASE
#define USER1_LED_PIN  GPIO_PIN_1
#define USER2_LED_PIN  GPIO_PIN_0

/* Used LEDs on Port F */
#define UPPER_LED_PORT GPIO_PORTF_BASE
#define USER3_LED_PIN  GPIO_PIN_4
#define USER4_LED_PIN  GPIO_PIN_0

/** MSP432E401Y datasheet gives maximum wake-up time from sleep as 39 microseconds for
 *  "Time to restore LDO to 1.2 V in Sleep mode". Therefore use a 20 KHz (50 microseconds period) systick rate. */
#define SYSTICK_RATE_HZ 20000

/** Sweep a timer through this rates to attempt to beat with the systick rate.
 *  The commented out value for TIMER_MAX_RATE_HZ was the original value, which has been changed to make the failure occur more quickly when
 *  starting the program under the debugger */
#define TIMER_MIN_RATE_HZ  18000
#define TIMER_MAX_RATE_HZ  20408 /* 500000 */
uint32_t timer_min_period;
uint32_t timer_max_period;
uint32_t timer_period;
uint32_t timer_duration;

uint32_t ui32SysClock;
uint32_t tick_count;
uint32_t lower_led_count;

volatile uint32_t num_wakeups; /* Marked volatile to stop optimiser removing increments */
uint32_t total_sys_tick_interrupts;
uint32_t total_timer_interrupts;

uint8_t lower_led_state;

uint32_t upper_led_count;
uint8_t upper_led_state;

void SysTick_Handler (void)
{
    GPIOPinWrite (LOWER_LED_PORT, USER1_LED_PIN | USER2_LED_PIN, lower_led_state);
    tick_count = (tick_count + 1) % (SYSTICK_RATE_HZ / 4);
    if (tick_count == 0)
    {
        lower_led_count = (lower_led_count + 1) % 4;

        const uint8_t user1_led = (lower_led_count & 1) ? USER1_LED_PIN   : 0;
        const uint8_t user2_led = (lower_led_count & 2) ? USER2_LED_PIN : 0;
        lower_led_state = user1_led | user2_led;

    }
    total_sys_tick_interrupts++;
}

void TIMER0A_IRQHandler (void)
{
   const uint32_t timer_status = TimerIntStatus (TIMER0_BASE, TIMER_A);

   GPIOPinWrite (UPPER_LED_PORT, USER3_LED_PIN | USER4_LED_PIN, upper_led_state);
   TimerIntClear (TIMER0_BASE, timer_status);
   timer_duration += timer_period;
   if (timer_duration >= (ui32SysClock / 4))
   {
       timer_duration = 0;
       timer_period++;
       if (timer_period > timer_max_period)
       {
           timer_period = timer_min_period;
       }
       TimerLoadSet (TIMER0_BASE, TIMER_A, timer_period);

       upper_led_count = (upper_led_count + 1) % 4;
       upper_led_state = ((upper_led_count & 1) ? USER3_LED_PIN : 0) |
                         ((upper_led_count & 2) ? USER4_LED_PIN : 0);
   }
   total_timer_interrupts++;
}

/**
 * main.c
 */
int main(void)
{

    /* Set the system clock to run from the PLL at 120 MHz. */
    ui32SysClock = SysCtlClockFreqSet((SYSCTL_XTAL_25MHZ |
                                       SYSCTL_OSC_MAIN |
                                       SYSCTL_USE_PLL |
                                       SYSCTL_CFG_VCO_240), 120000000);

    timer_min_period = ui32SysClock / TIMER_MAX_RATE_HZ;
    timer_max_period = ui32SysClock / TIMER_MIN_RATE_HZ;

    SysCtlPeripheralEnable (SYSCTL_PERIPH_TIMER0);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_TIMER0))
    {
    }
    SysCtlPeripheralEnable (SYSCTL_PERIPH_GPION);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_GPION))
    {
    }
    SysCtlPeripheralEnable (SYSCTL_PERIPH_GPIOF);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF))
    {
    }

    GPIOPinTypeGPIOOutput (LOWER_LED_PORT, USER1_LED_PIN | USER2_LED_PIN);
    GPIOPinTypeGPIOOutput (UPPER_LED_PORT, USER3_LED_PIN | USER4_LED_PIN);

    timer_period = timer_min_period;
    TimerConfigure (TIMER0_BASE, TIMER_CFG_PERIODIC);
    TimerLoadSet (TIMER0_BASE, TIMER_A, timer_period);
    TimerEnable (TIMER0_BASE, TIMER_A);
    TimerIntEnable (TIMER0_BASE, TIMER_TIMA_TIMEOUT);
    IntEnable (INT_TIMER0A);

    SysTickPeriodSet (ui32SysClock / SYSTICK_RATE_HZ);
    SysTickEnable ();
    SysTickIntEnable ();

    for (;;)
    {
        asm (" wfi");
        num_wakeups++;
    }
}
