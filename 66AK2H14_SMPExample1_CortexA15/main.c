/*
 *  ======== SMPExample1.c ========
 *  This test verifies Task_setAffinity() is working.
 *
 *  Task0 changes Task1's affinity from 1 to 0 and Task1
 *  changes Task0's affinity from 0 to 1.
 *
 */


/*
 *  ======== Header Files ========
 */
#include <stdlib.h>

#include <xdc/std.h>
#include <xdc/cfg/global.h>
#include <xdc/runtime/System.h>

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/hal/Core.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Task.h>
//#include <ti/sysbios/smp/Load.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <xdc/runtime/Timestamp.h>

/*
 *  ======== Global Variable Declaration ========
 */

Int period = 16;
Swi_Handle swi0;
Clock_Handle clock0;
Timer_Handle timer0;
Task_Handle tsk0, tsk1, tsk2, tsk3;
volatile Bool periodInc = TRUE;
volatile Bool tsk0Done = FALSE, tsk1Done = FALSE, tsk2Done = FALSE, tsk3Done = FALSE;

/*
 *  ======== Macro definitions ========
 */

#define SWEEP_TIMER_LLIMIT 16
#define SWEEP_TIMER_ULIMIT 30000

/*
 *  ======== Function Prototypes ========
 */

Void isr0Fxn(UArg arg);
Void myTask0(UArg arg0, UArg arg1);
Void myTask1(UArg arg0, UArg arg1);
Void myTask2(UArg arg0, UArg arg1);
Void myTask3(UArg arg0, UArg arg1);
Void swi0Fxn(UArg arg1, UArg arg2);

/*
 * ======== main() begins here ========
 */
Int main(Int argc, char* argv[])
{
    Task_Params tskParams;
    Timer_Params timerParams;

    System_printf("Beginning test.\n");

    Task_Params_init(&tskParams);
    tskParams.priority = 2;
    tskParams.arg0 = 0;
    tskParams.affinity = 0;
    tsk0 = Task_create(myTask0, &tskParams, NULL);

    tskParams.priority = 3;
    tskParams.arg0 = 1;
    tskParams.affinity = 1;
    tsk1 = Task_create(myTask1, &tskParams, NULL);

    tskParams.priority = 4;
    tskParams.arg0 = 2;
    tskParams.affinity = 2;
    tsk2 = Task_create(myTask2, &tskParams, NULL);

    tskParams.priority = 5;
    tskParams.arg0 = 3;
    tskParams.affinity = 3;
    tsk3 = Task_create(myTask3, &tskParams, NULL);

    swi0 = Swi_create(swi0Fxn, NULL, NULL);

    Timer_Params_init(&timerParams);
    timerParams.periodType = Timer_PeriodType_COUNTS;
    timerParams.runMode = Timer_RunMode_ONESHOT;
    timerParams.startMode = Timer_StartMode_USER;
    timer0 = Timer_create(Timer_ANY, isr0Fxn, &timerParams, NULL);

    /* start sweep timer now so that it will sweep thru BIOS_start() */
    Timer_trigger(timer0, period);

    BIOS_start();
    return (0);
}

/*
 *  ======== idl0Fxn ========
 *  Called at the end of the program execution
 */
Void idl0Fxn()
{
    while(TRUE) {
        if(tsk0Done && tsk1Done && tsk2Done && tsk3Done) {
            System_printf("Sucessfully Completed Test. Exiting ... \n");
            BIOS_exit(0);
        }
    }
}

/*
 *  ======== isr0Fxn ========
 */
Void isr0Fxn(UArg arg)
{
    Swi_post(swi0);
}

Void swi0Fxn(UArg arg1, UArg arg2)
{
    /* Make timer period oscillate between 16 and 30000 */
    if(periodInc) {
        if(period<SWEEP_TIMER_ULIMIT) {
            period++;
        }
        else {
            period--;
            periodInc = FALSE;
        }
    }
    else {
        if(period > SWEEP_TIMER_LLIMIT) {
            period--;
        }
        else {
            period++;
            periodInc = TRUE;
        }
    }

    Timer_trigger(timer0, period);
}

/*
 *  ======== myTask0 ========
 */
Void myTask0(UArg arg0, UArg arg1)
{
    UInt newCoreId = arg0, oldAffinity;

    System_printf ("Core%u: Task0 setting task1's new affinity. \n", Core_getId());
    oldAffinity = Task_setAffinity(tsk1, newCoreId);
    if(newCoreId == oldAffinity) {
        System_printf("Task_setAffinity failed for task %u \n", !arg0);
        BIOS_exit(0);
    }

    System_printf ("Core%u: Task0 running again. \n", Core_getId());

    while (!tsk1Done);
    tsk0Done = TRUE;
}

/*
 *  ======== myTask1 ========
 */
Void myTask1(UArg arg0, UArg arg1)
{
    UInt newCoreId = arg0, oldAffinity;

    while (Core_getId() != 0);
    System_printf ("Core%u: Task1 setting task2's new affinity. \n", Core_getId());

    oldAffinity = Task_setAffinity(tsk2, newCoreId);
    if(newCoreId == oldAffinity) {
        System_printf("Task_setAffinity failed for task %u \n", !arg0);
        BIOS_exit(0);
    }

    tsk1Done = TRUE;
}

/*
 *  ======== myTask2 ========
 */
Void myTask2(UArg arg0, UArg arg1)
{
    UInt newCoreId = arg0, oldAffinity;

    while (Core_getId() != 1);
    System_printf ("Core%u: Task2 setting task3's new affinity. \n", Core_getId());

    oldAffinity = Task_setAffinity(tsk3, newCoreId);
    if(newCoreId == oldAffinity) {
        System_printf("Task_setAffinity failed for task %u \n", !arg0);
        BIOS_exit(0);
    }

    tsk2Done = TRUE;
}

/*
 *  ======== myTask3 ========
 */
Void myTask3(UArg arg0, UArg arg1)
{
    UInt newCoreId = arg0, oldAffinity;

    while (Core_getId() != 2);
    System_printf ("Core%u: Task3 setting task0's new affinity. \n", Core_getId());

    oldAffinity = Task_setAffinity(tsk0, newCoreId);
    if(newCoreId == oldAffinity) {
        System_printf("Task_setAffinity failed for task %u \n", !arg0);
        BIOS_exit(0);
    }

    tsk3Done = TRUE;
}
