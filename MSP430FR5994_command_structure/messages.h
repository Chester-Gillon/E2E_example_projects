/*
 * messages.h
 *
 *  Created on: 23 May 2020
 *      Author: mr_halfword
 */

#ifndef MESSAGES_H_
#define MESSAGES_H_

typedef unsigned char     UINT8;

// Use this MACRO to declare terminal command functions
#define COMMAND(x, flags)             void term_##x (const UINT8* str); \
                                      __attribute__((section(".commands"))) __attribute((retain)) const command_t com_##x = { term_##x, #x, flags }; \
                                      void term_##x (const UINT8* str)

// Terminal command function pointer type, argument is the command.
typedef void(*fp_term)(const UINT8*);
// Struct for the command directory
typedef struct command_struct {
  fp_term function;
  UINT8 code[3];
  UINT8 flags;
} command_t;


#endif /* MESSAGES_H_ */
