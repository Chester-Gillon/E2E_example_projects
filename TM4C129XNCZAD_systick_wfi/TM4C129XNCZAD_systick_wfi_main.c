/**
 * @file TM4C129XNCZAD_systick_wfi_main.c
 * @date 27/11/20
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
 *          The target board is a "mikromedia 5 for Tiva C Series"
 */
#include <stdint.h>
#include <stdbool.h>

#include <systick.h>
#include <sysctl.h>
#include <gpio.h>
#include <timer.h>
#include <interrupt.h>
#include <hw_memmap.h>
#include <hw_ints.h>

/* RGB led on Port D */
#define RGB_LED_PORT  GPIO_PORTD_BASE
#define RED_LED_PIN   GPIO_PIN_2
#define GREEN_LED_PIN GPIO_PIN_3
#define BLUE_LED_PIN  GPIO_PIN_5

/* Ethernet LEDs on Port F */
#define ETHER_LED_PORT     GPIO_PORTF_BASE
#define ETHER_LINK_LED     GPIO_PIN_0
#define ETHER_ACTIVITY_LED GPIO_PIN_4
#define ETHER_SPEED_LED    GPIO_PIN_1

/** TM4C129XNCZAD datasheet gives maximum wake-up time from sleep as 39 microseconds for
 *  "Time to restore LDO to 1.2 V in Sleep mode". Therefore use a 20 KHz (50 microseconds period) systick rate. */
#define SYSTICK_RATE_HZ 20000

/** Sweep a timer through this rates to attempt to beat with the systick rate */
#define TIMER_MIN_RATE_HZ  18000
#define TIMER_MAX_RATE_HZ 500000
uint32_t timer_min_period;
uint32_t timer_max_period;
uint32_t timer_period;
uint32_t timer_duration;

uint32_t ui32SysClock;
uint32_t tick_count;
uint32_t led_state;

volatile uint32_t num_wakeups; /* Marked volatile to stop optimiser removing increments */
uint32_t total_sys_tick_interrupts;
uint32_t total_timer_interrupts;

uint8_t rgb_led_state;

uint32_t ether_led_count;
uint8_t ether_led_state;

void sys_tick_handler (void)
{
    GPIOPinWrite (RGB_LED_PORT, RED_LED_PIN | GREEN_LED_PIN | BLUE_LED_PIN, rgb_led_state);
    tick_count = (tick_count + 1) % (SYSTICK_RATE_HZ / 4);
    if (tick_count == 0)
    {
        led_state = (led_state + 1) % 8;

        const uint8_t red_led   = (led_state & 1) ? RED_LED_PIN   : 0;
        const uint8_t green_led = (led_state & 2) ? GREEN_LED_PIN : 0;
        const uint8_t blue_led  = (led_state & 4) ? BLUE_LED_PIN  : 0;
        rgb_led_state = red_led | green_led | blue_led;

    }
    total_sys_tick_interrupts++;
}

void timer_handler (void)
{
   const uint32_t timer_status = TimerIntStatus (TIMER0_BASE, TIMER_A);

   GPIOPinWrite (ETHER_LED_PORT, ETHER_LINK_LED | ETHER_ACTIVITY_LED | ETHER_SPEED_LED, ether_led_state);
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

       ether_led_count = (ether_led_count + 1) % 8;
       ether_led_state = ((ether_led_count & 1) ? ETHER_LINK_LED     : 0) |
                         ((ether_led_count & 2) ? ETHER_ACTIVITY_LED : 0) |
                         ((ether_led_count & 4) ? ETHER_SPEED_LED    : 0);
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
    SysCtlPeripheralEnable (SYSCTL_PERIPH_GPIOD);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOD))
    {
    }
    SysCtlPeripheralEnable (SYSCTL_PERIPH_GPIOF);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF))
    {
    }

    GPIOPinTypeGPIOOutput (RGB_LED_PORT, RED_LED_PIN | GREEN_LED_PIN | BLUE_LED_PIN);
    GPIOPinTypeGPIOOutput (ETHER_LED_PORT, ETHER_LINK_LED | ETHER_ACTIVITY_LED | ETHER_SPEED_LED);

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
