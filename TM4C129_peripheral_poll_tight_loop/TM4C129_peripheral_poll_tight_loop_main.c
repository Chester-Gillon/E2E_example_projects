/*
 * @file TM4C129_peripheral_poll_tight_loop_main.c
 * @date 19 Nov 2017
 * @author Chester Gillon
 * @brief Poll a TM4C129 peripheral in a tight loop, by outputting text continuously on UART0
 */

#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include <inc/hw_memmap.h>
#include <driverlib/pin_map.h>
#include <driverlib/sysctl.h>
#include <driverlib/uart.h>
#include <driverlib/gpio.h>

static const char text[] = "abcdefghijklmonpqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\"#$%^&*()\n\r";

/** Can be watched while program is running to generate DAP accesses */
volatile uint32_t num_iterations;

int main (void)
{
    uint32_t cpu_clock_freq;
    const size_t text_len = strlen (text);
    uint32_t text_index;

    /* Set the system clock to run at 60 MHz off the PLL with external crystal as reference. */
    cpu_clock_freq = SysCtlClockFreqSet((SYSCTL_XTAL_25MHZ | SYSCTL_OSC_MAIN | SYSCTL_USE_PLL | SYSCTL_CFG_VCO_480), 120000000);

    /* Enable the GPIO Peripheral used by the UART. */
    SysCtlPeripheralEnable (SYSCTL_PERIPH_GPIOA);
    while (!SysCtlPeripheralReady (SYSCTL_PERIPH_GPIOA))
    {
    }

    /* Enable UART0 */
    SysCtlPeripheralEnable (SYSCTL_PERIPH_UART0);
    while (!SysCtlPeripheralReady (SYSCTL_PERIPH_UART0))
    {
    }

    /* Configure GPIO Pins for UART mode. */
    GPIOPinConfigure (GPIO_PA0_U0RX);
    GPIOPinConfigure (GPIO_PA1_U0TX);
    GPIOPinTypeUART (GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);

    /* Use the internal 16MHz oscillator as the UART clock source. */
    UARTClockSourceSet (UART0_BASE, UART_CLOCK_PIOSC);

    /* Configure the UART for 115200, n, 8, 1 */
    UARTConfigSetExpClk (UART0_BASE, 16000000, 115200,
                         (UART_CONFIG_PAR_NONE | UART_CONFIG_STOP_ONE |
                         UART_CONFIG_WLEN_8));

    /* Continuously output the text on the UART */
    for (;;)
    {
        for (text_index = 0; text_index < text_len; text_index++)
        {
            UARTCharPut (UART0_BASE, text[text_index]);
        }
        num_iterations++;
    }
}
