#include <msp430.h> 
#include <stdint.h>
#include <stdbool.h>

uint32_t crc;

uint8_t version[9];

bool flag1;

bool flag2;

bool flag3;

int32_t var1[2];

int32_t var2;

uint32_t var3;

/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	/* Just reference the global variables to stop the linker discarding them */
	return crc + version[0] + flag1 + flag2 + flag3 + var1[0] + var2 + var3;
}
