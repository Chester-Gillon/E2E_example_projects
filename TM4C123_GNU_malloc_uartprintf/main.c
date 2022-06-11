/*
 * main.c
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include <stdint.h>

#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "utils/uartstdio.h"

/* Sizes of buffers malloced and then freed in turn.
 * Can be used to investigate at which point _sbrk() is called (by setting a breakpoint).
 *
 * Note: The first call to printf() calls malloc_r() to allocate a 512 byte (BUFSIZ) line buffer.
 *       If the malloc_r calls fails, printf calls __sbprintf() to output the text.
 *       __sbprintf allocates a 512 byte buffer on the stack, which allows printf to generate output
 *       when malloc fails but at the expense of a larger stack requirement. */
#define NUM_MALLOC_SIZES 10
const size_t malloc_sizes[NUM_MALLOC_SIZES] = {256, 80, 128, 512, 368, 1024, 100, 512, 2048, 1024};

int main(void) {
    unsigned int size_index;
    char *text_buffer;

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

    for (size_index = 0; size_index < NUM_MALLOC_SIZES; size_index++)
    {
        const size_t buffer_size = malloc_sizes[size_index];

        errno = 0;
        text_buffer = malloc (buffer_size);
        if (text_buffer != NULL)
        {
            sprintf (text_buffer, "This is a text string in buffer of size %u malloced at %p\n", buffer_size, text_buffer);
            UARTprintf ("%s", text_buffer);
            free (text_buffer);
        }
        else
        {
            UARTprintf ("Malloc(%u) failed errno=%d (%s)\n", buffer_size, errno, strerror (errno));
        }
    }

    UARTprintf ("Test complete\n");
    return 0;
}
