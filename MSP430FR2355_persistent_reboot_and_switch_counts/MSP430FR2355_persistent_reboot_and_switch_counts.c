/*
 * @file MSP430FR2355_persistent_reboot_and_switch_counts.c
 * @date 29 May 2021
 * @author Chester Gillon
 * @details
 *  Example which runs in a MSP‑EXP430FR2355 to demonstrate storing permanent information in FRAM information memory.
 *
 *  The information which is stored in information memory are counters for:
 *  a. The total number of resets.
 *  b. The total number of S2 button presses while the program is running.
 *
 *  The permanent information is marked with a PERSISTENT pragma so is only reset when the program is downloaded,
 *  retaining its value across reboots.
 *
 *  The counts in permanent information are output on the EUSCI_A1 UART at 115200 baud.
 *  The counts are output on the UART:
 *  a. At start-up, where the test also includes the reset source(s) indicated by SYSRSTIV.
 *  b. When S1 is pressed.
 *
 *  The CCS Project Properties are set to write-protect the data (information) FRAM at start up, and so the protection
 *  is disabled around writes.
 */

#include "driverlib.h"
#include "Board.h"
#include <string.h>
#include <stdio.h>

/* Buffer used to contain a string to be transmitted by the UART Tx Interrupt handler.
 * tx_buffer_num_chars is the number of characters in the buffer.
 * tx_buffer_num_transmitted is now many have been transmitted already.
 *
 * When UCTXIE is set the buffer is in use.
 */
char tx_buffer[128];
uint16_t tx_buffer_num_chars;
uint16_t tx_buffer_num_transmitted;

/* Set from the timer interrupt when button presses have been detected */
static volatile bool s1_pressed;
static volatile bool s2_pressed;

static struct
{
    uint16_t total_resets;
    uint16_t total_s2_presses;
} permanent_info = {0};
#pragma LOCATION (permanent_info, 0x1800);
#pragma PERSISTENT (permanent_info);

/*
 * Returns true if the Tx buffer is idle
 */
static bool tx_buffer_idle (void)
{
    return (UCA1IE & UCTXIE) == 0;
}


/*
 * Start the process which transmits the contents of the tx_buffer from the UART.
 * This enables the transmit interrupt, which will write to the UART.
 */
static void start_uart_transmit (void)
{
    tx_buffer_num_chars = strlen (tx_buffer);
    if (tx_buffer_num_chars > 0)
    {
        tx_buffer_num_transmitted = 0;
        MAP_EUSCI_A_UART_enableInterrupt (EUSCI_A1_BASE, EUSCI_A_UART_TRANSMIT_INTERRUPT);
    }
}


void main (void)
{
    bool success;

    /* Stop watchdog timer */
    MAP_WDT_A_hold (WDT_A_BASE);

    /* Configure UART pins */
    MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(
        GPIO_PORT_UCA1TXD,
        GPIO_PIN_UCA1TXD,
        GPIO_FUNCTION_UCA1TXD
    );
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(
        GPIO_PORT_UCA1RXD,
        GPIO_PIN_UCA1RXD,
        GPIO_FUNCTION_UCA1RXD
    );

    /*  Configure Pins for XIN and XOUT */
    MAP_GPIO_setAsPeripheralModuleFunctionInputPin(
            GPIO_PORT_XIN,
            GPIO_PIN_XIN,
            GPIO_FUNCTION_XIN
    );
    MAP_GPIO_setAsPeripheralModuleFunctionOutputPin(
            GPIO_PORT_XOUT,
            GPIO_PIN_XOUT,
            GPIO_FUNCTION_XOUT
    );

    /* Disable the GPIO power-on default high-impedance mode to activate
     * previously configured port settings */
    MAP_PMM_unlockLPM5 ();

    /* Set number of wait states to allow 24 MHz clock */
    MAP_FRAMCtl_configureWaitStateControl (FRAMCTL_ACCESS_TIME_CYCLES_2);

    /* Initialises the XT1 crystal oscillator with no timeout.
       In case of failure, code hangs here. */
    MAP_CS_turnOnXT1LF (CS_XT1_DRIVE_0);

    /* Set the FLL to 24MHz, with the XT1 crystal as the reference */
    MAP_CS_initClockSignal (CS_FLLREF, CS_XT1CLK_SELECT, CS_CLOCK_DIVIDER_1);
    const uint16_t fsystem_kHz = 24000;
    const uint16_t xt1_freq_Hz = 32768;
    const uint16_t ratio = (uint16_t) (((uint32_t) fsystem_kHz * 1000) / xt1_freq_Hz);
    success = MAP_CS_initFLL (fsystem_kHz, ratio);
    while (!success)
    {
    }

    /* Set MCLK and SMCLK to the DCO */
    MAP_CS_initClockSignal (CS_MCLK, CS_DCOCLKDIV_SELECT, CS_CLOCK_DIVIDER_1);
    MAP_CS_initClockSignal (CS_SMCLK, CS_DCOCLKDIV_SELECT, CS_CLOCK_DIVIDER_1);

    /* Configure UART
     * SMCLK = 24MHz, Baudrate = 115200 */
    EUSCI_A_UART_initParam uart_param = {0};
    uart_param.selectClockSource = EUSCI_A_UART_CLOCKSOURCE_SMCLK;
    uart_param.clockPrescalar = 13;
    uart_param.firstModReg = 0;
    uart_param.secondModReg = 37;
    uart_param.parity = EUSCI_A_UART_NO_PARITY;
    uart_param.msborLsbFirst = EUSCI_A_UART_LSB_FIRST;
    uart_param.numberofStopBits = EUSCI_A_UART_ONE_STOP_BIT;
    uart_param.uartMode = EUSCI_A_UART_MODE;
    uart_param.overSampling = EUSCI_A_UART_OVERSAMPLING_BAUDRATE_GENERATION;

    success = MAP_EUSCI_A_UART_init (EUSCI_A1_BASE, &uart_param);
    while (!success)
    {
    }

    MAP_EUSCI_A_UART_enable (EUSCI_A1_BASE);

    /* Start timer to drive switch debounce.
     * The debounce time is 12 samples over 50 milliseconds.
     * So, with a 24 MHz SMCLK and a /40 with a timerPeriod of 2500 causes a debounce timer interrupt
     * every 24E6 / 40 / 2500 every 4.1666 ms */
    MAP_Timer_B_clearTimerInterrupt(TIMER_B0_BASE);

    Timer_B_initUpModeParam timer_param = {0};
    timer_param.clockSource = TIMER_B_CLOCKSOURCE_SMCLK;
    timer_param.clockSourceDivider = TIMER_B_CLOCKSOURCE_DIVIDER_40;
    timer_param.timerPeriod = 2500 - 1;
    timer_param.timerInterruptEnable_TBIE = TIMER_B_TBIE_INTERRUPT_DISABLE;
    timer_param.captureCompareInterruptEnable_CCR0_CCIE =
        TIMER_B_CAPTURECOMPARE_INTERRUPT_ENABLE;
    timer_param.timerClear = TIMER_B_DO_CLEAR;
    timer_param.startTimer = true;
    MAP_Timer_B_initUpMode(TIMER_B0_BASE, &timer_param);

    /* Enable pull-ups for switch inputs */
    MAP_GPIO_setAsInputPinWithPullUpResistor (GPIO_PORT_S1, GPIO_PIN_S1);
    MAP_GPIO_setAsInputPinWithPullUpResistor (GPIO_PORT_S2, GPIO_PIN_S2);

    MAP_SysCtl_enableFRAMWrite (SYSCTL_FRAMWRITEPROTECTION_DATA);
    permanent_info.total_resets++;
    MAP_SysCtl_protectFRAMWrite (SYSCTL_FRAMWRITEPROTECTION_DATA);

    /* Populate an initial message which indicates the device has been reset */
    size_t existing_len;
    snprintf (tx_buffer, sizeof (tx_buffer), "\n\rDevice reset, reset source(s):");
    uint16_t reset_reason = SYSRSTIV;
    while (reset_reason != 0)
    {
        existing_len = strlen (tx_buffer);
        snprintf (&tx_buffer[existing_len], sizeof (tx_buffer) - existing_len, " %02xh", reset_reason);
        reset_reason = SYSRSTIV;
    }
    existing_len = strlen (tx_buffer);
    snprintf (&tx_buffer[existing_len], sizeof (tx_buffer) - existing_len, "\n\rtotal_resets=%u total_s2_presses=%u\n\r",
              permanent_info.total_resets, permanent_info.total_s2_presses);
    start_uart_transmit ();

    /* Sleep, waking up when buttons pressed */
    for (;;)
    {
        /* When S1 is pressed output the previous message in the tx_buffer */
        if (s1_pressed)
        {
            s1_pressed = false;
            if (tx_buffer_idle ())
            {
                start_uart_transmit ();
            }
        }

        /* When S2 is pressed increment the total number of presses and update the tx_buffer */
        if (s2_pressed)
        {
            s2_pressed = false;
            MAP_SysCtl_enableFRAMWrite (SYSCTL_FRAMWRITEPROTECTION_DATA);
            permanent_info.total_s2_presses++;
            MAP_SysCtl_protectFRAMWrite (SYSCTL_FRAMWRITEPROTECTION_DATA);
            snprintf (tx_buffer, sizeof (tx_buffer), "total_resets=%u total_s2_presses=%u\n\r",
                      permanent_info.total_resets, permanent_info.total_s2_presses);
        }

        __bis_SR_register(LPM0_bits + GIE);
    }
}


#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=USCI_A1_VECTOR
__interrupt
#elif defined(__GNUC__)
__attribute__((interrupt(USCI_A1_VECTOR)))
#endif
void EUSCI_A1_ISR(void)
{
    switch(__even_in_range(UCA1IV,USCI_UART_UCTXCPTIFG))
    {
       case USCI_UART_UCTXIFG:
           /* Transmit the next character */
           MAP_EUSCI_A_UART_transmitData (EUSCI_A1_BASE, tx_buffer[tx_buffer_num_transmitted]);
           tx_buffer_num_transmitted++;

           if (tx_buffer_num_transmitted == tx_buffer_num_chars)
           {
               /* Transmission complete, disable interrupt */
               MAP_EUSCI_A_UART_disableInterrupt (EUSCI_A1_BASE, EUSCI_A_UART_TRANSMIT_INTERRUPT);
           }
           break;
    }
}

/**
 * Timer interrupt which runs the "An Alternative" button debounce algorithm described in
 * http://www.ganssle.com/debouncing-pt2.htm
 *
 * This sets global variables when S1 or S2 are pressed, and then wakes from LPM0 to cause the main loop to process
 * the button presses.
 */
#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=TIMERB0_VECTOR
__interrupt
#elif defined(__GNUC__)
__attribute__((interrupt(TIMERB0_VECTOR)))
#endif
void TIMERB0_ISR (void)
{
    const uint16_t button_pressed_mask  = 0xe000;
    const uint16_t button_pressed_state = 0xf000;

    static uint16_t s1_state = 0;
    static uint16_t s2_state = 0;

    s1_state = (s1_state << 1) | !MAP_GPIO_getInputPinValue (GPIO_PORT_S1, GPIO_PIN_S1) | button_pressed_mask;
    s2_state = (s2_state << 1) | !MAP_GPIO_getInputPinValue (GPIO_PORT_S2, GPIO_PIN_S2) | button_pressed_mask;

    if (s1_state == button_pressed_state)
    {
        s1_pressed = true;
        __bic_SR_register_on_exit(LPM0_bits + GIE);
    }

    if (s2_state == button_pressed_state)
    {
        s2_pressed = true;
        __bic_SR_register_on_exit(LPM0_bits + GIE);
    }
}
