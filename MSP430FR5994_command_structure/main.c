#include <msp430.h>

#include <stdio.h>

#include "messages.h"

/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	char address_info[40];

	extern command_t __term_start; /// __term_start is provided by the linker script, start of .commands segment.
	extern command_t __term_end;   /// __term_end is provided by the linker script, end of .commands segment.
    command_t* c = &__term_start;
	while(c < &__term_end){ /// and then loops through the command_t list
	    snprintf (address_info, sizeof (address_info), "for command address 0x%p", c);
	    c->function ((UINT8 *) address_info);
	    c++;
	}
	
	return 0;
}
