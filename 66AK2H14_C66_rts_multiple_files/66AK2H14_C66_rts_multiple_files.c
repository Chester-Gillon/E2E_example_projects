#include <stdbool.h>
#include <stdio.h>

#define NUM_TEST_FILES 32

int main (void)
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

    for (file_index = 0; file_index < NUM_TEST_FILES; file_index++)
    {
        if (test_files[file_index] != NULL)
        {
            fprintf (test_files[file_index], "This is file %d\n", file_index + 1);
            fclose (test_files[file_index]);
        }
    }

    return 0;
}
