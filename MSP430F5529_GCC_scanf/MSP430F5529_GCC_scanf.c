#include <msp430.h> 
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	int unit;
	int rc;

	/* Find the maximum allocation size which can be made */
#ifdef __TI_COMPILER_VERSION__
	/* @todo Disabled for the GNU compiler, since causes the GNU malloc() to abort the program by calling exit() after reporting
     *      "Heap and stack collision" on the console.*/
    char *current_alloc;
    size_t current_alloc_size = 4;
    size_t max_alloc_size = 0;

	do
	{
	    current_alloc = malloc (current_alloc_size);
	    if (current_alloc != NULL)
	    {
	        max_alloc_size = current_alloc_size;
	        current_alloc_size += 4;
	        free (current_alloc);
	    }
	} while (current_alloc != NULL);

	printf("max_alloc = %zu\n", max_alloc_size);
#endif
	printf("What unit would you like your weight to display in?");

	fflush(stdout);

	errno = 0;
	rc = scanf("%d", &unit);
	const int saved_errno = errno;

	printf("The unit value is %d (scanf return %d, errno=%d)\n", unit, rc, saved_errno);

	return unit;
}
