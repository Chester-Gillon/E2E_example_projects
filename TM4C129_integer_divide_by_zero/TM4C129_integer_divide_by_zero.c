/*
 * TM4C129_integer_divide_by_zero.c
 *
 *  Created on: 3 Aug 2017
 *      Author: mr_halfword
 */


volatile unsigned int *const NVIC_CFG_CTRL = (volatile unsigned int *) 0xE000ED14;
#define DIV0_MASK 0x10

int main (void)
{
    volatile unsigned int GucNullcheck;
    volatile unsigned int zero_divisor = 0;

    /* Attempt to divide by zero without the trap enabled */
    *NVIC_CFG_CTRL &= ~DIV0_MASK;
    GucNullcheck = 10;
    GucNullcheck = GucNullcheck / zero_divisor;

    /* Attempt to divide by zero with the trap enabled */
    *NVIC_CFG_CTRL |= DIV0_MASK;
    GucNullcheck = 12;
    GucNullcheck = GucNullcheck / zero_divisor;

    return 0;
}

