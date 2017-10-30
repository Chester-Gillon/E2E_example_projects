/****************************************************************************/
/*  66AK2Gxx_C66.cmd                                                        */
/*  Copyright (c) 2016  Texas Instruments Incorporated                      */
/*  Author: Rafael de Souza                                                 */
/*                                                                          */
/*    Description: This file is a sample linker command file that can be    */
/*                 used for linking programs built with the C compiler and  */
/*                 running the resulting .out file on the C66x DSP core of  */
/*                 a 66AK2Gxx device.                                       */
/*                 Use it as a guideline.  You will want to                 */
/*                 change the memory layout to match your specific          */
/*                 target system.  You may want to change the allocation    */
/*                 scheme according to the size of your program.            */
/*                                                                          */
/****************************************************************************/

MEMORY
{

    L2_SRAM_0 :  o = 0x00800000 l = 0x00080000   /* 512kB internal SRAM */
    L2_SRAM_1 :  o = 0x00880000 l = 0x00080000   /* 512kB internal SRAM */
    MSMC_SRAM :  o = 0x0C000000 l = 0x00100000   /* 1MB MSMC Shared SRAM */
    DDR0      :  o = 0x80000000 l = 0x80000000   /* 2GB external DDR0 */

}

SECTIONS
{
    .text          >  DDR0
    .stack         >  DDR0
    .bss           >  DDR0
    .cio           >  DDR0
    .const         >  DDR0
    .data          >  DDR0
    .switch        >  DDR0
    .sysmem        >  DDR0
    .far           >  DDR0
    .args          >  DDR0
    .ppinfo        >  DDR0
    .ppdata        >  DDR0
  
    /* COFF sections */
    .pinit         >  DDR0
    .cinit         >  DDR0
  
    /* EABI sections */
    .binit         >  DDR0
    .init_array    >  DDR0
    .neardata      >  DDR0
    .fardata       >  DDR0
    .rodata        >  DDR0
    .c6xabi.exidx  >  DDR0
    .c6xabi.extab  >  DDR0
}


