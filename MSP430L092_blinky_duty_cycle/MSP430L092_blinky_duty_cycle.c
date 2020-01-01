//******************************************************************************
//   MSP430L092 Demo - BlinkLED
//
//   Description: BlinkLED For L092 Target board using the Boost Converter LEDs.
//                The DUTY_CYCLE_PERCENT macro set in the project properties specifies the duty cycle for which
//                the LEDs are on, and is set differently for the Debug and Release configurations.
//
//*******************************************************************************
//
//                MSP430L092
//                -----------------
//            /|\|                 |
//             --|RST              |
//               |                 |
//   Boost    -->|P1.2             |
//               |                 |
//                -----------------
//
//   Texas Instruments Inc.
//   May 2010
//******************************************************************************
#include <msp430.h>

int duty_count;
const int duty_cycle_percent = DUTY_CYCLE_PERCENT;

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop WDT
  CCSCTL0 = CCSKEY;                         // open CCS
  CCSCTL4 = SELA__HFCLK+SELS__HFCLK;
  CCSCTL5 = DIVA__4;
  CCSCTL8 = 0;
  do
  {
    SFRIFG1 = 0;
    CCSCTL7 = 0;
  }
  while( SFRIFG1 & OFIFG );

  P1DIR = 0x04;                             // P1.2 as output

  TA1CCR0 = 600;
  TA1CCTL0 = CCIE;
  TA1CTL = TASSEL_1+ID_3+TACLR+MC_1;
  __bis_SR_register(GIE);                   // Enable interrupts
  while(1);

}

// Timer A1 interrupt service routine
#pragma vector=TIMER1_A0_VECTOR
__interrupt void Timer_A1 (void)
{
    if (duty_count == 0)
    {
        P1SEL1 |= BIT2;
        P1SEL0 |= BIT2;
    }
    else if (duty_count == duty_cycle_percent)
    {
        P1SEL1 &= BIT4;
        P1SEL0 &= BIT4;
    }

    duty_count++;
    if (duty_count == 100)
    {
        duty_count = 0;
    }
}
