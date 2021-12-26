/*
 * main.c
 */

#include <stdio.h>
#include "command_defs.h"

extern const command_def *command_ptrs_start[];
extern const command_def *command_ptrs_end[];

int main(void) {
	const command_def **command_ptrs;
	const command_def *command;

	for (command_ptrs = command_ptrs_start; command_ptrs != command_ptrs_end; command_ptrs++)
	{
		command = *command_ptrs;
		printf ("Calling initialisation for name=%s ID=%d\n", command->name, command->id);
		(*command->init_func) ();
	}
	
	return 0;
}
