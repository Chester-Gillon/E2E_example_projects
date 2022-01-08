#include <msp430.h> 
#include <math.h>

#define XTAL_FREQ 10000000UL
#define CORE_RESET_TIME (float)(0.000050)

#define MCLK_DIV 8UL
#define SMCLK_DIV 8UL
#define ACLK_DIV 256UL

#define MCLK_FREQ (XTAL_FREQ / MCLK_DIV)
#define SMCLK_FREQ (XTAL_FREQ / SMCLK_DIV)
#define ACLK_FREQ (XTAL_FREQ / ACLK_DIV)

#define ACLK_PERIOD ( (float)1/(float)ACLK_FREQ )
#define SMCLK_PERIOD ( (float)1/(float)SMCLK_FREQ )

#define TIMB1_CORE_RESET_CCR0 (unsigned short)(round(CORE_RESET_TIME / SMCLK_PERIOD))

/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	return TIMB1_CORE_RESET_CCR0;
}
