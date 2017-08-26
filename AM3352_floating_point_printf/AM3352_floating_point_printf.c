#include <math.h>
#include <stdio.h>

/** The printf format string is passed as a variable to the printf() function, to prevent
 *  the TI arm compiler reporting an error when --printf_support=nofloat is used.
 */
const char *non_floating_point_format_str = "Truncated result=%ld\n";
const char *floating_point_format_str = "sqrt(%.10g)=%.10g\n";

int main(void)
{
    const double input = 123456.789;
    const double result = sqrt (input);

    printf (non_floating_point_format_str, (long int) result);
    printf (floating_point_format_str, input, result);

    return 0;
}
