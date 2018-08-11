    // Project Name:  TA0InterruptTest

#include <msp430.h>

    /* GLOBAL VARIABLE AND CONSTANT INITIALIZATION */
    static unsigned int count = 0;     // counter for ISR loops

    /* FUNCTION DEFINTIONS */
    /* Initialize GPIO */
void Init_GPIO(void)
{
    // initialize port bits on the LaunchPad board
    P1DIR  |= BIT1 | BIT0;      // setup P1.0 and P1.1 as outputs for the on board red and green LEDs
    P1OUT  &= ~(BIT1 | BIT0);   // start with both LEDs off
    P4DIR  |= BIT1;             // setup P4.1 as diagnostic bit for ISR from TA0
    PM5CTL0 &= ~LOCKLPM5;       // clear the LPM5 lock bit to release I/O pins from high-Z state
}

    /* Initialize Clock System */
void Init_Clock(void)
{
    CSCTL0_H = CSKEY_H;         // unlock CS registers by writing password 0xA5 to upper byte
    CSCTL1 = DCOFSEL_0;         // set DCORSEL = 0, DCOFSEL = 000b, for 1 MHz output (approximately)
    CSCTL2 = SELA__VLOCLK | SELS__DCOCLK | SELM__DCOCLK;    // set ACLK = VLOCLK, SMCLK = DCOCLK, and MCLK = DCOCLK
    CSCTL0_H = 0;               // relock CS registers by writing incorrect password (zero)
}

    /* Timer TAO Initialization */
void Init_TA0(void)
{
    TA0CCR0 = 2000-1;           // set period to 2000 counts:  2.00 ms period, 500 Hz
    TA0CCTL0 = CCIE;            // set interrupt enable for TA0CCR0
    TA0CTL = TASSEL__SMCLK | MC__UP | TACLR /*| TAIE*/; // set source to SMCLK, count up, initially clear the TCR, enable interrupt
}

/* Timer TA0 ISR */
#pragma vector = TIMER0_A0_VECTOR
__interrupt void Timer0_A0_ISR (void)   // timer TA0 fires every 2.00 ms; ISR triggers at a 500 Hz rate
{
    P4OUT ^= BIT1;              // toggle P4.1; this should produce a 250 Hz square wave diagnostic output for scope triggering
    count++;                    // increment loop counter
    if(count == 500)            // should occur with a period of 500 x 2.0 ms = 1.000 second (1.00 Hz)
    {
        P1OUT ^= BIT1;          // toggle P1.1 green LED
        count = 0;              // reset counter
    }
}

    /* MAIN PROGRAM BODY */
    /* main.c */
int main(void)
{
    /* HARDWARE INITIALIZATION */
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    Init_GPIO();                // initialize the GPIO pins
    Init_Clock();               // initialize the Clock System
    Init_TA0();                 // initialize Timer TA0

    __delay_cycles(1900);  // buy time
    __enable_interrupt();       // enable global interrupts
    __no_operation();           //

    /* MAIN LOOP */
    while(1)
    {
        P1OUT ^= BIT0;          // toggle P1.0 red LED
        __delay_cycles(10000);  // buy time
    }
}
