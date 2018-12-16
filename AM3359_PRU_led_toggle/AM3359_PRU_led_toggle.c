

/**
 * main.c
 */

#include <stdint.h>


volatile register uint32_t __R30;
volatile register uint32_t __R31;

void main(void)
{
    volatile uint32_t gpio;

    /* Toggle AM3359-SOM-EVB-IND GPIO pins for led1 (pru0 r30_4), led2 (pru0 r30_6) , led3 (pru0 r30_7) */
    gpio = (1 << 4) | (1 << 6) | (1 << 7);

    /* Toggle indefinitely */
    while (1) {
        __R30 ^= gpio;
        __delay_cycles(100000000);
    }
}
