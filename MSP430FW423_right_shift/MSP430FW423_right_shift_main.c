/*
 * MSP430FW423_right_shift_main.c
 *
 *  Created on: 17 Nov 2017
 *      Author: mr_halfword
 */

#include <stdint.h>

uint16_t right_shift (const uint16_t in)
{
    return in >> 8;
}

int main (void)
{
    volatile uint16_t result = right_shift (0xfa00);

    return result;
}
