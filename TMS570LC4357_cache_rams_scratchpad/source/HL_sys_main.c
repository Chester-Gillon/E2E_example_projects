/** @file HL_sys_main.c 
*   @brief Application main file
*   @date 11-Dec-2018
*   @version 04.07.01
*
*   This file contains an empty main function,
*   which can be used for the application.
*/

/* 
* Copyright (C) 2009-2018 Texas Instruments Incorporated - www.ti.com  
* 
* 
*  Redistribution and use in source and binary forms, with or without 
*  modification, are permitted provided that the following conditions 
*  are met:
*
*    Redistributions of source code must retain the above copyright 
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the 
*    documentation and/or other materials provided with the   
*    distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/


/* USER CODE BEGIN (0) */
/* USER CODE END */

/* Include Files */

#include "HL_sys_common.h"

/* USER CODE BEGIN (1) */
#include "HL_sci.h"

#include <stdio.h>
#include <stdarg.h>


#define CACHE_RAM_BLOCK_SIZE_BYTES 16384
#define CACHE_RAM_BLOCK_SIZE_UINT32 (CACHE_RAM_BLOCK_SIZE_BYTES / sizeof (uint32_t))
#define CACHE_RAM_BLOCK_SIZE_UINT64 (CACHE_RAM_BLOCK_SIZE_BYTES / sizeof (uint64_t))

/* Start address of blocks of consecutive regions of CACHE_RAM_BLOCK_SIZE_BYTES in the cache RAMs which
 * are accessible over the AXI slave interface.
 * Found by looking at the memory browser in the CCS debugger as for a Cortex-R5 don't know how to probe
 * addresses without getting a data abort. */
static const uint32_t cache_ram_start_addresses[] =
{
    /* Data cache addresses */
    0x30008000,
    0x30010000,
    0x30020000,
    0x30040000,
    0x30088000,
    0x30090000,
    0x300A0000,
    0x300C0000,
    /* Instruction cache addresses */
    0x30108000,
    0x30110000,
    0x30118000,
    0x30120000,
    0x30128000,
    0x30130000,
    0x30138000,
    0x30140000,
    0x30148000,
    0x30150000,
    0x30158000,
    0x30160000,
    0x30168000,
    0x30170000,
    0x30178000
};

#define NUM_REGIONS (sizeof (cache_ram_start_addresses) / sizeof (cache_ram_start_addresses[0]))


/**
 * @brief Write a formatted string to the UART
 * @details Space for the maximum length formatted string has to be allocated on the stack
 * @params[in] format printf style format string
 * @params[in] ... Arguments for the format string.
 */
static void uart_printf (const char *const format, ...) __ATTRIBUTE ((__format__ (__printf__, 1, 2)));
static void uart_printf (const char *const format, ...)
{
    va_list ap;
    char buffer[128];

    va_start (ap, format);
    vsnprintf (buffer, sizeof (buffer), format, ap);
    va_end (ap);

    const char *data;
    for (data = buffer; *data != '\0'; data++)
    {
        sciSendByte (sciREG1, *data);
    }
}


/**
 * @brief Give access for the processor to access the cache RAMs via the AXI Slave Interface
 * @details Assumes the HALCoGen configuration has:
 *          a. Left the caches disabled, so modifying the cache RAMs won't crash the program.
 *          b. Added a MPU entry to allow access to the cache RAMs
 */
static void enable_axi_slave_cache_access (void)
{
    uint32_t ACTLR;
    const uint32_t AXISCEN = 1 << 24; /* AXI slave cache RAM access enable */
    const uint32_t AXISCUEN = 1 << 23;  /* AXI slave cache RAM non-privileged access enable */

    ACTLR = __MRC (15, 0, 1, 0, 1);
    ACTLR |= AXISCEN | AXISCUEN;
    __MCR (15, 0, ACTLR, 1, 0, 1);
}


static void check_cache_rams_writable_bits_uint64 (const uint64_t write_data, uint64_t writeble_bit_masks[NUM_REGIONS])
{
    uint32_t region_index;
    uint32_t region_offset;
    uint64_t read_data;

    for (region_index = 0; region_index < NUM_REGIONS; region_index++)
    {
        volatile uint64_t *cache_data = (uint64_t *) cache_ram_start_addresses[region_index];

        for (region_offset = 0; region_offset < CACHE_RAM_BLOCK_SIZE_UINT64; region_offset++)
        {
            cache_data[region_offset] = write_data;
        }

        for (region_offset = 0; region_offset < CACHE_RAM_BLOCK_SIZE_UINT64; region_offset++)
        {
            read_data = cache_data[region_offset];
            writeble_bit_masks[region_index] &= ~(read_data ^ write_data);
        }
    }
}


static void find_cache_ram_writable_bits_uint64 (void)
{
    uint64_t writable_bit_masks[NUM_REGIONS];
    uint32_t region_index;
    uint64_t write_data;
    uint32_t bit_number;

    for (region_index = 0; region_index < NUM_REGIONS; region_index++)
    {
        writable_bit_masks[region_index] = ~0;
    }

    /* All zeros */
    check_cache_rams_writable_bits_uint64 (0, writable_bit_masks);

    /* All ones */
    check_cache_rams_writable_bits_uint64 (0, writable_bit_masks);

    /* Walking zeros and ones */
    write_data = 1;
    for (bit_number = 0; bit_number < 64; bit_number++)
    {
        check_cache_rams_writable_bits_uint64 (write_data, writable_bit_masks);
        check_cache_rams_writable_bits_uint64 (~write_data, writable_bit_masks);
        write_data <<= 1;
    }

    for (region_index = 0; region_index < NUM_REGIONS; region_index++)
    {
        uart_printf ("Region %08x..%08x accessed as 64-bits has writable bits %016llx\n\r",
                     cache_ram_start_addresses[region_index], cache_ram_start_addresses[region_index] + CACHE_RAM_BLOCK_SIZE_BYTES - 1,
                     writable_bit_masks[region_index]);
    }
    uart_printf ("\n\r");
}


static void check_cache_rams_writable_bits_uint32 (const uint32_t write_data, uint32_t writeble_bit_masks[NUM_REGIONS])
{
    uint32_t region_index;
    uint32_t region_offset;
    uint32_t read_data;

    for (region_index = 0; region_index < NUM_REGIONS; region_index++)
    {
        volatile uint32_t *cache_data = (uint32_t *) cache_ram_start_addresses[region_index];

        for (region_offset = 0; region_offset < CACHE_RAM_BLOCK_SIZE_UINT32; region_offset++)
        {
            cache_data[region_offset] = write_data;
        }

        for (region_offset = 0; region_offset < CACHE_RAM_BLOCK_SIZE_UINT32; region_offset++)
        {
            read_data = cache_data[region_offset];
            writeble_bit_masks[region_index] &= ~(read_data ^ write_data);
        }
    }
}


static void find_cache_ram_writable_bits_uint32 (void)
{
    uint32_t writable_bit_masks[NUM_REGIONS];
    uint32_t region_index;
    uint32_t write_data;
    uint32_t bit_number;

    for (region_index = 0; region_index < NUM_REGIONS; region_index++)
    {
        writable_bit_masks[region_index] = ~0;
    }

    /* All zeros */
    check_cache_rams_writable_bits_uint32 (0, writable_bit_masks);

    /* All ones */
    check_cache_rams_writable_bits_uint32 (0, writable_bit_masks);

    /* Walking zeros and ones */
    write_data = 1;
    for (bit_number = 0; bit_number < 32; bit_number++)
    {
        check_cache_rams_writable_bits_uint32 (write_data, writable_bit_masks);
        check_cache_rams_writable_bits_uint32 (~write_data, writable_bit_masks);
        write_data <<= 1;
    }

    for (region_index = 0; region_index < NUM_REGIONS; region_index++)
    {
        uart_printf ("Region %08x..%08x accessed as 32-bits has writable bits %08x\n\r",
                     cache_ram_start_addresses[region_index], cache_ram_start_addresses[region_index] + CACHE_RAM_BLOCK_SIZE_BYTES - 1,
                     writable_bit_masks[region_index]);
    }
    uart_printf ("\n\r");
}


static void test_data_rams_uint32 (void)
{
    const uint32_t data_ram_start_addresses[] =
    {
     0x30008000,
     0x3000a000,
     0x30010000,
     0x30012000,
     0x30020000,
     0x30022000,
     0x30040000,
     0x30042000
    };
    const uint32_t num_banks = sizeof data_ram_start_addresses / sizeof (data_ram_start_addresses[0]);
    const uint32_t data_ram_bank_num_words = 1024;

    uint32_t bank_index;
    uint32_t bank_offset;

    uint32_t write_data = 0;
    uint32_t actual_read_data;
    uint32_t expected_read_data = write_data;
    uint32_t num_read_back_failures = 0;
    uint32_t num_words_tested = 0;
    for (bank_index = 0; bank_index < num_banks; bank_index++)
    {
        volatile uint32_t *cache_data = (uint32_t *) data_ram_start_addresses[bank_index];

        for (bank_offset = 0; bank_offset < data_ram_bank_num_words; bank_offset++)
        {
            cache_data[bank_offset] = write_data++;
        }
    }

    for (bank_index = 0; bank_index < num_banks; bank_index++)
    {
        volatile uint32_t *cache_data = (uint32_t *) data_ram_start_addresses[bank_index];

        for (bank_offset = 0; bank_offset < data_ram_bank_num_words; bank_offset++)
        {
            actual_read_data = cache_data[bank_offset];
            if (actual_read_data != expected_read_data)
            {
                num_read_back_failures++;
            }
            expected_read_data++;
            num_words_tested++;
        }
    }

    uart_printf ("Num data RAM readback failures as 32-bit inc accesses = %u (out of %u tested)\n\r", num_read_back_failures, num_words_tested);

    write_data = ~0;
    expected_read_data = write_data;
    num_read_back_failures = 0;
    num_words_tested = 0;
    for (bank_index = 0; bank_index < num_banks; bank_index++)
    {
        volatile uint32_t *cache_data = (uint32_t *) data_ram_start_addresses[bank_index];

        for (bank_offset = 0; bank_offset < data_ram_bank_num_words; bank_offset++)
        {
            cache_data[bank_offset] = write_data--;
        }
    }

    for (bank_index = 0; bank_index < num_banks; bank_index++)
    {
        volatile uint32_t *cache_data = (uint32_t *) data_ram_start_addresses[bank_index];

        for (bank_offset = 0; bank_offset < data_ram_bank_num_words; bank_offset++)
        {
            actual_read_data = cache_data[bank_offset];
            if (actual_read_data != expected_read_data)
            {
                num_read_back_failures++;
            }
            expected_read_data--;
            num_words_tested++;
        }
    }

    uart_printf ("Num data RAM readback failures as 32-bit dec accesses = %u (out of %u tested)\n\r", num_read_back_failures, num_words_tested);
}

/* USER CODE END */

/** @fn void main(void)
*   @brief Application main function
*   @note This function is empty by default.
*
*   This function is called after startup.
*   The user can use this function to implement the application.
*/

/* USER CODE BEGIN (2) */
/* USER CODE END */

int main(void)
{
/* USER CODE BEGIN (3) */
    sciInit ();
    enable_axi_slave_cache_access ();
    find_cache_ram_writable_bits_uint64 ();
    find_cache_ram_writable_bits_uint32 ();
    test_data_rams_uint32 ();
/* USER CODE END */

    return 0;
}


/* USER CODE BEGIN (4) */
/* USER CODE END */
