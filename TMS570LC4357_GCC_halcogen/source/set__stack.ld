/* Set the symbol which the _start() newlib function set the stack pointer to.
   The value here must match the value in userSp in the HALCoGen HL_sys_core file */
__stack = 0x08001000;

/* Work-around the issue where the HALCoGen generated HL_sys_link.ld places the read-only .ARM.extab section in RAM rather than FLASH.
   Placed in a separate linker script due to HL_sys_link.ld not containing any USER CODE blocks to preserve changes.
   For this to work relies upon this linker script being passed to the linker after HL_sys_link.ld by CCS.

   The following thread was raised to report the issue:
   https://e2e.ti.com/support/microcontrollers/other/f/other-microcontrollers-forum/996446/halcogen-halcogen-04-07-01-hl_sys_link-ld-gcc-linker-script-places-read-only-section-arm-extab-section-in-ram-not-flash
*/
SECTIONS
{
   .ARM.extab   : { *(.ARM.extab* .gnu.linkonce.armextab.*) } >FLASH
}
