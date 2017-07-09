/*
 * @file TM4C_RTC_trim_overflow.c
 * @date 9 Jul 2017
 * @author Chester Gillon
 * @brief Test program to investigate the behaviour of the Hibernation RTC around the point at which the RTC trim value is applied.
 * @details The program can run on TM4C123 or TM4C129 class devices, using TivaWare.
 *
 *          The selection between the device class is made at run time;
 *          this source file doesn't rely upon the PART_xxx TivaWare macros being defined.
 *
 *          When run on TM4C123 devices operates with-and-without workaround for errata HIB#01 and HIB#02 to demonstrate
 *          the impact of those errata on RTC operation.
 * @todo For TM4C129 devices consider expanding to also test calendar mode.
 */

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#include <inc/hw_memmap.h>
#include <inc/hw_ints.h>
#include <inc/hw_hibernate.h>
#include <inc/hw_types.h>
#include <inc/hw_sysctl.h>
#include <driverlib/sysctl.h>
#include <driverlib/gpio.h>
#include <driverlib/uart.h>
#include <driverlib/hibernate.h>
#include <driverlib/interrupt.h>
#include <utils/uartstdio.h>

/** Port/Pin mappings common to all devices.
 *  This is instead of including <driverlib/pin_map.h> since determine the device class at run-time rather than at compile time */
#define GPIO_PA0_U0RX           0x00000001
#define GPIO_PA1_U0TX           0x00000401

/** Used to hold the time read from the Hibernate RTC */
#define MAX_RTC_SUB_SECONDS 0x7fff
typedef struct
{
    /** The seconds count of RTC time */
    uint32_t rtc_time_seconds;
    /** The sub-seconds count of RTC time, with a range of 15 bits */
    uint32_t rtc_time_sub_seconds;
} rtc_time;

/** Used to record discontinuities in RTC time when watching how RTC time advances */
#define MAX_RTC_TIME_DISCONTINUITIES 10
typedef struct
{
    rtc_time previous_time;
    rtc_time next_time;
} rtc_time_change;
static uint32_t num_rtc_time_discontinuities;
static rtc_time_change rtc_time_discontinuities[MAX_RTC_TIME_DISCONTINUITIES];

/** The count of the number of RTC match interrupts */
static volatile uint32_t num_rtc_matches;

/** Used to record the RTC times before and after a RTC match interrupt. */
#define MAX_RTC_MATCH_TIMES 10
#define RTC_MATCH_HISTORY_LEN 6
typedef struct
{
    /* The final entry in the times[] array is after the RTC match interrupt was detected */
    rtc_time times[RTC_MATCH_HISTORY_LEN];
} rtc_time_history;
static uint32_t num_rtc_match_times;
static rtc_time_history rtc_match_times[MAX_RTC_MATCH_TIMES];

/**
 * @brief Called before any write to the Hiberation module to wait for any previous Hiberation module write to complete.
 * @details This is called before a write, rather than after a write as per TivaWare, to avoid unnecessary stalling of the program.
 */
static void await_previous_hibernate_write_complete(void)
{
    while(!(HWREG(HIB_CTL) & HIB_CTL_WRC))
    {
    }
}

/**
 * @brief Hibernate interrupt handler, which simply counts the number on RTC matches
 * @details This function clears the interrupt status with a write to the Hibernation Interrupt Clear register
 *          rather than calling HibernateIntClear().
 *
 *          This is because HibernateIntClear() waits for the write to complete, which was found to block the
 *          test_rtc_match_near_trim_update() function for long enough that the RTC sub-seconds value appears
 *          to jump by 3 counts.
 */
static void hibernate_int_handler (void)
{
    uint32_t int_status;

    int_status = HibernateIntStatus (1);
    await_previous_hibernate_write_complete ();
    HWREG(HIB_IC) |= int_status;

    if (int_status & HIBERNATE_INT_RTC_MATCH_0)
    {
        num_rtc_matches++;
    }
}

/**
 * @brief Configure the UART and its pins.
 * @detail This must be called before UARTprintf().
 */
static void configure_UART(void)
{
    /* Enable the GPIO Peripheral used by the UART. */
    SysCtlPeripheralEnable (SYSCTL_PERIPH_GPIOA);
    while (!SysCtlPeripheralReady (SYSCTL_PERIPH_GPIOA))
    {
    }

    /* Enable UART0 */
    SysCtlPeripheralEnable (SYSCTL_PERIPH_UART0);
    while (!SysCtlPeripheralReady (SYSCTL_PERIPH_UART0))
    {
    }

    /* Configure GPIO Pins for UART mode. */
    GPIOPinConfigure (GPIO_PA0_U0RX);
    GPIOPinConfigure (GPIO_PA1_U0TX);
    GPIOPinTypeUART (GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);

    /* Use the internal 16MHz oscillator as the UART clock source. */
    UARTClockSourceSet (UART0_BASE, UART_CLOCK_PIOSC);

    /* Initialise the UART for console I/O. */
    UARTStdioConfig (0, 115200, 16000000);
}

/**
 * @brief Configure the RTC to start running
 * @details Doesn't attempt to fix the TM4C123 errata HIB#01.
 *          As a result on return the Hibernation RTC Trim register may be a non-default value
 * @param[in] cpu_clock_freq The frequency of the CPU clock
 */
static void configure_RTC (const uint32_t cpu_clock_freq)
{
    const uint32_t int_hibernate = CLASS_IS_TM4C129 ? INT_HIBERNATE_TM4C129 : INT_HIBERNATE_TM4C123;

    /* Unlike other peripherals, the Hibernate module retains it state across a system reset.
     * If the Hibernate module is already enabled from a previous run of this program then
     * set the Hibernation Control register to its power-on value and then disable the module.
     * This causes the HibernateEnableExpClk() to trigger the TM4C123 HIB#01 errata which sets a corrupt RTC trim
     * when the program is run after a reset, as well as after a power-up.
     */
    if (SysCtlPeripheralReady (SYSCTL_PERIPH_HIBERNATE))
    {
        HWREG(HIB_CTL) = HIB_CTL_VBATSEL_2_1V;
        while(!(HWREG(HIB_CTL) & HIB_CTL_WRC))
        {
        }
        SysCtlPeripheralDisable (SYSCTL_PERIPH_HIBERNATE);
    }

    /* Reset and enable the Hibernate peripheral */
    SysCtlPeripheralEnable (SYSCTL_PERIPH_HIBERNATE);
    while (!SysCtlPeripheralReady (SYSCTL_PERIPH_HIBERNATE))
    {
    }
    SysCtlPeripheralReset (SYSCTL_PERIPH_HIBERNATE);
    while (!SysCtlPeripheralReady (SYSCTL_PERIPH_HIBERNATE))
    {
    }

    /* Initialise clocking for the Hibernate module */
    HibernateEnableExpClk (cpu_clock_freq);

    /* Start the RTC running */
    HibernateRTCSet (0);
    HibernateRTCEnable ();

    /* Enable an interrupt on RTC match */
    IntRegister (int_hibernate, hibernate_int_handler);
    HibernateIntEnable (HIBERNATE_INT_RTC_MATCH_0);
    IntEnable (int_hibernate);
    IntMasterEnable ();
}

/**
 * @brief Read the RTC time as seconds and sub-seconds
 * @param[out] time The current RTC time
 * @param[in] workaround_HIB02_errata Controls how the read is performed:
 *            - If false performs the sequence suggested by the data sheet of reading HIBRTCC, HIBRTCSS, HIBRTCC
 *              and then repeating the read if the HIBRTCC values are different.
 *              However, the sub-seconds values read may not monotonic. Suspect the issue is due to the Hibernate RTC
 *              being on a different clock domain to the CPU such that the CPU may sample an inconsistent sub-seconds value.
 *
 *            - If true performs the sequence as suggested for the work-around for TM4C123 errata HIB#02
 */
static void get_rtc_time (rtc_time *const time, const bool workaround_HIB02_errata)
{
    uint32_t first_time_secs;
    uint32_t first_time_subsecs;

    if (workaround_HIB02_errata)
    {
        /* Read RTC using the work-around for TM4C123 errata HIB#02 */
        IntMasterDisable ();
        do
        {
            first_time_secs = HibernateRTCGet ();
            first_time_subsecs = HibernateRTCSSGet ();
            time->rtc_time_sub_seconds = HibernateRTCSSGet ();
            time->rtc_time_seconds = HibernateRTCGet ();
        } while ((first_time_secs != time->rtc_time_seconds) || (first_time_subsecs != time->rtc_time_sub_seconds));
        IntMasterEnable ();
    }
    else
    {
        /* Read RTC using the suggested sequence in the datasheet */
        do
        {
            first_time_secs = HibernateRTCGet ();
            time->rtc_time_sub_seconds = HibernateRTCSSGet ();
            time->rtc_time_seconds = HibernateRTCGet ();
        } while (first_time_secs != time->rtc_time_seconds);
    }
}

/**
 * @brief Called when the RTC time changes, to store the RTC time around which a RTC match interrupt is detected
 * @param[in] current_time The current RTC time
 * @param[in,out] history Used to maintain a history of the RTC times around when a RTC match interrupt is detected
 * @param[in,out] interrupt_detected On entry if true a RTC match interrupt has been detected, meaning the RTC time change needs to be stored.
 *                                   Reset on exit
 */
static void store_time_of_rtc_match_interrupt (const rtc_time *const current_time, rtc_time_history *const history,
                                               bool *const interrupt_detected)
{
    memmove (history->times, &history->times[1], sizeof (rtc_time) * (RTC_MATCH_HISTORY_LEN - 1));
    history->times[RTC_MATCH_HISTORY_LEN - 1] = *current_time;
    if (*interrupt_detected)
    {

        if (num_rtc_match_times < MAX_RTC_MATCH_TIMES)
        {
            rtc_match_times[num_rtc_match_times] = *history;
        }
        num_rtc_match_times++;

        *interrupt_detected = false;
    }
}

/**
 * @brief Test the RTC match interrupt around the point at which the RTC time update occurs
 * @param[in] rtcss_match The sub-seconds match value to use
 * @param[in] workaround_HIB02_errata If true applies a work-around for TM4C123 errata HIB#02.
 *                                    If this is false on a TM4C123 device then numerous RTC time discrepancies
 *                                    can be reported as the sampled RTC time can be non-monotonic.
 * @param[in] reset_time_on_first_interrupt If true the RTC time is reset to the start value after the first RTC match interrupt is detected.
 *                                          This is used to test that this function can detect multiple RTC match interrupts.
 */
static void test_rtc_match_near_trim_update (const uint32_t rtcss_match, const bool workaround_HIB02_errata,
                                             const bool reset_time_on_first_interrupt)
{
    uint32_t int_status;
    rtc_time previous_time;
    rtc_time current_time;
    bool rtc_time_discontinuity;
    uint32_t discontinuity_index;
    uint32_t match_index;
    uint32_t history_index;
    bool interrupt_detected;
    rtc_time_history history;
    uint32_t previous_num_rtc_matches;
    uint32_t current_num_rtc_matches;

    /* The RTC match seconds value is chosen with the least significant 6 bits set to 1,
     * as the RTC trim occurs when the least significant 6 bits of the RTC seconds change from 0 to 1 */
    const uint32_t rtc_match = 0x2c1;
    const uint32_t initial_rtc_value = rtc_match - 1;
    const uint32_t final_rtc_value = rtc_match + 1;

    /* Set the RTC counter to the initial value, and set the required RTC match seconds and sub-seconds.
     * When HibernateRTCMatchSet sets the RTC counter seconds value the sub-seconds is automatically cleared.
     * Interrupts are disabled during this, and any interrupts which occur during the setup are cleared. */
    IntMasterDisable ();
    HibernateRTCMatchSet (0, rtc_match);
    HibernateRTCSSMatchSet (0, rtcss_match);
    HibernateRTCSet (initial_rtc_value);
    int_status = HibernateIntStatus (1);
    if (int_status != 0)
    {
        HibernateIntClear (int_status);
    }
    num_rtc_matches = 0;
    interrupt_detected = false;
    previous_num_rtc_matches = num_rtc_matches;
    memset (&history, 0, sizeof (history));
    IntMasterEnable ();

    /* Wait until the RTC time seconds get to the final value, watching for any discontinuity in the RTC time.
     * This relies upon the loop execution time being faster than the RTC sub-seconds tick of 30.5 microseconds. */
    num_rtc_time_discontinuities = 0;
    num_rtc_match_times = 0;
    get_rtc_time (&previous_time, workaround_HIB02_errata);
    do
    {
        get_rtc_time (&current_time, workaround_HIB02_errata);
        current_num_rtc_matches = num_rtc_matches;
        if (current_num_rtc_matches != previous_num_rtc_matches)
        {
            if ((current_num_rtc_matches == 1) && reset_time_on_first_interrupt)
            {
                /* Lock */
                await_previous_hibernate_write_complete ();
                HWREG(HIB_LOCK) = HIB_LOCK_HIBLOCK_KEY;

                /* Reset RTC time back to the initial value */
                await_previous_hibernate_write_complete ();
                HWREG(HIB_RTCLD) = initial_rtc_value;

                /* Unlock */
                await_previous_hibernate_write_complete ();
                HWREG(HIB_LOCK) = 0;
            }
            interrupt_detected = true;
        }
        previous_num_rtc_matches = current_num_rtc_matches;

        if (current_time.rtc_time_seconds != previous_time.rtc_time_seconds)
        {
            store_time_of_rtc_match_interrupt (&current_time, &history, &interrupt_detected);
            rtc_time_discontinuity = (current_time.rtc_time_seconds != (previous_time.rtc_time_seconds + 1)) ||
                    (previous_time.rtc_time_sub_seconds != MAX_RTC_SUB_SECONDS) ||
                    (current_time.rtc_time_sub_seconds != 0);
        }
        else if (current_time.rtc_time_sub_seconds != previous_time.rtc_time_sub_seconds)
        {
            store_time_of_rtc_match_interrupt (&current_time, &history, &interrupt_detected);
            rtc_time_discontinuity = current_time.rtc_time_sub_seconds != (previous_time.rtc_time_sub_seconds + 1);
        }
        else
        {
            rtc_time_discontinuity = false;
        }

        if (rtc_time_discontinuity)
        {
            if (num_rtc_time_discontinuities < MAX_RTC_TIME_DISCONTINUITIES)
            {
                rtc_time_discontinuities[num_rtc_time_discontinuities].previous_time = previous_time;
                rtc_time_discontinuities[num_rtc_time_discontinuities].next_time = current_time;
            }
            num_rtc_time_discontinuities++;
        }

        previous_time = current_time;
    } while (current_time.rtc_time_seconds <= final_rtc_value);
    await_previous_hibernate_write_complete ();

    /* Report results of the test */
    UARTprintf ("Tested RTC with HIBRTCM0=0x%x HIBRTCSS=0x%x HIBRTCT=0x%x\n",
            HibernateRTCMatchGet (0), HibernateRTCSSMatchGet (0), HibernateRTCTrimGet ());
    UARTprintf ("HIB#02 workaround : %s  Reset RTC time on first match interrupt : %s\n",
            workaround_HIB02_errata ? "Yes" : "No",
            reset_time_on_first_interrupt ? "Yes" : "No");

    UARTprintf ("Num RTC match interrupts=%u\n", num_rtc_matches);
    for (match_index = 0; match_index < num_rtc_match_times; match_index++)
    {
        if (match_index < MAX_RTC_MATCH_TIMES)
        {
            UARTprintf ("   RTC match interrupt around times");
            for (history_index = 0; history_index < RTC_MATCH_HISTORY_LEN; history_index++)
            {
                const rtc_time *const time = &rtc_match_times[match_index].times[history_index];

                UARTprintf ("%s(0x%x,0x%x)", (history_index == (RTC_MATCH_HISTORY_LEN - 1)) ? " *interrupt* " : " ",
                        time->rtc_time_seconds, time->rtc_time_sub_seconds);
            }
            UARTprintf ("\n");

        }
        else
        {
            UARTprintf ("   ...\n");
            break;
        }
    }

    UARTprintf ("Num RTC time discontinuities=%u\n", num_rtc_time_discontinuities);
    for (discontinuity_index = 0; discontinuity_index < num_rtc_time_discontinuities; discontinuity_index++)
    {
        if (discontinuity_index < MAX_RTC_TIME_DISCONTINUITIES)
        {
            const rtc_time_change *const discontinuity = &rtc_time_discontinuities[discontinuity_index];

            UARTprintf ("   RTC time discontinuity (0x%x,0x%x) -> (0x%x,0x%x)\n",
                    discontinuity->previous_time.rtc_time_seconds, discontinuity->previous_time.rtc_time_sub_seconds,
                    discontinuity->next_time.rtc_time_seconds, discontinuity->next_time.rtc_time_sub_seconds);
        }
        else
        {
            UARTprintf ("   ...\n");
            break;
        }
    }
    UARTprintf ("\n");
}

/**
 * @brief Display the class and revision of the device on which are running the test
 */
static void identify_device (void)
{
    const uint32_t did0 = HWREG(SYSCTL_DID0);
    const uint32_t did1 = HWREG(SYSCTL_DID1);
    const uint32_t device_class = (did0 & SYSCTL_DID0_CLASS_M) >> 16;
    const uint32_t major_revision = (did0 & SYSCTL_DID0_MAJ_M) >> 8;
    const uint32_t minor_revision = (did0 & SYSCTL_DID0_MIN_M) >> 0;

    UARTprintf ("\n");
    UARTprintf ("Running on Device Class=0x%x Major Revision=0x%x Minor Revision=0x%x\n",
                device_class, major_revision, minor_revision);
    UARTprintf ("DID0=0x%08x DID1=0x%08x\n\n", did0, did1);
}

/*
 * @brief Demonstrate the operation of the TM4C123 Hibernation RTC with and without the workarounds for errata HIB#01 and HIB#02
 */
static void demonstrate_tm4c123_hibernation_rtc_errata (void)
{
    UARTprintf ("1) Test match for sub-seconds of zero:\n");
    UARTprintf ("- Without HIB#01 workaround; since an undefined RTC trim is in use\n");
    UARTprintf ("- Without HIB#02 workaround\n");
    UARTprintf ("This will result in no match interrupt and multiple discontinuities\n");
    UARTprintf ("due to the sub-seconds appearing to update non-monotonically.\n");
    test_rtc_match_near_trim_update (0, false, false);

    UARTprintf ("2) Test match for sub-seconds of maximum:\n");
    UARTprintf ("- Without HIB#01 workaround; since an undefined RTC trim is in use\n");
    UARTprintf ("- Without HIB#02 workaround\n");
    UARTprintf ("This will result in one match interrupt and multiple discontinuities\n");
    UARTprintf ("due to the sub-seconds appearing to update non-monotonically.\n");
    test_rtc_match_near_trim_update (0x7fff, false, false);

    UARTprintf ("3) Test match for sub-seconds of zero:\n");
    UARTprintf ("- Without HIB#01 workaround; since an undefined RTC trim is in use\n");
    UARTprintf ("- With HIB#02 workaround\n");
    UARTprintf ("This will result in no match interrupt and one discontinuity when the\n");
    UARTprintf ("least 6 significant bits of the RTC seconds change from 0 to 1.\n");
    test_rtc_match_near_trim_update (0, true, false);

    UARTprintf ("4) Test match for sub-seconds of zero:\n");
    UARTprintf ("- With HIB#01 workaround; since the RTC trim has been set to no adjustment\n");
    UARTprintf ("- With HIB#02 workaround\n");
    UARTprintf ("This will result in one interrupt and no discontinuities.\n");
    HibernateRTCTrimSet (0x7FFF);
    test_rtc_match_near_trim_update (0, true, false);
}

int main(void)
{
    uint32_t cpu_clock_freq;
    bool workaround_HIB02_errata;

    if (CLASS_IS_TM4C129)
    {
        /* Set the system clock to run at 120 MHz off the PLL with external crystal as reference. */
        cpu_clock_freq = SysCtlClockFreqSet((SYSCTL_XTAL_25MHZ | SYSCTL_OSC_MAIN | SYSCTL_USE_PLL | SYSCTL_CFG_VCO_480), 120000000);
        workaround_HIB02_errata = false;
    }
    else if (CLASS_IS_TM4C123)
    {
        /* Set the system clock to run at 80 MHz off the PLL with external crystal as reference. */
        SysCtlClockSet (SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
        cpu_clock_freq = SysCtlClockGet ();
        workaround_HIB02_errata = true;
    }
    else
    {
        /* Suspend as unknown class */
        cpu_clock_freq = 0;
        for (;;)
        {
        }
    }

    configure_UART ();
    configure_RTC (cpu_clock_freq);

    identify_device ();
    UARTprintf ("Starting RTC time rollover tests\n");
    UARTprintf ("================================\n\n");

    if (CLASS_IS_TM4C123)
    {
        demonstrate_tm4c123_hibernation_rtc_errata ();
    }
    else
    {
        UARTprintf ("Tests 1 to 3 not applicable for TM4C129 class, as errata HIB#01 and HIB#02 not present.\n\n");

        UARTprintf ("4) Test match for sub-seconds of zero with the default RTC trim\n");
        UARTprintf ("This will result in one interrupt and no discontinuities.\n");
        test_rtc_match_near_trim_update (0, true, false);
    }

    UARTprintf ("5) Test match for sub-seconds of 0x7FFC, along with a trim value of 0x8002.\n");
    UARTprintf ("The trim value causes the sub-seconds to go backwards, such that only match interrupt occurs.\n");
    UARTprintf ("Since a RTC trim is applied two discontinuities are reported.\n");
    HibernateRTCTrimSet (0x8002);
    test_rtc_match_near_trim_update (0x7FFC, workaround_HIB02_errata, false);

    UARTprintf ("6) Test match for sub-seconds of 0x7FFD, along with a trim value of 0x8002.\n");
    UARTprintf ("The trim value causes the sub-seconds to go backwards, such that according to the datasheet the\n");
    UARTprintf ("the match interrupt should occur twice. However, only one match interrupt occurs.\n");
    UARTprintf ("Since a RTC trim is applied two discontinuities are reported.\n");
    HibernateRTCTrimSet (0x8002);
    test_rtc_match_near_trim_update (0x7FFD, workaround_HIB02_errata, false);

    UARTprintf ("7) Same match value and RTC trim as previous test, but the RTC is reset to the initial value\n");
    UARTprintf ("RTC match interrupt occurs, which leads to a total of two match interrupts.\n");
    UARTprintf ("This shows the test function can report more than one RTC match interrupt per call.\n");
    HibernateRTCTrimSet (0x8002);
    test_rtc_match_near_trim_update (0x7FFD, workaround_HIB02_errata, true);

    UARTprintf ("8) Test match for sub-seconds of 0x2, along with a trim value of 0x7FFC.\n");
    UARTprintf ("The trim value causes the sub-seconds to advance, such that no RTC match interrupt occurs.\n");
    UARTprintf ("Since a RTC trim is applied two discontinuities are reported.\n");
    HibernateRTCTrimSet (0x7FFC);
    test_rtc_match_near_trim_update (0x2, workaround_HIB02_errata, false);

    UARTprintf ("9) Test match for sub-seconds of 0x3, along with a trim value of 0x7FFC.\n");
    UARTprintf ("The trim value causes the sub-seconds to advance, such that a RTC match interrupt is seen.\n");
    UARTprintf ("Since a RTC trim is applied two discontinuities are reported.\n");
    HibernateRTCTrimSet (0x7FFC);
    test_rtc_match_near_trim_update (0x3, workaround_HIB02_errata, false);

    UARTprintf ("Tests complete\n");
}
