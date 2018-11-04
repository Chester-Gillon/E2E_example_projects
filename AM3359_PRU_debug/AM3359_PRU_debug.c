#include <stdint.h>
#include <stdio.h>

/**
 * hello.c
 */
int main(void)
{
    for (uint32_t run_length = 1; run_length <= 10; run_length++)
    {
        uint32_t result = 1;
        for (uint32_t index = 1; index <= run_length; index++)
        {
            result *= index;
        }
        printf ("Result for run length %d = %d\n", run_length, result);
    }
	
	return 0;
}
