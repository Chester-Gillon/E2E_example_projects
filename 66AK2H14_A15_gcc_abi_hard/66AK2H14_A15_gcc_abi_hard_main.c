
#include <stdio.h>
#include <math.h>

#define NUM_VALUES 10
static float test_pattern[NUM_VALUES];

/**
 * main.c
 */
int main(void)
{
    int iteration;

    for (iteration = 0; iteration < NUM_VALUES; iteration++)
    {
        test_pattern[iteration] = 2.0f + (iteration * 0.1f);
    }

    for (iteration = 0; iteration < NUM_VALUES; iteration++)
    {
        printf ("log10f(%g)=%g\n", test_pattern[iteration], log10f (test_pattern[iteration]));
    }

	return 0;
}
