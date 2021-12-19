/*
 * @file pthread_setname_np.c
 * @date 19 Dec 2021
 * @author Chester Gillon
 * @description Provides an implementation of pthread_setname_np() function for SYS/BIOS.
 */

#include <pthread_setname_np.h>

#include <xdc/runtime/Core.h>

/* Obtain access to the internal SYS/BIOS pthread_t structure */
#include <ti/posix/tirtos/_pthread.h>


/* Access the configuration specific layout of the Kernel task object, to detect the offset in the ti_sysbios_knl_Task_Handle
 * where the name is stored (if enabled). */
extern const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;


/**
 * @brief An implement of the pthread_setname_np() extension function, for use with the pthread library in SYS/BIOS
 * @details This writes to the thread name stored in the underlying SYS/BIOS task name, where the name is visible in ROV.
 * @param[in/out] thread The pthread to set the name for
 * @param[in] name The name of thread to set. This pointer is stored in the SYS/BIOS task handle, and so the strings
 *                 it points at must have static store allocation. Not sure if ROV will only follow the pointer within
 *                 certain section, but tests have shown a constant string pointer works and is then visible in ROV.
 */
int pthread_setname_np(pthread_t thread, const char *name)
{
    /* Determine if task names have been enabled in the SYS/BIOS configuration.
     *
     * This will be the non-zero offset to the object name pointer in the ti_sysbios_knl_Task_Handle structure when
     * the SYS/BIOS configuration has:
     *    var Task = xdc.useModule('ti.sysbios.knl.Task');
     *    Task.common$.namedInstance = true;
     *
     */
    if (ti_sysbios_knl_Task_Object__DESC__C.objName != 0)
    {
        /* Obtain access to the internal pthread structure */
        pthread_Obj *const thread_internal = (pthread_Obj *) thread;

        /* Access the SYS/BIOS bios task handle as an array of bytes so that can overlay a pointer to the name */
        char *const task_bytes = (char *) thread_internal->task;

        /* Set the pointer to the name in the SYS/BIOS task handle */
        xdc_runtime_Types_CordAddr **const handle_name =
                (xdc_runtime_Types_CordAddr **) &task_bytes[ti_sysbios_knl_Task_Object__DESC__C.objName];

        /* Store the caller supplied task name */
        *handle_name = (xdc_runtime_Types_CordAddr *) name;
    }

    return 0;
}
