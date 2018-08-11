

/**
 * main.c
 */

#include <stdio.h>

int main(void)
{
    size_t num_chars;
    char text[80];

    num_chars = sprintf (text, "sizeof(num_chars)=%lu", sizeof (num_chars));

    return num_chars;
}
