/*
 * @file AM3352_GCC_heap_overflow_test_main.c
 * @date 5 Nov 2017
 * @author Chester Gillon
 * @details Calls malloc() until a a NULL pointer is returned, to detect if a a heap overflow is detected
 */

#include <stdlib.h>
#include <stdio.h>

#define ALLOCATION_SIZE 1024

/* Global so can check values after an exception */
unsigned int num_allocations;
char *last_successful_allocation = NULL;
char *allocation;

int main (void)
{

    printf ("Starting heap allocation test, using allocated size %u\n", ALLOCATION_SIZE);

    num_allocations = 0;
    do
    {
        allocation = malloc (ALLOCATION_SIZE);
        if (allocation != NULL)
        {
            num_allocations++;
            last_successful_allocation = allocation;
        }
    } while (allocation != NULL);

    printf ("Performed %u successful allocations, last allocation %p\n", num_allocations, last_successful_allocation);

    return 0;
}
