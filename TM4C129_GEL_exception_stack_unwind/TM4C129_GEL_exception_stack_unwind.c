/**
 * Test program for a TM4C129 to demonstrate generating a hard fault.
 * By default the program runs successfully.
 *
 * By setting the following global variables from the CCS debugger expression view can cause the running
 * program to generate a hard fault:
 * a. With exception_enabled set a hard-fault is generated by an attempt to read from a reserved address in
 *    the TM4C129 memory map.
 * b. If use_floating_point is set when the hard fault occurs floating point state is saved during when
 *    the exception is entered. This allows testing unwinding the exception stack with and without
 *    floating point state saved.
 */

/**
 * main.c
 */

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

bool exception_enabled = false;
bool use_floating_point = false;


static void func_d (uint32_t *const data)
{
    (*data)++;
}

static void func_c (uint32_t *const data)
{
    func_d (data);
}

static void func_b (uint32_t *const data)
{
    func_c (data);
}

static void func_a (uint32_t *const data)
{
    func_b (data);
}

int main(void)
{
    uint32_t data = 0;
    uint32_t *const reserved_address = (uint32_t *) 0x03000000;
    char text[40];

    for (;;)
    {
        if (use_floating_point)
        {
            sprintf (text, "%f", (float) data);
        }

        if (exception_enabled)
        {
            /* Generate an exception by trying to increment a reserved address, so that the exception occurs on a read which results
             * in a synchronous exception meaning the PC shows the read instruction. */
            func_a (reserved_address);
        }
        else
        {
            func_a (&data);
        }
    }
}
