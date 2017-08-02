/*
 * MSP430FG4618_trig_stack_size.c
 *
 *  Created on: 2 Aug 2017
 *      Author: mr_halfword
 */

#include <math.h>

float input = 1.234f;
float output;

void main (void)
{
    output = sinf (input);
    output = cosf (input);
}

