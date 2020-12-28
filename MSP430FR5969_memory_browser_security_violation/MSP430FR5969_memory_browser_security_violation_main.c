/**
 * Program to investigate the effect of the CCS memory browser accessing BLS ROM addresses which result in a Security Violation.
 *
 * Runs on a MSP-EXP5430FR5969
 *
 * Has:
 * a. Timer B0 interrupt overflow toggling the green LED on P1.0
 * b. Red LED on P4.6 turned on at initialisation, and turned off when S2 pressed, via an interrupt.
 *    This can be used to detect an unexpected reset.
 */

#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW | WDTHOLD;                 // Stop WDT

  // Configure GPIO
  P1DIR |= BIT0;
  P1OUT |= BIT0;
  PJSEL0 |= BIT4 | BIT5;
  P4DIR |= BIT6;
  P4OUT |= BIT6;

  // Disable the GPIO power-on default high-impedance mode to activate
  // previously configured port settings
  PM5CTL0 &= ~LOCKLPM5;

  P1OUT |= BIT1;                            // Pull-up resistor on P1.1
  P1REN = BIT1;                             // Select pull-up mode for P1.1
  P1DIR &= ~BIT1;                           // Set all but P1.1 to output direction
  P1IES = BIT1;                             // P1.1 Hi/Lo edge
  P1IFG = 0;                                // Clear all P1 interrupt flags
  P1IE = BIT1;                              // P1.1 interrupt enabled

  // Setup XT1
  CSCTL0_H = CSKEY >> 8;                    // Unlock CS registers
  CSCTL1 = DCOFSEL_6;                       // Set DCO to 8MHz
  CSCTL2 = SELA__LFXTCLK | SELS__DCOCLK | SELM__DCOCLK; // Set ACLK = XT1; MCLK = DCO
  CSCTL3 = DIVA__1 | DIVS__2 | DIVM__2;     // Set all dividers
  CSCTL4 &= ~LFXTOFF;
  do
  {
    CSCTL5 &= ~LFXTOFFG;                    // Clear XT1 fault flag
    SFRIFG1 &= ~OFIFG;
  }while (SFRIFG1&OFIFG);                   // Test oscillator fault flag
  CSCTL0_H = 0;                             // Lock CS registers

  TB0CTL = TBSSEL__ACLK | MC__CONTINUOUS | TBCLR | TBIE; // ACLK, contmode, clear TBR
                                            // enable interrupt

  __bis_SR_register(LPM3_bits | GIE);       // Enter LPM3, enable interrupts
  __no_operation();                         // For debugger
}

// TimerB Interrupt Vector (TBIV) handler
#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=TIMER0_B1_VECTOR
__interrupt void TIMER0_B1_ISR(void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(TIMER0_B1_VECTOR))) TIMER0_B1_ISR (void)
#else
#error Compiler not supported!
#endif
{
  switch(__even_in_range(TB0IV,TB0IV_TBIFG))
  {
    case TB0IV_NONE:   break;               // No interrupt
    case TB0IV_TBCCR1: break;               // CCR1 not used
    case TB0IV_TBCCR2: break;               // CCR2 not used
    case TB0IV_TBCCR3: break;               // CCR3 not used
    case TB0IV_TBCCR4: break;               // CCR4 not used
    case TB0IV_TBCCR5: break;               // CCR5 not used
    case TB0IV_TBCCR6: break;               // CCR6 not used
    case TB0IV_TBIFG:                       // overflow
      P1OUT ^= BIT0;
      break;
    default: break;
  }
}


// Port 1 interrupt service routine
#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=PORT1_VECTOR
__interrupt void Port_1(void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(PORT1_VECTOR))) Port_1 (void)
#else
#error Compiler not supported!
#endif
{
  P1IFG &= ~BIT1;                           // Clear P1.1 IFG
  P4OUT &= ~BIT6;
}
