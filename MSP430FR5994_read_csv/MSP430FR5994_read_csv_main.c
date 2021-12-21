#include <stdio.h>
#include <msp430.h> 
#include <stdlib.h>

#define SIGNAL_COLS4 2

int main()
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    FILE *file = NULL;
    int i;
    float bias3[SIGNAL_COLS4], num;
    file = fopen("../bias3.txt","r");
    if(file == NULL)
    {
        printf("Error while opening file\n");
        return -1;
    }
    i = 0;
    while(fscanf(file, "%f", &num)!= EOF)
    {
        bias3[i++] = num;
    }
    for(i=0;i<SIGNAL_COLS4;i++)
    {
        printf("value is: %.8g\n", bias3[i]);
    }
    fclose(file);
    return 0;
}
