/*----------------------------------------------------------------------------*/
/* sys_link.cmd                                                               */
/*                                                                            */
/* 
* Copyright (C) 2009-2018 Texas Instruments Incorporated - www.ti.com  
* 
* 
*  Redistribution and use in source and binary forms, with or without 
*  modification, are permitted provided that the following conditions 
*  are met:
*
*    Redistributions of source code must retain the above copyright 
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the 
*    documentation and/or other materials provided with the   
*    distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/

/*                                                                            */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN (0) */
/* USER CODE END */


/*----------------------------------------------------------------------------*/
/* Linker Settings                                                            */

--retain="*(.intvecs)"

/* USER CODE BEGIN (1) */
/* USER CODE END */

/*----------------------------------------------------------------------------*/
/* Memory Map                                                                 */

MEMORY
{
/* USER CODE BEGIN (2) */
/* USER CODE END */
    VECTORS (X)  : origin=0x00000000 length=0x00000020
    FLASH0  (RX) : origin=0x00000020 length=0x001FFFE0
    FLASH1  (RX) : origin=0x00200000 length=0x00200000
    STACKS  (RW) : origin=0x08000000 length=0x00001500
    RAM     (RW) : origin=0x08001500 length=0x0007EB00

/* USER CODE BEGIN (3) */
/* USER CODE END */
}

/* USER CODE BEGIN (4) */
/* USER CODE END */


/*----------------------------------------------------------------------------*/
/* Section Configuration                                                      */

SECTIONS
{
/* USER CODE BEGIN (5) */
/* USER CODE END */
    .intvecs : {} > VECTORS
    .text   align(32) : {} > FLASH0 | FLASH1
    .const  align(32) : {} > FLASH0 | FLASH1
    .cinit  align(32) : {} > FLASH0 | FLASH1
    .pinit  align(32) : {} > FLASH0 | FLASH1
    .bss     : {} > RAM
    .data    : {} > RAM
    .sysmem  : {} > RAM
	

/* USER CODE BEGIN (6) */
#ifdef USE_RAMFUNCS
    /* Place the sin/cos functions and some support functions called from the timed functions in SRAM.
       The timing_tests() function is placed in SRAM via a rmfunc attribute in the source code. */
    .binit   : {} > FLASH0
    .TI.ramfunc :
    {
        /* The CMSIS DSP library functions and constant look up tables */
    	ti_math_Cortex_R4_bspf.lib<*>(.text)
    	ti_math_Cortex_R4_bspf.lib<*>(.const)
    	/* Standard library math functions sinf() / cosf(), their constant look up tables and and called functions.
    	   The dependencies were found by looking at the linker map file and checking for *tramp* symbols inserted
    	   by the linker. */
    	rtsv7R4_T_be_v3D16_eabi.lib<*>(.text:sinf)
    	rtsv7R4_T_be_v3D16_eabi.lib<*>(.text:cosf)
    	rtsv7R4_T_be_v3D16_eabi.lib<*>(.text:floor)
    	rtsv7R4_T_be_v3D16_eabi.lib<*>(.text:scalbn)
    	rtsv7R4_T_be_v3D16_eabi.lib<*>(.text:copysign)
    	rtsv7R4_T_be_v3D16_eabi.lib<*>(.text:__aeabi_errno_addr)
    	rtsv7R4_T_be_v3D16_eabi.lib<k_rem_pio2.c.obj>(.text)
    	rtsv7R4_T_be_v3D16_eabi.lib<k_rem_pio2.c.obj>(.const)
    } load=FLASH0, run=RAM, table(BINIT)
#endif
/* USER CODE END */
}

/* USER CODE BEGIN (7) */
/* USER CODE END */


/*----------------------------------------------------------------------------*/
/* Misc                                                                       */

/* USER CODE BEGIN (8) */
/* USER CODE END */
/*----------------------------------------------------------------------------*/

