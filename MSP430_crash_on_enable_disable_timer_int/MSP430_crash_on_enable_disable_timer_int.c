/*
 * This program has been created to demonstrate a crash on a MSP430 device when a timer interrupt
 * is enabled / disabled while global interrupts remain enabled.
 *
 * It is a simplified version of the original version in https://e2e.ti.com/support/microcontrollers/msp430/f/166/t/895839
 * in which the following changes have been made:
 * a. Leave the CPU clock at the device default at reset, which is nominally 1 MHz
 * b. Only use a single output pin which should be toggled to indicate the program is still running.
 * c. Leave the watchdog disabled, and add a trap of reading the SYSRSTIV at start-up and halt if has got
 *    a reset source which appears to be following a crash.
 * d. Change from using TA2 to TA0 to be able to run on smaller devices.
 */

#include <msp430.h>
#include <stdint.h>
#include <stdbool.h>

/* The pin toggled to indicate the program is still running */
#define LED_OPERATIONS_PORT                 P1OUT
#define LED_OPERATIONS_PORT_DIR             P1DIR
#ifdef __MSP430FR2633__
// CAPTIVATE-FR2633 LED1
#define LED_OPERATIONS_MASK                 BIT7
#else
#define LED_OPERATIONS_MASK                 BIT0
#endif

/* Structure where the padding field allows the address of the nTVal variable incremented by the TIMER2_A0_ISR
 * to be adjusted, instead of the #pragma LOCATION used in the original example.
 * This still allows the linker to check the RAM allocation when attempting to port the example to other devices.
 */
struct
{
    uint16_t nBlinkTimer;
    uint8_t padding[1272];
    volatile uint64_t nTVal;
} globals;

void Tick_Init()
{
    TA0CTL = 0;         // Disable clock

    globals.nTVal = 0xFEEDABBADEADBEEFULL;        // Large value for debugging

    // Configure all registers before start
    TA0CCTL0 = TA0CCTL1 = 0;
    TA0R = 0;
    TA0EX0 = TAIDEX_7;      // TAIDEX = /8

    TA0CCR0 = 50;      // for tests

    TA0CTL = TASSEL__SMCLK | ID__8 | MC__UP | TACLR; // | TAIE;         // TASSEL = SMCLK, ID = /8, MC = UP & reset, clear, int enable, intf clear - will start

    // The TAxCCR0 CCIFG interrupt flag is set when the timer counts to the TAxCCR0 value
    // Enable interrupt & clear flags
    TA0CCTL0 = CCIE;
}

uint16_t TickGet16()
{
    TA0CCTL0 &= ~CCIE;

    uint16_t nRet = (uint16_t) globals.nTVal;

    TA0CCTL0 |= CCIE;

    return nRet;
}

#pragma vector=TIMER0_A0_VECTOR
__interrupt void TIMER0_A0_ISR()
{
    globals.nTVal++;
}

int main(void)
{
    volatile uint16_t reset_cause;
    volatile bool halt_on_unexpected_reset_cause = true;

    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    do
    {
        reset_cause = SYSRSTIV;
        switch (reset_cause)
        {
        case SYSRSTIV_NONE:
        case SYSRSTIV_BOR:
        case SYSRSTIV_RSTNMI:
            /* Continue with the program, as probably a power up */
            break;

        default:
            /* Unexpected reset, halt to allow inspection in the debugger */
            while (halt_on_unexpected_reset_cause)
            {
            }
            break;
        }
    } while (reset_cause != 0);

    // Enable I/O if currently locked.
    // The conditional test allows operation on other than MSP430FR series devices.
    if ((PM5CTL0 & LOCKLPM5) != 0)
    {
        PM5CTL0 &= ~LOCKLPM5;
    }

    LED_OPERATIONS_PORT &= ~LED_OPERATIONS_MASK;                     // to off
    LED_OPERATIONS_PORT_DIR |= LED_OPERATIONS_MASK;                 // to output direction

    Tick_Init();
    __enable_interrupt ();

    // Main loop
    for (;;)
    {
        uint16_t nTmrNow = TickGet16();

        // Blink on 250 timer ticks
        if(nTmrNow - globals.nBlinkTimer > 250)
        {
            LED_OPERATIONS_PORT ^= LED_OPERATIONS_MASK;
            globals.nBlinkTimer = nTmrNow;
        }
    }
}
