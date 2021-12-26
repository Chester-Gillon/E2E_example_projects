/*
 * command_b.c
 *
 *  Created on: May 17, 2014
 *      Author: Mr_Halfword
 */

#include <stdio.h>

#include "command_defs.h"

static void command_b_init (void)
{
	printf ("Performing command B initialisation...\n");
}

const command_def cmd_b =
{
	.name = "command_b",
	.id = 2,
	.init_func = command_b_init
};

CMD_PTR(b)
