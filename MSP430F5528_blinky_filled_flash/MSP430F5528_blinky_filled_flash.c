#include <msp430.h>				

static const char filler_a[47000] = {1};
static const char filler_b[32000] = {2};
static const char filler_c[32000] = {3};
static const char filler_d[18000] = {4};


/**
 * blink.c
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;		// stop watchdog timer
	P1DIR |= 0x01;					// configure P1.0 as output

	volatile unsigned int i;		// volatile to prevent optimization

	while(1)
	{
		P1OUT ^= 0x01;				// toggle P1.0
		for(i=30000; i>0; i--);     // delay
		i = filler_a[0];
		i = filler_b[1];
		i = filler_c[2];
        i = filler_d[3];
	}
}
