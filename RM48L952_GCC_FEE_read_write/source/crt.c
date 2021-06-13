/* Simple functions to support the run-time library when using the AdaCore GNAT GCC distribution, which doesn't have the
 * standard C system startup files in the run time library. */

/* Gets called if the main function returns. Some of the GNAT run-time components handle this by causing a machine reset.
 * This version just spins in a loop to allow the debugger to inspect state. */
void _exit (int status)
{
    for (;;)
    {
    }
}

