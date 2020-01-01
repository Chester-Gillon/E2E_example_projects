//******************************************************************************
//   MSP430L092 Demo - BlinkLED
//
//   Description: BlinkLED For L092 Target board using the Boost Converter LEDs
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
#include <stdbool.h>

int duty_cycle;

int num_reset_causes_unknown;
int num_reset_causes_bor;
int num_reset_causes_svmbor;
int num_reset_causes_rstnmi;
int num_reset_causes_dobor;
int num_reset_causes_secyv;
int num_reset_causes_dopor;
int num_reset_causes_wdtto;
int num_reset_causes_wdtkey;
int num_reset_causes_ccskey;
int num_reset_causes_pmmkey;
int num_reset_causes_perf;

int main(void)
{
    bool reset_causes_read = false;
    do
    {
        switch (SYSRSTIV)
        {
        case SYSRSTIV_NONE:
            reset_causes_read = true;
            break;

        case SYSRSTIV_BOR:
            num_reset_causes_bor++;
            break;

        case SYSRSTIV_SVMBOR:
            num_reset_causes_svmbor++;
            break;

        case SYSRSTIV_RSTNMI:
            num_reset_causes_rstnmi++;
            break;

        case SYSRSTIV_DOBOR:
            num_reset_causes_dobor++;
            break;

        case SYSRSTIV_SECYV:
            num_reset_causes_secyv++;
            break;

        case SYSRSTIV_DOPOR:
            num_reset_causes_dopor++;
            break;

        case SYSRSTIV_WDTTO:
            num_reset_causes_wdtto++;
            break;

        case SYSRSTIV_WDTKEY:
            num_reset_causes_wdtkey++;
            break;

        case SYSRSTIV_CCSKEY:
            num_reset_causes_ccskey++;
            break;

        case SYSRSTIV_PMMKEY:
            num_reset_causes_pmmkey++;
            break;

        case SYSRSTIV_PERF:
            num_reset_causes_perf++;
            break;

        default:
            num_reset_causes_unknown++;
            break;
        }

    } while (!reset_causes_read);

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

    TA1CCR0 = 12000;
    TA1CCTL0 = CCIE;
    TA1CTL = TASSEL_1+ID_3+TACLR+MC_1;
    __bis_SR_register(GIE);                   // Enable interrupts
    while(1);

}

// Timer A1 interrupt service routine
#pragma vector=TIMER1_A0_VECTOR
__interrupt void Timer_A1 (void)
{
    if (duty_cycle == 0)
    {
        P1SEL1 |= 0x04;
        P1SEL0 |= 0x04;
        duty_cycle++;
    }
    else if (duty_cycle == 3)
    {
        P1SEL1 &= ~0x04;
        P1SEL0 &= ~0x04;
        duty_cycle = 0;

    }
    else
    {
        duty_cycle++;
    }
}
