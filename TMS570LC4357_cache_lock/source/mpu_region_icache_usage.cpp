/*
 * mpu_region_icache_usage.c
 *
 *  Created on: 1 Apr 2021
 *      Author: Chester Gillon
 *
 * Defines functions which occupy a specified number of bytes, consisting of just nops followed by a bx lr.
 * Achieving the required function size has been tested with TI ARM compiler v20.2.4.LTS with -O2 --opt_for_speed=0
 *
 * This is to support investigating the ARM Cortex-R5 instruction cache being kept filled with just a fixed set of cacheable
 * regions. Supporting these functions are:
 * a. HALCoGen PMU configuration to only set the regions occupied by these functions are cacheable in the instruction cache.
 * b. Linker command file to place the functions at the addresses of the PMU regions.
 *
 * The technique of creating functions with a specific number of nops was taken from
 * https://stackoverflow.com/questions/26983548/c-c-macro-to-repeat-code/63468969#63468969
 *
 * Note:
 * a. Had to add __attribute__((always_inline)) to get the TI ARM compiler to unroll all nops in one function,
 *    rather than splitting into a number of private functions with additional branch instructions.
 * b. The compiler can take several minutes to compile this file.
 */

#include "mpu_region_icache_usage.h"

template< unsigned N >
inline static void __attribute__((always_inline)) nops(){
    asm (" nop");
    nops< N - 1 >();
}


template<> inline void nops<0>(){};

#define BYTES_PER_NOP 4
#define OVERHEAD_BYTES 4 /* bx lr */
#define NUM_NOPS_PER_REGION(REGION_SIZE_BYTES) (((REGION_SIZE_BYTES) - OVERHEAD_BYTES) / BYTES_PER_NOP)

void mpu_region_x_instructions __attribute__((section(".mpu_region_x"))) (void)
{
    nops<NUM_NOPS_PER_REGION (MPU_REGION_X_SIZE_BYTES)>();
}

void mpu_region_y_instructions __attribute__((section(".mpu_region_y"))) (void)
{
    nops<NUM_NOPS_PER_REGION (MPU_REGION_Y_SIZE_BYTES)>();
}
