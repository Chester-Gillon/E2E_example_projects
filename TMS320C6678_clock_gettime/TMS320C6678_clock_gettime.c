/*
 *  ======== main.c ========
 */

#include <stdint.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <c6x.h>

#include <xdc/std.h>

#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Types.h>

#include <ti/sysbios/BIOS.h>

#include <ti/sysbios/knl/Task.h>

#include <ti/sysbios/knl/Clock.h>
#include <pthread.h>
#include <time.h>
#include <sys/time.h>


#define TEST_VECTOR_LENGTH 50000000
double test_vector[TEST_VECTOR_LENGTH];


float calc_time(struct timespec *tic, struct timespec *toc)
{
    const int64_t nsecs_per_sec = 1000000000LL;
    const int64_t start_time = (tic->tv_sec * nsecs_per_sec) + tic->tv_nsec;
    const int64_t stop_time  = (toc->tv_sec * nsecs_per_sec) + toc->tv_nsec;

    /* Clock_tickPeriod in seconds */
    return (stop_time - start_time) * 1e-9f;
}

// Presumes "result" is of type "long long"
#define READ_TIMER(result)                        \
   do                                             \
   {                                              \
      unsigned int isr_tmp;                       \
      unsigned int lo_tmp;                        \
                                                  \
      isr_tmp = _disable_interrupts();            \
      lo_tmp = TSCL;                              \
      result = _itoll(TSCH, lo_tmp);              \
      _restore_interrupts(isr_tmp);               \
   } while (0)


/*
 *  ======== taskFxn ========
 */
Void taskFxn(UArg a0, UArg a1)
{
    Types_FreqHz freq;
    int vector_index;
    int64_t t1;
    int64_t t2;
    struct timespec tic;
    struct timespec toc;

    BIOS_getCpuFreq(&freq);
    printf ("Test starting (Clock_tickPeriod=%u)\n", Clock_tickPeriod);

    clock_gettime (CLOCK_MONOTONIC, &tic);
    READ_TIMER (t1);
    for (vector_index = 0; vector_index < TEST_VECTOR_LENGTH; vector_index++)
    {
        test_vector[vector_index] = rand() / (double) RAND_MAX;
    }
    for (vector_index = 0; vector_index < TEST_VECTOR_LENGTH; vector_index++)
    {
        test_vector[vector_index] = cos (test_vector[vector_index]);
    }
    READ_TIMER (t2);
    clock_gettime (CLOCK_MONOTONIC, &toc);

    const float elapsed_monotonic = calc_time(&tic, &toc);
    const float elapsed_ticks = (t2 - t1) / (float) freq.lo;

    printf ("Measured time from CLOCK_MONOTONIC = %.6f seconds\n", elapsed_monotonic);
    printf ("Measured time from CPU ticks = %.6f seconds\n", elapsed_ticks);
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
