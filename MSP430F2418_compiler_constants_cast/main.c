#include <msp430.h> 

#define XTAL_FREQ 10000000UL
#define CORE_RESET_TIME 0.000050

#define MCLK_DIV 8UL
#define SMCLK_DIV 8UL
#define ACLK_DIV 256UL

#define MCLK_FREQ (XTAL_FREQ / MCLK_DIV)
#define SMCLK_FREQ (XTAL_FREQ / SMCLK_DIV)
#define ACLK_FREQ (XTAL_FREQ / ACLK_DIV)

#define ACLK_PERIOD ( (double)1/(double)ACLK_FREQ )
#define SMCLK_PERIOD ( (double)1/(double)SMCLK_FREQ )

#define TIMB1_CORE_RESET_CCR0 (unsigned short)((CORE_RESET_TIME / SMCLK_PERIOD) + 0.5)

/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	return TIMB1_CORE_RESET_CCR0;
}
