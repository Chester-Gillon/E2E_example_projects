#include "msp.h"

#define INSTRUCTION_BLOCK \
    asm (" add.w r0, r0, #0"); \
    asm (" add.w r1, r1, #0"); \
    asm (" add.w r2, r2, #0"); \
    asm (" add.w r3, r3, #0"); \
    asm (" add.w r4, r4, #0"); \
    asm (" add.w r5, r5, #0"); \
    asm (" add.w r6, r6, #0"); \
    asm (" add.w r7, r7, #0"); \
    asm (" add.w r8, r8, #0"); \
    asm (" add.w r9, r9, #0"); \
    asm (" add.w r10, r10, #0"); \
    asm (" add.w r11, r11, #0"); \
    asm (" add.w r12, r12, #0");

#define TEN_INSTRUCTION_BLOCKS \
    INSTRUCTION_BLOCK \
    INSTRUCTION_BLOCK \
    INSTRUCTION_BLOCK \
    INSTRUCTION_BLOCK \
    INSTRUCTION_BLOCK \
    INSTRUCTION_BLOCK \
    INSTRUCTION_BLOCK \
    INSTRUCTION_BLOCK \
    INSTRUCTION_BLOCK \
    INSTRUCTION_BLOCK

#define HUNDRED_INSTRUCTION_BLOCKS \
    TEN_INSTRUCTION_BLOCKS \
    TEN_INSTRUCTION_BLOCKS \
    TEN_INSTRUCTION_BLOCKS \
    TEN_INSTRUCTION_BLOCKS \
    TEN_INSTRUCTION_BLOCKS \
    TEN_INSTRUCTION_BLOCKS \
    TEN_INSTRUCTION_BLOCKS \
    TEN_INSTRUCTION_BLOCKS \
    TEN_INSTRUCTION_BLOCKS \
    TEN_INSTRUCTION_BLOCKS

/* Per call overhead is:
 * - 1 + P (bl in caller)
 * - 2 (prolog)
 * - 1 + P (epilog)
 *
 * So a total of 4+2P + (1024 * (1+P+15600).
 * P is 1 to 3 cycles, so with zero wait states total is expected as 15,976,454 ..15,978,506
 */
void test (void)
{
    int index;

    /* Loop overhead is 1+P */
    for (index = 0; index < 1024; index++)
    {
        /* Manually unrolled loop which executes 1,200 * 13 = 15,600 32-bit instructions each of which should
         * take 1 clock cycle with zero wait state memory.
         * The instructions perform no data accesses, and so the execution time should only be dependent upon
         * the instruction fetch speed. */
        HUNDRED_INSTRUCTION_BLOCKS
        HUNDRED_INSTRUCTION_BLOCKS
        HUNDRED_INSTRUCTION_BLOCKS
        HUNDRED_INSTRUCTION_BLOCKS
        HUNDRED_INSTRUCTION_BLOCKS
        HUNDRED_INSTRUCTION_BLOCKS
        HUNDRED_INSTRUCTION_BLOCKS
        HUNDRED_INSTRUCTION_BLOCKS
        HUNDRED_INSTRUCTION_BLOCKS
        HUNDRED_INSTRUCTION_BLOCKS
        HUNDRED_INSTRUCTION_BLOCKS
        HUNDRED_INSTRUCTION_BLOCKS
    }
}


/**
 * main.c
 */
void main(void)
{
#ifdef __MSP432P401R__
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer
#endif

	test ();
    test ();
    test ();
}
