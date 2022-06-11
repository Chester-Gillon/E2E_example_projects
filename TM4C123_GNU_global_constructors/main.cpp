/*
 * main.cpp
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "driverlib/watchdog.h"
#include "utils/uartstdio.h"

class test_class
{
public:
    test_class();
    ~test_class();
    unsigned int get_initialised (void) const;

private:
    unsigned int initialised;
};

test_class::test_class()
{
    initialised = 0xfeedabba;
}

test_class::~test_class()
{
    UARTprintf ("Called destructor for 0x%p\n", this);
}

unsigned int test_class::get_initialised() const
{
    return initialised;
}

test_class global_instance;
unsigned int zero_initialised;

char initialised_string[] = "This is an initialised string in the data segment at address 0x%p\n";

float float_input = 25.123f;

uint32_t reset_cause;

/* Hooked by atexit to demostrate the run-time library exit handling when main returns */
void exit_function (void)
{
    UARTprintf ("Halting test after reset_cause = 0x%x\n", reset_cause);
}

int main(void) {
    test_class stack_instance;
    char floating_point_text[80];

    atexit (exit_function);

    //
    // Set the clocking to run directly from the PLL at 80 MHz.
    //
    SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);

    //
    // Set up for debug output to the UART.
    //
    SysCtlPeripheralEnable (SYSCTL_PERIPH_GPIOA);
    GPIOPinTypeUART (GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);
    UARTStdioConfig (0, 115200, SysCtlClockGet());

    UARTprintf ("zero_initialised = %u\n", zero_initialised);
    UARTprintf (initialised_string, initialised_string);
    UARTprintf ("global_instance at 0x%p initialised=0x%x\n", &global_instance, global_instance.get_initialised());
    UARTprintf ("stack_instance at 0x%p initialised=0x%x\n", &stack_instance, stack_instance.get_initialised());
    test_class *heap_instance = new (test_class);
    UARTprintf ("heap_instance at 0x%p initialised=0x%x\n", heap_instance, heap_instance->get_initialised());
    sprintf (floating_point_text, "%f * %f = %f", float_input, float_input, float_input * float_input);
    UARTprintf ("%s\n", floating_point_text);

    delete (heap_instance);

    /* Clear the initialised string to check it gets re-initialised on the next start up */
    memset (initialised_string, '?', sizeof (initialised_string));
    initialised_string[sizeof (initialised_string) - 1] = '\0';

    /* Set a value to check it gets zeroed on the next startup */
    zero_initialised = 0xdeadbeef;

    reset_cause = SysCtlResetCauseGet ();
    SysCtlResetCauseClear (reset_cause);
    if ((reset_cause & SYSCTL_CAUSE_WDOG0) == 0)
    {
        /* @todo Doesn't explicitly wait for the UART transmit to complete before the reset.
         * Relies upon the delay before the watchdog timeout expires. */
        UARTprintf ("Generating a watchdog reset to check bss / data section re-initialisation (reset cause = 0x%x)\n", reset_cause);
        SysCtlPeripheralEnable (SYSCTL_PERIPH_WDOG0);
        WatchdogUnlock (WATCHDOG0_BASE);
        WatchdogResetEnable (WATCHDOG0_BASE);
        WatchdogReloadSet (WATCHDOG0_BASE, 1000000);
        WatchdogEnable (WATCHDOG0_BASE);
        for (;;)
        {
        }
    }

	return 0;
}
