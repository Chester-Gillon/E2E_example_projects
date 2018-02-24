#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <msp430.h> 

typedef struct node_s
{
    unsigned int test_pattern;
    struct node_s *previous;
} node;


int main(void)
{
    volatile unsigned int num_allocs;
    unsigned int expected_test_pattern;
    node *tail = NULL;
    node *alloc;
    node *current;
    char fill;
    const size_t allocation_increment = 2;
    volatile size_t last_successfull_allocation_size;
    size_t allocation_size;
    char *data;
    char *volatile last_successfull_allocation;

    WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer

    /* Allocate as many nodes as possible.
     * The total number of allocations will be dependent on the per-allocation overhead as well as the heap size.
     * The per-allocation overhead is:
     *   2 bytes for --data_model=restricted
     *   4 bytes for --data_model=large  */
    num_allocs = 0;
    alloc = malloc (sizeof (node));
    while (alloc != NULL)
    {
        num_allocs++;
        alloc->test_pattern = num_allocs;
        alloc->previous = tail;
        tail = alloc;
        alloc = malloc (sizeof (node));
    }

    /* Verify the test pattern in the nodes, freeing the nodes */
    expected_test_pattern = num_allocs;
    alloc = tail;
    while (expected_test_pattern > 0)
    {
        if (alloc->test_pattern != expected_test_pattern)
        {
            for (;;)
            {
            }
        }
        current = alloc;
        alloc = alloc->previous;
        free (current);
        expected_test_pattern--;
    }

    /* Determine the maximum size allocation which can be made */
    last_successfull_allocation_size = 0;
    last_successfull_allocation = NULL;
    fill = 0;
    allocation_size = allocation_increment;
    data = malloc (allocation_size);
    while (data != NULL)
    {
        last_successfull_allocation_size = allocation_size;
        last_successfull_allocation = data;
        fill++;
        memset (&data[allocation_size - allocation_increment], fill, allocation_increment);
        free (data);
        allocation_size += allocation_increment;
        data = malloc (allocation_size);
    }

    return 0;
}
