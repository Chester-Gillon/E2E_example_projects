/*
 * tracer.c
 *
 *  Created on: 20 Nov 2021
 *      Author: mr_halfword
 */

void *trace_var;

#pragma FUNC_ALWAYS_INLINE (trace_hook)
void trace_hook (void (*addr)())
{
    trace_var = addr;
}



