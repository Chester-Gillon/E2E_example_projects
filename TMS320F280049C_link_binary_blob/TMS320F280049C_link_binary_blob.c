/**
 * @file TMS320F280049C_link_binary_blob.c
 * @author Chester Gillon
 * @date 12-Dec-2021
 * @details
 *  Program which demonstrates how to get the GCC ARM objcopy to create an object containing the contents of binary blob
 *  into an object file which can be linked using the TI C2000 linker.
 *  The source code of this file is used as a blob which is linked into the program so the program can display its source.
 *
 *  The project setup steps were:
 *  1. The output format needs to be set to "eabi (ELF)" and the section names in the linker command file set appropriately.
 *  2. Create a Linked Resource Path Variable named CG_ARM_ROOT with the following value:
 *       ${CCS_INSTALL_ROOT}/tools/compiler/ti-cgt-arm_20.2.5.LTS
 *  3. Create a Linked Resource Path Variable named CG_GCC_ROOT with the following value:
 *       ${CCS_INSTALL_ROOT}/tools/compiler/gcc-arm-none-eabi-9-2019-q4-major
 *  4. Add the following pre-build steps:
 *       ${CG_ARM_ROOT}/bin/armobjcopy --input-target=binary --output-target=elf32-littlearm ../TMS320F280049C_link_binary_blob.c TMS320F280049C_link_binary_blob_elf.o  --rename-section .data=.const,readonly
 *       ${CG_GCC_ROOT}/arm-none-eabi/bin/objcopy --input-target=elf32-little --alt-machine-code=141  TMS320F280049C_link_binary_blob_elf.o
 *
 *     Where:
 *     a. The alt-machine-code of 141 is the value for "Texas Instruments TMS320C2000 DSP family".
 *        This has to be done by the GCC objcopy, as the TI armobjcopy doesn't understand the --alt-machine-code option.
 *     b. By default, when converting from a binary to ELF file armobjcopy creates a .data section.
 *        Use of a .data section means the binary contents linked to the program can be modified at run time, but results
 *        in increased memory usage as the binary file has be copied to RAM by the run time start up code.
 *  5. Add the following linker libraries:
 *        TMS320F280049C_link_binary_blob_elf.o
 */

#include <stdint.h>
#include <stdio.h>

/* The symbols generated by the conversion of this source file into an object file */
extern int _binary____TMS320F280049C_link_binary_blob_c_start;
extern int _binary____TMS320F280049C_link_binary_blob_c_end;

int main(void)
{
    const unsigned int length = &_binary____TMS320F280049C_link_binary_blob_c_end - &_binary____TMS320F280049C_link_binary_blob_c_start;
    printf ("binary blob start address=0x%p\n", &_binary____TMS320F280049C_link_binary_blob_c_start);
    printf ("binary blob end address=0x%p\n", &_binary____TMS320F280049C_link_binary_blob_c_end);
    printf ("binary blob length=%u\n", length);
    printf ("binary blob contents:\n");

    /* Due to char being 16-bits on a C28xx the following has to byte-index the blob and output one character at a time */
    unsigned int byte_index;
    for (byte_index = 0; byte_index < length; byte_index++)
    {
        printf ("%c", __byte (&_binary____TMS320F280049C_link_binary_blob_c_start, byte_index));
    }
    return 0;
}
