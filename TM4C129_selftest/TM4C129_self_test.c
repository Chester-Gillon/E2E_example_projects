/*
 * main.c
 */

#include <stdbool.h>
#include <stdint.h>
#include <assert.h>
#include <stdio.h>
#include <crc_tbl.h>

#include <inc/hw_memmap.h>
#include <driverlib/sysctl.h>
#include <driverlib/timer.h>
#include <driverlib/gpio.h>
#include <driverlib/crc.h>

#include "flash_pseudo_random_data.h"

/** Defines the GPIO pin which is toggled to indicate the test is running successfully */
#define PROGRESS_LED_PERIPHERAL SYSCTL_PERIPH_GPION
#define PROGRESS_LED_PORT       GPIO_PORTN_BASE
#define PROGRESS_LED_PIN        GPIO_PIN_0

/** Defining XTAL_SELECTION_FOR_WRONG_CLOCK as a SYSCTL_XTAL_* definition causes the the clock to be configured
 *  using that crystal frequency, rather than the internal oscillator.
 *  By selecting a SYSCTL_XTAL_* which is a lower frequency than the actual crystal on the board is a way
 *  of forcing the PLL and system clock frequency to be over-clocked as a way of investigating if over-clocking
 *  leads to test failures.
 */
/*
#define XTAL_SELECTION_FOR_WRONG_CLOCK SYSCTL_XTAL_20MHZ
*/

/** 32-bit random number generator from Numerical Recipes */
#define RAND_GENERATOR(seed) (((seed) * 1664525U) + 1013904223U)

/** The device is test with the clock frequency set to the maximum allowed for TM4C129 devices */
#define CLOCK_FREQUENCY_HZ 120000000

/** The trimmed internal PIOSC frequency */
#define PIOSC_FREQUENCY_HZ 16000000

/** A buffer used for read/write tests on SRAM, set to use 90% of the 256 Kbyte SRAM */
#define RAM_BUFFER_TEST_SIZE_WORDS 58982
static uint32_t ram_test_buffer[RAM_BUFFER_TEST_SIZE_WORDS];

/** The RAND_GENERATOR seed for the first word in ram_test_buffer */
static uint32_t ram_test_start_seed;

/** CRC tables for sections in flash created by the linker */
extern const CRC_TABLE intvecs_crc_table;
extern const CRC_TABLE text_crc_table;
extern const CRC_TABLE const_crc_table;

/**
 * @brief Initialise the system clock, and perform a sanity check that the expected frequency has been set
 */
static void initialise_clock (void)
{
    uint32_t reported_frequency;
    uint32_t piosc_start_ticks, piosc_stop_ticks;
    uint32_t sys_clock_start_ticks, sys_clock_stop_ticks;

#ifdef XTAL_SELECTION_FOR_WRONG_CLOCK
    reported_frequency = SysCtlClockFreqSet ((XTAL_SELECTION_FOR_WRONG_CLOCK | SYSCTL_OSC_MAIN | SYSCTL_USE_PLL | SYSCTL_CFG_VCO_480),
                                             CLOCK_FREQUENCY_HZ);
#else
    reported_frequency = SysCtlClockFreqSet ((SYSCTL_OSC_INT | SYSCTL_USE_PLL | SYSCTL_CFG_VCO_480), CLOCK_FREQUENCY_HZ);
#endif
    assert (reported_frequency == CLOCK_FREQUENCY_HZ);

    SysCtlPeripheralDisable (SYSCTL_PERIPH_TIMER0);
    SysCtlPeripheralDisable (SYSCTL_PERIPH_TIMER1);
    SysCtlPeripheralReset (SYSCTL_PERIPH_TIMER0);
    SysCtlPeripheralReset (SYSCTL_PERIPH_TIMER1);
    SysCtlPeripheralEnable (SYSCTL_PERIPH_TIMER0);
    SysCtlPeripheralEnable (SYSCTL_PERIPH_TIMER1);
    while (!SysCtlPeripheralReady (SYSCTL_PERIPH_TIMER0) || !SysCtlPeripheralReady (SYSCTL_PERIPH_TIMER1))
    {
    }

    /* Set timer0 to a 32-bit periodic up counter driven from the system clock */
    TimerClockSourceSet (TIMER0_BASE, TIMER_CLOCK_SYSTEM);
    TimerConfigure (TIMER0_BASE, TIMER_CFG_PERIODIC_UP);
    TimerLoadSet (TIMER0_BASE, TIMER_A, 0xffffffff);
    TimerEnable (TIMER0_BASE, TIMER_A);

    /* Set timer1 to a 32-bit periodic up counter driven from the PIOSC */
    TimerClockSourceSet (TIMER1_BASE, TIMER_CLOCK_PIOSC);
    TimerConfigure (TIMER1_BASE, TIMER_CFG_PERIODIC_UP);
    TimerLoadSet (TIMER1_BASE, TIMER_A, 0xffffffff);
    TimerEnable (TIMER1_BASE, TIMER_A);

    /* Wait for what should be one second, based upon the timer driven from the PIOSC */
    piosc_start_ticks = TimerValueGet (TIMER1_BASE, TIMER_A);
    sys_clock_start_ticks = TimerValueGet (TIMER0_BASE, TIMER_A);
    do
    {
        piosc_stop_ticks = TimerValueGet (TIMER1_BASE, TIMER_A);
        sys_clock_stop_ticks = TimerValueGet (TIMER0_BASE, TIMER_A);
    } while ((piosc_stop_ticks - piosc_start_ticks) < PIOSC_FREQUENCY_HZ);

    /* Validate the number of ticks measured by the timer driven from the system clock,
     * to check the expected clock frequency has been set.
     * A 1% tolerance is used, since both timers are source from the same PIOSC.
     * This is sufficient to check that SysCtlClockFreqSet() has programmed the PLL to set the correct system clock frequency. */
    const uint32_t sys_clock_ticks_per_sec = sys_clock_stop_ticks - sys_clock_start_ticks;
#ifdef XTAL_SELECTION_FOR_WRONG_CLOCK
    printf ("With XTAL selection 0x%x sys_clock_ticks_per_sec=%u\n", XTAL_SELECTION_FOR_WRONG_CLOCK, sys_clock_ticks_per_sec);
#else
    const uint32_t lower_clock_ticks_per_sec = CLOCK_FREQUENCY_HZ * 0.99;
    const uint32_t upper_clock_ticks_per_sec = CLOCK_FREQUENCY_HZ * 1.01;
    assert ((sys_clock_ticks_per_sec >= lower_clock_ticks_per_sec) && (sys_clock_ticks_per_sec <= upper_clock_ticks_per_sec));
#endif
}

/**
 * @brief Initialise the GPIO pin which is used to toggle the led which indicates the test is still running
 */
static void initialise_progress_led (void)
{
    SysCtlPeripheralEnable (PROGRESS_LED_PERIPHERAL);
    while (!SysCtlPeripheralReady (PROGRESS_LED_PERIPHERAL))
    {
    }
    GPIOPinTypeGPIOOutput (PROGRESS_LED_PORT, PROGRESS_LED_PIN);
    GPIOPinWrite (PROGRESS_LED_PORT, PROGRESS_LED_PIN, 0);
}

/**
 * @brief Fill the ram test buffer with a pseudo-random pattern
 */
static void write_ram_test_pattern (void)
{
    uint32_t buffer_index;
    uint32_t seed = ram_test_start_seed;

    for (buffer_index = 0; buffer_index < RAM_BUFFER_TEST_SIZE_WORDS; buffer_index++)
    {
        ram_test_buffer[buffer_index] = seed;
        seed = RAND_GENERATOR (seed);
    }
}

/**
 * @brief Verify that the ram test buffer contains the last pattern written by write_ram_test_pattern
 * @details Upon completion advances ram_test_start_seed for the next write
 */
static void verify_ram_test_pattern (void)
{
    uint32_t buffer_index;
    uint32_t seed = ram_test_start_seed;

    for (buffer_index = 0; buffer_index < RAM_BUFFER_TEST_SIZE_WORDS; buffer_index++)
    {
        assert (ram_test_buffer[buffer_index] == seed);
        seed = RAND_GENERATOR (seed);
    }

    ram_test_start_seed = seed;
}

/**
 * @brief Verify that the CRC for a section of flash matches the CRC inserted by the linker
 * @param[in] table The CRC table to verify
 */
static void verify_crc_table (const CRC_TABLE *const table)
{
    uint32_t rec_index;
    uint32_t actual_crc;

    for (rec_index = 0; rec_index < table->num_recs; rec_index++)
    {
        assert (table->recs[rec_index].crc_alg_ID == CRC32_PRIME);
        CRCConfigSet (CCM0_BASE, CRC_CFG_INIT_0 | CRC_CFG_TYPE_P4C11DB7 | CRC_CFG_SIZE_8BIT);
        actual_crc = CRCDataProcess (CCM0_BASE, (uint32_t *) table->recs[rec_index].addr,
                                     table->recs[rec_index].size, false);
        assert (actual_crc == table->recs[rec_index].crc_value);
    }
}

/**
 * @brief Verify the constant data in flash contains the expected pseudo-random sequence
 */
static void verify_flash_contant_data (void)
{
    uint32_t seed = FLASH_DATA_INITIAL_SEED;
    uint32_t word_index;

    for (word_index = 0; word_index < FLASH_DATA_NUM_WORDS; word_index++)
    {
        assert (flash_constant_data[word_index] == seed);
        seed = RAND_GENERATOR (seed);
    }
}

int main(void)
{
    uint32_t num_test_iterations = 0;
    uint32_t num_progress_reports = 0;
    uint32_t now;
    uint32_t tick_of_last_led_toggle;
    uint32_t tick_of_last_progress_report;

    /* To indicate that the program is still running successfully:
     * - The LED is toggled at 1Hz
     * - The number of iterations so far is reported to the CCS CIO console every minute
     *
     * This is timed using the 32-bit periodic up counter driven from the PIOSC configured by initialise_clock()
     */
    const uint32_t ticks_between_led_toggles = PIOSC_FREQUENCY_HZ / 2;
    const uint32_t ticks_between_progress_reports = PIOSC_FREQUENCY_HZ * 60;

    initialise_progress_led ();
    initialise_clock ();
    SysCtlPeripheralEnable(SYSCTL_PERIPH_CCM0);
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_CCM0))
    {
    }

    now = TimerValueGet (TIMER1_BASE, TIMER_A);
    tick_of_last_led_toggle = now;
    tick_of_last_progress_report = now;
    for (;;)
    {
        /* Perform the tests for one iteration.
         * The RAM write and RAM read are the beginning and end of the tests, as a check that the RAM content
         * is preserved during the other tests. */
        write_ram_test_pattern ();
        verify_crc_table (&intvecs_crc_table);
        verify_crc_table (&text_crc_table);
        verify_crc_table (&const_crc_table);
        verify_flash_contant_data ();
        verify_ram_test_pattern ();
        num_test_iterations++;

        /* Report progress at regular intervals */
        now = TimerValueGet (TIMER1_BASE, TIMER_A);
        if ((now - tick_of_last_led_toggle) > ticks_between_led_toggles)
        {
            GPIOPinWrite (PROGRESS_LED_PORT, PROGRESS_LED_PIN,
                          PROGRESS_LED_PIN ^ GPIOPinRead (PROGRESS_LED_PORT, PROGRESS_LED_PIN));
            tick_of_last_led_toggle += ticks_between_led_toggles;
        }

        if ((now - tick_of_last_progress_report) > ticks_between_progress_reports)
        {
            num_progress_reports++;
            printf ("After %u minutes performed %u test iterations\n", num_progress_reports, num_test_iterations);
            tick_of_last_progress_report += ticks_between_progress_reports;
        }
    }
}
