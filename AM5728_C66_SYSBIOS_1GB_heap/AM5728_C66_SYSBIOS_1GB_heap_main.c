/*
 *  ======== main.c ========
 */

#include <xdc/std.h>

#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Memory.h>
#include <xdc/cfg/global.h>

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/heaps/HeapMem.h>

#include <ti/sysbios/knl/Task.h>

/* Table which defines how the 1GB heap is tested. It uses a number of different allocations, for which the total size of
 * the allocations made adds up to 1GB. */
#define MAX_ALLOCS 4
static const struct
{
    uint32_t num_allocs;
    size_t alloc_sizes[MAX_ALLOCS];
} alloc_defs[] =
{
    {.num_allocs = 1, .alloc_sizes = {0x40000000}},
    {.num_allocs = 2, .alloc_sizes = {0x20000000, 0x20000000}},
    {.num_allocs = 3, .alloc_sizes = {0x10000000, 0x20000000, 0x10000000}},
    {.num_allocs = 4, .alloc_sizes = {0x10000000, 0x08000000, 0x20000000, 0x08000000}}
};
static const uint32_t num_alloc_iterations = sizeof (alloc_defs) / sizeof (alloc_defs[0]);


/**
 * @brief Create a 64-bit pseudo-random pattern for filling allocations from the heap, which can be checked
 * @details Parameters taken from the "MMIX" entry on https://en.wikipedia.org/wiki/Linear_congruential_generator
 * @param[in] seed_in Current value of the pseudo-random sequence.
 * @return The next value in the pseudo-random sequence.
 */
static inline uint64_t generate_fill_pattern (const uint64_t seed_in)
{
    const uint64_t multiplier = 6364136223846793005LLU;
    const uint64_t increment  = 1442695040888963407LLU;

    return (seed_in * multiplier) + increment;
}


/*
 *  ======== taskFxn ========
 */
/**
 * @brief Task which tests the 1GB heap, to determine the total size of allocations which can be made.
 * @details Also inserts a test pattern into the allocations, which is verified before each allocation is freed.
 * @param[in] a0, a1 Not used.
 */
Void taskFxn(UArg a0, UArg a1)
{
    uint64_t *capture_buffers[MAX_ALLOCS] = {NULL};
    size_t capture_buffer_sizes[MAX_ALLOCS] = {0};
    uint64_t buffer_initial_seeds[MAX_ALLOCS] = {0};
    uint32_t test_iteration;
    uint32_t alloc_size_index;
    size_t alloc_size;
    uint64_t fill_seed;
    uint64_t expected_seed;
    uint32_t fill_index;
    uint32_t fill_num_words;
    Error_Block eb;

    Error_init(&eb);

    /* Run all test iterations, which varies the number and sizes of allocations */
    fill_seed = 0;
    for (test_iteration = 0; test_iteration < num_alloc_iterations; test_iteration++)
    {
        /* Attempt to allocate the requested sizes. If an allocation fails at the requested size, reduce the size of the
         * allocation until successful. After a successful allocation, the allocation is filled with a test pattern. */
        System_printf ("Test iteration %u using %u allocations\n", test_iteration, alloc_defs[test_iteration].num_allocs);
        System_flush ();
        for (alloc_size_index = 0; alloc_size_index < alloc_defs[test_iteration].num_allocs; alloc_size_index++)
        {
            /* Attempt one allocation of the requested size, and if fails reduce the size until succeeds. */
            alloc_size = alloc_defs[test_iteration].alloc_sizes[alloc_size_index];
            do
            {
                capture_buffers[alloc_size_index] = Memory_alloc (HeapMem_Handle_upCast(CAPTURE_HEAP), alloc_size, 128, &eb);
                if (capture_buffers[alloc_size_index] == NULL)
                {
                    alloc_size -= 8;
                }
            } while ((alloc_size > 0) && (capture_buffers[alloc_size_index] == NULL));
            capture_buffer_sizes[alloc_size_index] = alloc_size;

            /* Fill the allocated buffer with a test pattern */
            buffer_initial_seeds[alloc_size_index] = fill_seed;
            fill_num_words = capture_buffer_sizes[alloc_size_index] / sizeof (uint64_t);
            for (fill_index = 0; fill_index < fill_num_words; fill_index++)
            {
                fill_seed = generate_fill_pattern (fill_seed);
                capture_buffers[alloc_size_index][fill_index] = fill_seed;
            }
        }

        /* Report the requested and actual allocation sizes, along with the start address of each allocation */
        for (alloc_size_index = 0; alloc_size_index < alloc_defs[test_iteration].num_allocs; alloc_size_index++)
        {
            System_printf ("  Requested alloc_size=0x%08x  actual alloc_size=0x%08x  buffer=%p\n",
                           alloc_defs[test_iteration].alloc_sizes[alloc_size_index], capture_buffer_sizes[alloc_size_index],
                           capture_buffers[alloc_size_index]);
            System_flush ();
        }

        /* Free the allocations in the reverse order to which they are made, verifying that contain the expected fill pattern
         * prior to being freed. */
        alloc_size_index = alloc_defs[test_iteration].num_allocs;
        while (alloc_size_index > 0)
        {
            alloc_size_index--;

            expected_seed = buffer_initial_seeds[alloc_size_index];
            fill_num_words = capture_buffer_sizes[alloc_size_index] / sizeof (uint64_t);
            for (fill_index = 0; fill_index < fill_num_words; fill_index++)
            {
                expected_seed = generate_fill_pattern (expected_seed);
                if (capture_buffers[alloc_size_index][fill_index] != expected_seed)
                {
                    System_printf ("Incorrect fill pattern at index %u\n", fill_index);
                    BIOS_exit (0);
                }
            }

            Memory_free (HeapMem_Handle_upCast(CAPTURE_HEAP), capture_buffers[alloc_size_index],
                         capture_buffer_sizes[alloc_size_index]);
        }
    }

    System_printf ("Test complete\n");
    System_flush();
}

/*
 *  ======== main ========
 */
Int main()
{ 
    Task_Handle task;
    Error_Block eb;

    System_printf("enter main()\n");

    Error_init(&eb);

    task = Task_create(taskFxn, NULL, &eb);
    if (task == NULL) {
        System_printf("Task_create() failed!\n");
        BIOS_exit(0);
    }

    BIOS_start();    /* does not return */
    return(0);
}
