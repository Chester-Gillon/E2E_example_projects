/*
 * command_defs.h
 *
 *  Created on: 15 May 2014
 *      Author: Mr_Halfword
 */

#ifndef COMMAND_DEFS_H_
#define COMMAND_DEFS_H_

typedef struct
{
	const char *name;
	int id;
	void (*init_func) (void);
} command_def;

#define STRINGIFY(s) #s
#define CMD_PTR_SYMBOL(x) cmd_##x##_ptr
#define CMD_PTR(x) \
	_Pragma(STRINGIFY (DATA_SECTION( CMD_PTR_SYMBOL(x) ,".commands"))) \
	_Pragma(STRINGIFY (RETAIN( CMD_PTR_SYMBOL(x) ))) \
    const command_def *const CMD_PTR_SYMBOL(x) = &cmd_##x;

#endif /* COMMAND_DEFS_H_ */
