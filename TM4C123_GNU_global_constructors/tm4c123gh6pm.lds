/******************************************************************************
 *
 * Default Linker script for the Texas Instruments TM4C123GH6PM
 *
 * This is derived from revision 15071 of the TivaWare Library.
 *
 *****************************************************************************/

MEMORY
{
    FLASH (RX) : ORIGIN = 0x00000000, LENGTH = 0x00040000
    SRAM (WX)  : ORIGIN = 0x20000000, LENGTH = 0x00008000
}

REGION_ALIAS("REGION_TEXT", FLASH);
REGION_ALIAS("REGION_BSS", SRAM);
REGION_ALIAS("REGION_DATA", SRAM);
REGION_ALIAS("REGION_STACK", SRAM);
REGION_ALIAS("REGION_HEAP", SRAM);
REGION_ALIAS("REGION_ARM_EXIDX", FLASH);
REGION_ALIAS("REGION_ARM_EXTAB", FLASH);
ENTRY(ResetISR)

SECTIONS {

    PROVIDE (_intvecs_base_address = 0x0);

    .intvecs (_intvecs_base_address) : AT (_intvecs_base_address) {
        KEEP (*(.intvecs))
    } > REGION_TEXT

    PROVIDE (_vtable_base_address = 0x20000000);

    .vtable (_vtable_base_address) : AT (_vtable_base_address) {
        KEEP (*(.vtable))
    } > REGION_DATA

    .text : {
        CREATE_OBJECT_SYMBOLS
        *(.text)
        *(.text.*)
        . = ALIGN(0x4);
        KEEP (*(.ctors))
        . = ALIGN(0x4);
        KEEP (*(.dtors))
        . = ALIGN(0x4);
        __init_array_start = .;
        KEEP (*(.init_array*))
        __init_array_end = .;
        *(.init)
        *(.fini*)
    } > REGION_TEXT

    .rodata : {
        *(.rodata)
        *(.rodata*)
    } > REGION_TEXT

    /* The ResetISR function uses the __data_load__, __data_start__ and __data_end__ symbols
       to copy the .data segment initialisers from flash to SRAM.
    */
    .data : ALIGN (4) {
        __data_load__ = LOADADDR (.data);
        __data_start__ = .;
        *(.data)
        *(.data*)
        . = ALIGN (4);
        __data_end__ = .;
    } > REGION_DATA AT> REGION_TEXT

    .ARM.exidx : {
        __exidx_start = .;
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)
        __exidx_end = .;
    } > REGION_ARM_EXIDX

    .ARM.extab : {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > REGION_ARM_EXTAB

    /* The GCC run time library _start() start-up function zeros the .bss area
       identified by the range __bss_start__ ... (__bss_end__ - 1)
    */
    .bss : {
        __bss_start__ = .;
        *(.shbss)
        *(.bss)
        *(.bss.*)
        *(COMMON)
        . = ALIGN (4);
        __bss_end__ = .;
    } > REGION_BSS

    /* The GCC run time library assumes the the following memory layout for the heap and stack:
        end // Base address of heap
         |
         |  // Heap expands at increasing addresses
        \_/

         _
        / \
         |  // Stack expands at decreasing addresses
         |
         |  // Initial stack pointer

       The heap and stack need to be adjacent in memory, with the heap at a lower address than the stack.
       The symbol end defines the base address of the heap used by the GCC run time library.

       The GCC run time library doesn't reference any symbol which identifies the end address allocated
       for the heap. Instead, the heap is allowed to grow up to the current stack pointer (at the time
       of an allocation request).

       The linker symbol HEAPSIZE defined in the project properties specifies the
       number of bytes allocated for the heap.
    */
    .heap : {
        end = .;
        . = . + HEAPSIZE;
        KEEP(*(.heap))
    } > REGION_HEAP

    /* The symbol _stack gives the top of the stack which is referenced by both:
       - The initial stack pointer set in the vector table, which is the stack pointer
         at the start of the ResetISR() function.

       - The GCC run time library _start() start-up function, which is used to
         re-initialise the stack pointer.

       The linker symbol STACKSIZE defined in the project properties specifies the
       number of bytes allocated for the stack.
    */
    .stack : ALIGN(0x8) {
        . = . + STACKSIZE;
        __stack = .;
        KEEP(*(.stack))
    } > REGION_STACK
}
