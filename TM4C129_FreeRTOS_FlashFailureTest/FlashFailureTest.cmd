/******************************************************************************
 *
 * Default Linker Command file for the Texas Instruments TM4C1294NCPDT
 *
 * This is derived from revision 14351 of the TivaWare Library.
 *
 *****************************************************************************/
//#include "memory_layout.h"

--retain=g_pfnVectors
--retain=app_header

/* The starting address of the application.  Normally the interrupt vectors  */
/* must be located at the beginning of the application.                      */

MEMORY
{
	//HEADER (RX) : origin = HEADER_BASE, length = HEADER_LEN
	//FLASH (RX) : origin = IMG_APP_BASE, length = (FLASH_SIZE - IMG_APP_BASE)	//half of flash
    //SRAM (RWX) : origin = SRAM_BASE, length = 0x00040000
	FLASH (RX) : origin = 0x00000000, length = 0x00100000
    SRAM (RWX) : origin = 0x20000000, length = 0x00040000
}

/* The following command line options are set as part of the CCS project.    */
/* If you are building using the command line, or for some reason want to    */
/* define them here, you can uncomment and modify these lines as needed.     */
/* If you are using CCS for building, it is probably better to make any such */
/* modifications in your CCS project and leave this file alone.              */
/*                                                                           */
/* --heap_size=0                                                             */
/* --stack_size=256                                                          */
/* --library=rtsv7M4_T_le_eabi.lib                                           */

/* Section allocation in memory */
/*"${PROJECT_BUILD_DIR}/../srec_cat.exe" "${PROJECT_BUILD_DIR}/${BuildArtifactFileBaseName}.bin" -binary -exclude 0x0 0x4 -crc32-b-e 0x0 -o "${PROJECT_BUILD_DIR}/${BuildArtifactFileBaseName}.bin" -binary
*/
SECTIONS
{
//    .intvecs:   > IMG_APP_BASE
    .intvecs:   > 0x00000000
//    .header :   > APP_HDR_ADDR
    .const  :   > FLASH
    .text   :   > FLASH
    GROUP:   > FLASH END(end_cinit)
    {
    .cinit  :
    .binit	:
    }
    .pinit  :   > FLASH
    .init_array : > FLASH

    .TI.ramfunc : {} load=FLASH, run=SRAM, table(BINIT)

//    .vtable :	> SRAM_BASE
    .vtable :   > 0x20000000
    .data   :   > SRAM
    .bss    :   > SRAM
    .sysmem :   > SRAM
    .stack  :   > SRAM
}

__STACK_TOP = __stack + 8192;
