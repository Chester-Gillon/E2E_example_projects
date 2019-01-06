/*
 *  ======== main.c ========
 */

#include <stdio.h>

#include <xdc/std.h>

#include <xdc/runtime/Error.h>
#include <xdc/runtime/System.h>

#include <ti/sysbios/BIOS.h>

#include <ti/sysbios/knl/Task.h>

#define FILE_SIZE_BYTES 8192

static UInt8 output_data[FILE_SIZE_BYTES];
static UInt8 input_data[FILE_SIZE_BYTES + 1];


/*
 *  ======== taskFxn ========
 */
Void taskFxn(UArg a0, UArg a1)
{
    FILE *output_file;
    FILE *input_file;
    int pattern_index;
    size_t bytes_written;
    size_t bytes_read;
    int rc;

    for (pattern_index = 0; pattern_index < FILE_SIZE_BYTES; pattern_index++)
    {
        output_data[pattern_index] = (UInt8) pattern_index;
    }

    output_file = fopen ("A15_binary.dat", "wb");
    if (output_file == NULL)
    {
        System_printf("failed to create file\n");
        BIOS_exit(0);
    }

    bytes_written = fwrite (output_data, 1, FILE_SIZE_BYTES, output_file);
    if (bytes_written != FILE_SIZE_BYTES)
    {
        System_printf("failed to write file\n");
        BIOS_exit(0);
    }

    rc = fclose (output_file);
    if (rc != 0)
    {
        System_printf("failed to close file\n");
        BIOS_exit(0);
    }

    input_file = fopen ("A15_binary.dat", "rb");
    if (input_file == NULL)
    {
        System_printf("failed to open file\n");
        BIOS_exit(0);
    }

    bytes_read = fread (input_data, 1, sizeof (input_data), input_file);
    if (bytes_read != FILE_SIZE_BYTES)
    {
        System_printf("failed to read file\n");
        BIOS_exit(0);
    }

    rc = fclose (output_file);
    if (rc != 0)
    {
        System_printf("failed to close file\n");
        BIOS_exit(0);
    }

    for (pattern_index = 0; pattern_index < FILE_SIZE_BYTES; pattern_index++)
    {
        if (input_data[pattern_index] != (UInt8) pattern_index)
        {
            System_printf("read incorrect file data\n");
            BIOS_exit(0);
        }
    }

    System_printf("A15 binary file I/O complete\n");
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
