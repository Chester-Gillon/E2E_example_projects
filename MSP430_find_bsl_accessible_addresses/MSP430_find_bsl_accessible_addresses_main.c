/**
 * This program is designed to probe which addresses in the BSL of a MSP430FRxxx are inaccessible.
 * Attempting to read an inaccessible address in the BSL results in the device being reset with a Security Violation,
 * so the program has to maintain persistent state in FRAM to keep track of progress.
 */

#include <msp430.h> 
#include <stdint.h>
#include <stdbool.h>

#define MAX_INACCESSIBLE_REGIONS 64
struct
{
    bool initialised;
    uintptr_t bsl_read_addr;
    uint16_t num_inaccessible_regions;
    struct
    {
        uintptr_t start_addr;
        uintptr_t end_addr;
    } inaccessible_regions[MAX_INACCESSIBLE_REGIONS];
} bsl_probe =
{
    .initialised = false
};
#pragma PERSISTENT (bsl_probe);

/* Probe from BSL ROM start address on low memory to the highest MSPX highest address.
 * On some MSP430FR there is 2nd part of BSL ROM at the top of the address space.
 * This also covers vacant addresses on some devices.
 *
 * It excludes peripherals in at the lowest addresses.
 */
#define BSL_BEGIN_READ_ADDR 0x1000
#define BSL_END_READ_ADDR   0x100000

/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer

	/* Determine if we were reset due to a security violation */
	bool security_violation = false;
	uint16_t reset_reason = SYSRSTIV;
	while (reset_reason != 0)
	{
	    if (reset_reason == SYSRSTIV_SECYV)
	    {
	        security_violation = true;
	    }
	    reset_reason = SYSRSTIV;
	}

#ifdef PFWP_L
	/* Disable FRAM program protection */
	SYSCFG0 = FRWPPW & ~PFWP_L;
#endif
	
	if (bsl_probe.initialised)
	{
	    if (security_violation)
	    {
	        /* Record the BSL address which caused the security violation when read */
	        if (bsl_probe.num_inaccessible_regions == 0)
	        {
	            /* Add first inaccessible address */
	            bsl_probe.inaccessible_regions[0].start_addr = bsl_probe.bsl_read_addr;
	            bsl_probe.inaccessible_regions[0].end_addr = bsl_probe.bsl_read_addr;
	            bsl_probe.num_inaccessible_regions = 1;
	        }
	        else if ((bsl_probe.inaccessible_regions[bsl_probe.num_inaccessible_regions - 1].end_addr + 1) ==
	                bsl_probe.bsl_read_addr)
	        {
	            /* Extend a range of inaccessible addresses */
	            bsl_probe.inaccessible_regions[bsl_probe.num_inaccessible_regions - 1].end_addr = bsl_probe.bsl_read_addr;
	        }
	        else if (bsl_probe.num_inaccessible_regions < MAX_INACCESSIBLE_REGIONS)
	        {
	            /* Add a new range of inaccessible addresses */
	            bsl_probe.inaccessible_regions[bsl_probe.num_inaccessible_regions].start_addr = bsl_probe.bsl_read_addr;
	            bsl_probe.inaccessible_regions[bsl_probe.num_inaccessible_regions].end_addr = bsl_probe.bsl_read_addr;
	            bsl_probe.num_inaccessible_regions++;
	        }

	        /* Advance to the next BSL address to be probed */
	        bsl_probe.bsl_read_addr++;
	    }
	}
	else
	{
	    bsl_probe.initialised = true;
	    bsl_probe.bsl_read_addr = BSL_BEGIN_READ_ADDR;
	}

	for (;;)
	{
	    if (bsl_probe.bsl_read_addr == BSL_END_READ_ADDR)
	    {
	        /* Turn on a a LED to indicate the test is complete */
#ifdef __MSP430FR2633__
            P1DIR |= BIT6;
            P1OUT |= BIT6;
#else
	        P1DIR |= BIT0;
	        P1OUT |= BIT0;
#endif
	        PM5CTL0 &= ~LOCKLPM5;
	        for (;;)
	        {
	        }
	    }

	    /* Probe which bytes in the BSL ROM are accessible. If inaccessible results in the program being reset by a
	     * security violation. */
	    volatile uint8_t *const bsl_byte = (volatile uint8_t *) bsl_probe.bsl_read_addr;
	    *bsl_byte;
	    bsl_probe.bsl_read_addr++;
	}

}
