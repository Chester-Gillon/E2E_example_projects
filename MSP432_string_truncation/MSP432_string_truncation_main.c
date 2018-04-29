#include <string.h>

#include "msp.h"

char group[32];
char field[32];

size_t get_total_string_lengths (const char *group_ptr, const char *field_ptr)
{
    size_t total_length = 0;

    total_length += strlen (group_ptr);
    total_length += strlen (field_ptr);
    return total_length;
}

void main(void)
{
    volatile size_t total_length;
    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer

    strcpy (group,  "OUTPUT_MEAURE");
    strcpy (field, "ADC_SS_MODE");
    total_length = get_total_string_lengths (group, field);
}
