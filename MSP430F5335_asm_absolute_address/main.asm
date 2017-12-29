;-------------------------------------------------------------------------------
; MSP430 Assembler Code Template for use with TI Code Composer Studio
;
;
;-------------------------------------------------------------------------------
            .cdecls C,LIST,"msp430.h"       ; Include device header file
            
;-------------------------------------------------------------------------------
            .def    RESET                   ; Export program entry-point to
                                            ; make it known to linker.
;-------------------------------------------------------------------------------
            .text                           ; Assemble into program memory.
            .retain                         ; Override ELF conditional linking
                                            ; and retain current section.
            .retainrefs                     ; And retain any sections that have
                                            ; references to current section.

     .if $DEFINED(__LARGE_CODE_MODEL__)
        .asg  4, RETADDRSZ
     .else
        .asg  2, RETADDRSZ
     .endif

    .global _Z4testv
    .global __divu
    .global __remu

;-------------------------------------------------------------------------------
RESET       mov.w   #__STACK_END,SP         ; Initialize stackpointer
StopWDT     mov.w   #WDTPW|WDTHOLD,&WDTCTL  ; Stop watchdog timer


;-------------------------------------------------------------------------------
; Main loop here
;-------------------------------------------------------------------------------
            call      &__divu
            call &_Z4testv



;-------------------------------------------------------------------------------
; Stack Pointer definition
;-------------------------------------------------------------------------------
            .global __STACK_END
            .sect   .stack

;-------------------------------------------------------------------------------
; Interrupt Vectors
;-------------------------------------------------------------------------------
            .sect   ".reset"                ; MSP430 RESET Vector
            .short  RESET

    .sect ".TI.bound:__divu"
__divu: .asmfunc stack_usage(RETADDRSZ)
__remu:
    .bound  ".TI.bound:__divu", 0x9B54, 0
    CLR.W   R14     ; Initialize the remainder
    MOV.W   R12,R15     ; Copy dividend for shifting
    MOV.W   #1,R12      ; Walk 1 across for looping, also hold quotient
div_loop:
    RLA.W   R15     ; Shift dividend into remainder
    RLC.W   R14
    CMP.W   R13,R14     ; If current remainder > divisor, subtract
    JNC set_quotient_bit
    SUB.W   R13,R14
set_quotient_bit:
    RLC.W   R12     ; Set quotient bit (in carry),adv loop bit
    JNC div_loop
    RET
    .endasmfunc
