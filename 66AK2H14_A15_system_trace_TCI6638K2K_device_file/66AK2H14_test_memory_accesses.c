#include <stdint.h>
#include <time.h>
#include <stdio.h>

#define BUFFER_SIZE_WORDS (256 * 1024 * 1024)
static uint32_t buffer[BUFFER_SIZE_WORDS];

int main (void)
{
    uint32_t index;
    clock_t start_time;
    clock_t stop_time;

    for (;;)
    {
        start_time = time (NULL);
        for (index = 0; index < BUFFER_SIZE_WORDS; index++)
        {
            buffer[index]++;
        }
        stop_time = time (NULL);
        printf ("Updated %u bytes of memory in %lu seconds\n", BUFFER_SIZE_WORDS * sizeof (uint32_t), stop_time - start_time);
    }
}
