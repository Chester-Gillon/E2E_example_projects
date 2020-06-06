/* Copyright (C) 2011,2013 ARM Ltd. All rights reserved. */
/* A small implementation of the clock function using the performance counters
 * available on the Cortex-M4 processor. */

/* The cpu cycle counter (SysTick) in Cortex-M4 counts down from 0xFFFFFF and an
 * overflow interrupt is generated when the value reaches 0. The clock function
 * relies on the startup code to install an interrupt handler to catch the
 * interrupt and update the overflow counter. */

#include <stdint.h>
#include <time.h>

/* Compile with -DCMSIS to use the CMSIS SysTick definition, otherwise
 * we use a compatible definition. */
#ifdef CMSIS

/* Replace this with your device-specific include file */
#include <ti/devices/msp432e4/driverlib/driverlib.h>

#else

extern uint32_t SystemCoreClock;

/* SysTick registers */
typedef struct
{
  volatile uint32_t CTRL;  /* Offset: 0x000 (R/W)  SysTick Control and Status Register */
           uint32_t LOAD;  /* Offset: 0x004 (R/W)  SysTick Reload Value Register       */
  volatile uint32_t VAL;   /* Offset: 0x008 (R/W)  SysTick Current Value Register      */
  const    uint32_t CALIB; /* Offset: 0x00C (R/ )  SysTick Calibration Register        */
} SysTick_Type;
#define SCS_BASE     (0xE000E000UL)
#define SysTick_BASE (SCS_BASE +  0x0010UL)
#define SysTick      ((SysTick_Type *) SysTick_BASE)

/* SysTick CSR register bits */
#define SysTick_CTRL_COUNTFLAG_Msk (1 << 16)
#define SysTick_CTRL_CLKSOURCE_Msk (1 << 2)
#define SysTick_CTRL_TICKINT_Msk   (1 << 1)
#define SysTick_CTRL_ENABLE_Msk    (1 << 0)

#endif

static volatile unsigned int systick_overflows = 0;

/* This function is called by the SysTick overflow interrupt handler. The
 * address of this function must appear in the SysTick entry of the vector
 * table. */
extern void SysTick_Handler(void)
{
  systick_overflows++;
}

static void reset_cycle_counter(void)
{
  /* Set the reload value and clear the current value. */
  SysTick->LOAD = 0x00ffffff;
  SysTick->VAL = 0;
  /* Reset the overflow counter */
  systick_overflows = 0;
}

static void start_cycle_counter(void)
{
  /* Enable the SysTick timer and enable the SysTick overflow interrupt */
  SysTick->CTRL |=
    (SysTick_CTRL_CLKSOURCE_Msk |
     SysTick_CTRL_ENABLE_Msk |
     SysTick_CTRL_TICKINT_Msk);
}

static uint64_t get_cycle_counter(void)
{
  unsigned int overflows = systick_overflows;
  /* A systick overflow might happen here */
  unsigned int systick_count = SysTick->VAL;
  /* check if it did and reload the low bit if it did */
  unsigned int new_overflows = systick_overflows;
  if (overflows != new_overflows)
  {
    /* This suffices as long as there is no chance that a second
    overflow can happen because new_overflows was read */
    systick_count = SysTick->VAL;
    overflows = new_overflows;
  }
  /* Recall that the SysTick counter counts down. */
  return (((uint64_t)overflows << 0x18) + (0x00FFFFFF - systick_count));
}

extern clock_t test_clock(void)
{
  return (clock_t) ((get_cycle_counter() * CLOCKS_PER_SEC) / SystemCoreClock);
}

/* The C library initialization code calls _clock_init() to initialize
 * anything that is required for clock() to work. Here we do this by
 * starting the systick timer. */
extern void clock_init(void)
{
#ifdef __MSP432E401Y__
    /* Configure the system clock for 120 MHz */
    SystemCoreClock = MAP_SysCtlClockFreqSet((SYSCTL_XTAL_25MHZ |
                                              SYSCTL_OSC_MAIN |
                                              SYSCTL_USE_PLL |
                                              SYSCTL_CFG_VCO_480), 120000000);
#endif
  reset_cycle_counter();
  start_cycle_counter();
}
