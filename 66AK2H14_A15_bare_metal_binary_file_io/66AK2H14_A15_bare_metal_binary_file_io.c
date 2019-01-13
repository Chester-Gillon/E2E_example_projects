

/**
 * main.c
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#define FILE_SIZE_BYTES 8192

static uint8_t output_data[FILE_SIZE_BYTES];
static uint8_t input_data[FILE_SIZE_BYTES + 1];


int main(void)
{
    FILE *output_file;
    FILE *input_file;
    int pattern_index;
    size_t bytes_written;
    size_t bytes_read;
    int rc;

    for (pattern_index = 0; pattern_index < FILE_SIZE_BYTES; pattern_index++)
    {
        output_data[pattern_index] = (uint8_t) pattern_index;
    }

    output_file = fopen ("A15_binary.dat", "wb");
    if (output_file == NULL)
    {
        printf("failed to create file\n");
        exit (1);
    }

    bytes_written = fwrite (output_data, 1, FILE_SIZE_BYTES, output_file);
    if (bytes_written != FILE_SIZE_BYTES)
    {
        printf("failed to write file\n");
        exit (1);
    }

    rc = fclose (output_file);
    if (rc != 0)
    {
        printf("failed to close file\n");
        exit (1);
    }

    input_file = fopen ("A15_binary.dat", "rb");
    if (input_file == NULL)
    {
        printf("failed to open file\n");
        exit (1);
    }

    bytes_read = fread (input_data, 1, sizeof (input_data), input_file);
    if (bytes_read != FILE_SIZE_BYTES)
    {
        printf("failed to read file\n");
        exit (1);
    }

    rc = fclose (output_file);
    if (rc != 0)
    {
        printf("failed to close file\n");
        exit (1);
    }

    for (pattern_index = 0; pattern_index < FILE_SIZE_BYTES; pattern_index++)
    {
        if (input_data[pattern_index] != (uint8_t) pattern_index)
        {
            printf("read incorrect file data\n");
            exit (1);
        }
    }

    printf("A15 binary file I/O complete\n");

	return 0;
}
