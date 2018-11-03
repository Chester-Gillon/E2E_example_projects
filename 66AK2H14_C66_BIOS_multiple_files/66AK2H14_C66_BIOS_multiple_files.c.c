/*
 *  ======== main.c ========
 */

#include <xdc/std.h>

#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>

#include <ti/sysbios/BIOS.h>

#include <ti/sysbios/knl/Task.h>

#include <stdbool.h>
#include <stdio.h>

#define NUM_TEST_FILES 32

/*
 *  ======== taskFxn ========
 */
Void taskFxn(UArg a0, UArg a1)
{
    FILE *test_files[NUM_TEST_FILES] = {NULL};
    int file_index;
    char filename[128];

    file_index = 0;
    bool success;
    do
    {
        success = false;
        sprintf (filename, "file%02d.txt", file_index + 1);
        test_files[file_index] = fopen (filename, "w");
        if (test_files[file_index] != NULL)
        {
            file_index++;
            success = true;
        }
    } while ((file_index < NUM_TEST_FILES) && (success));
    printf ("Created %d files\n", file_index);

    int num_files_written = 0;
    for (file_index = 0; file_index < NUM_TEST_FILES; file_index++)
    {
        if (test_files[file_index] != NULL)
        {
            fprintf (test_files[file_index], "This is file %d\n", file_index + 1);
            fclose (test_files[file_index]);
            num_files_written++;
        }
    }
    printf ("Wrote %d files\n", num_files_written);
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
