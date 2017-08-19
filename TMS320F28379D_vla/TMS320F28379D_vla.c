#include <stdio.h>

void printf_from_vla (const size_t buffer_size)
{
    char buffer[buffer_size];

    snprintf (buffer, buffer_size, "String formatted in a VLA of length %lu at 0x%p", buffer_size, buffer);
    printf ("%s\n", buffer);
}

/*
 * hello.c
 */
int main(void)
{
    size_t buffer_size;

    for (buffer_size = 10; buffer_size < 100; buffer_size += 10)
    {
        printf_from_vla (buffer_size);
    }

    return 0;
}
