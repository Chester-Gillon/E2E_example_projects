/*
 * commands.c
 *
 *  Created on: 23 May 2020
 *      Author: mr_halfword
 */

#include <stdio.h>

#include "messages.h"

COMMAND(esr, 0)
{
    printf ("esr:%s\n", str);
}

COMMAND(dsr, 0)
{
    printf ("dsr:%s\n", str);
}

COMMAND(raf, 0)
{
    printf ("raf:%s\n", str);
}

COMMAND(saf, 0)
{
    printf ("saf:%s\n", str);
}
