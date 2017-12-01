/*
 *  ======== main.c ========
 */

#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include <xdc/std.h>

#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>

#include <ti/sysbios/BIOS.h>

#include <ti/sysbios/knl/Task.h>

/**
 * @brief Determine the maximum allocation which can be made from the heap
 */
Void taskFxn(UArg a0, UArg a1)
{
    const size_t allocation_increment = 0x100000;
    size_t last_successfull_allocation_size;
    size_t allocation_size;
    char *data;
    uint8_t fill;

    last_successfull_allocation_size = 0;
    fill = 0;
    allocation_size = allocation_increment;
    data = malloc (allocation_size);
    while (data != NULL)
    {
        last_successfull_allocation_size = allocation_size;
        fill++;
        memset (&data[allocation_size - allocation_increment], fill, allocation_increment);
        free (data);
        allocation_size += allocation_increment;
        data = malloc (allocation_size);
    }

    System_printf ("last_successfull_allocation_size=%u\n", last_successfull_allocation_size);
    System_flush(); /* force SysMin output to console */
    BIOS_exit(0);
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
