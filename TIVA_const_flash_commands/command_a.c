/*
 * command_a.c
 *
 *  Created on: 15 May 2014
 *      Author: Mr_Halfword
 */

#include <stdio.h>

#include "command_defs.h"

static void command_a_init (void)
{
	printf ("Performing command A initialisation...\n");
}

const command_def cmd_a =
{
	.name = "command_a",
	.id = 1,
	.init_func = command_a_init
};

CMD_PTR(a)
