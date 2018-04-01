/*
 * main.c
 */

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

#include <inc/hw_types.h>
#include <inc/hw_ints.h>
#include <inc/hw_nvic.h>
#include <inc/hw_sysctl.h>
#include <driverlib/interrupt.h>
#include <driverlib/rom.h>

/** The base address of the ROM in all TM4C devices, and the maximum ROM size expected */
#define ROM_BASE_ADDRESS 0x01000000
#define ROM_SIZE_BYTES (16 * 1024 * 1024)

/**
 * @brief Probe an address to see if can be read without generating a bus fault
 * @details This function must be called with the processor in privileged mode.
 *          It:
 *          - Clear any previous indication of a bus fault in the BFARV bit
 *          - Temporarily sets the processor to Ignore Bus Faults with all interrupts and fault handlers disabled
 *          - Attempt to read from read_address, ignoring the result
 *          - Checks to see if the read caused a bus fault, by checking the BFARV bit is set
 *          - Re-enables Bus Faults and all interrupts and fault handlers
 * @param[in] read_address The address to try reading a byte from
 * @return Returns true if no bus fault occurred reading from read_address, or false if a bus fault occurred.
 */
bool read_probe (volatile const char *read_address)
{
    bool address_readable = true;

    /* Clear any existing indication of a bus fault - BFARV is write one to clear */
    HWREG (NVIC_FAULT_STAT) |= NVIC_FAULT_STAT_BFARV;

    HWREG (NVIC_CFG_CTRL) |= NVIC_CFG_CTRL_BFHFNMIGN;
    asm volatile ("  CPSID f;");
    *read_address;
    if ((HWREG (NVIC_FAULT_STAT) & NVIC_FAULT_STAT_BFARV) != 0)
    {
        address_readable = false;
    }
    asm volatile ("  CPSIE f;");
    HWREG (NVIC_CFG_CTRL) &= ~NVIC_CFG_CTRL_BFHFNMIGN;

    return address_readable;
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

    printf ("\n");
    printf ("Running on Device Class=0x%x Major Revision=0x%x Minor Revision=0x%x\n",
            device_class, major_revision, minor_revision);
    printf ("DID0=0x%08x DID1=0x%08x\n", did0, did1);
}

int main(void) {
    uint32_t rom_byte_index;
    bool address_readable;

    identify_device ();

    /* Report the actual ROM size, by reading from increasing byte addresses until a bus fault is reported */
    rom_byte_index = 0;
    do
    {
        volatile const char *const rom_read = (volatile const char *) (ROM_BASE_ADDRESS + rom_byte_index);
        address_readable = read_probe (rom_read);
        if (address_readable)
        {
            rom_byte_index++;
        }
    } while (address_readable && (rom_byte_index < ROM_SIZE_BYTES));
    printf ("ROM version 0x%x size is 0x%x bytes\n", ROM_VERSION, rom_byte_index);

    return 0;
}
