/** @file HL_sys_main.c 
*   @brief Application main file
*   @date 07-July-2017
*   @version 04.07.00
*
*   This file contains an empty main function,
*   which can be used for the application.
*/

/* 
* Copyright (C) 2009-2016 Texas Instruments Incorporated - www.ti.com  
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

#include "HL_system.h" /* For system clock frequency */

#define _L2FMC
#include "F021.h"

#include <stdio.h>

/* USER CODE END */

/** @fn void main(void)
*   @brief Application main function
*   @note This function is empty by default.
*
*   This function is called after startup.
*   The user can use this function to implement the application.
*/

/* USER CODE BEGIN (2) */

/* Define the flash banks in a TMS570LC43xx */
struct
{
    uint32_t *start_address;
    uint32_t length_words;
    const char *name;
} static const bank_attributes[] =
{
    [Fapi_FlashBank0] =
    {
        .start_address = ((uint32_t *) 0x00000000),
        .length_words = (0x00200000 / sizeof (uint32_t)),
        .name = "Main bank 0"
    },
    [Fapi_FlashBank1] =
    {
        .start_address = ((uint32_t *) 0x00200000),
        .length_words = (0x00200000 / sizeof (uint32_t)),
        .name = "Main bank 1"
    },
    [Fapi_FlashBank7] =
    {
        .start_address = ((uint32_t *) 0xF0200000),
        .length_words = (0x00020000 / sizeof (uint32_t)),
        .name = "EEPROM bank 7"
    }
};

/* Called by the F021 flash API. Does nothing as the watchdog is not enabled */
Fapi_StatusType Fapi_serviceWatchdogTimer(void)
{
    return Fapi_Status_Success;
}

/**
 * @brief Erase a flash bank if it non-blank
 * @details First checks if the bank is blank.
 *          If non-blank, the bank is erased and then checked for being blank.
 * @param[in] bank Which bank to process
 */
static void erase_flash_bank_if_non_blank (const Fapi_FlashBankType bank)
{
    Fapi_StatusType status;
    Fapi_FlashStatusWordType flash_status_word;

    status = Fapi_doBlankCheck (bank_attributes[bank].start_address, bank_attributes[bank].length_words, &flash_status_word);
    if (status == Fapi_Status_Success)
    {
        printf ("%s is blank\n", bank_attributes[bank].name);
    }
    else
    {
        status = Fapi_setActiveFlashBank (bank);
        if (status == Fapi_Status_Success)
        {
            if (bank == Fapi_FlashBank7)
            {
                /* enable all sectors of active EEPROM bank */
                status = Fapi_enableEepromBankSectors (0xFFFFFFFF,0xFFFFFFFF);
            }
            else
            {
                status = Fapi_enableMainBankSectors (0xFFFF);  /* enable all sectors of active main bank */
            }
        }
        if (status == Fapi_Status_Success)
        {
            status = Fapi_issueAsyncCommandWithAddress (Fapi_EraseBank, bank_attributes[bank].start_address);
        }
        if (status == Fapi_Status_Success)
        {
            /* Wait for bank erase to complete */
            while (Fapi_checkFsmForReady() == Fapi_Status_FsmBusy)
            {
            }
            Fapi_flushPipeline ();

            /* Check that the bank is now blank after the erase */
            status = Fapi_doBlankCheck (bank_attributes[bank].start_address, bank_attributes[bank].length_words, &flash_status_word);
            if (status == Fapi_Status_Success)
            {
                printf ("%s has been erased and is now blank\n", bank_attributes[bank].name);
            }
            else
            {
                printf ("%s is still non-blank after erase attempt\n", bank_attributes[bank].name);
            }
        }
        else
        {
            printf ("%s bank erase failed\n", bank_attributes[bank].name);
        }
    }
}

/* USER CODE END */

int main(void)
{
/* USER CODE BEGIN (3) */
    Fapi_initializeFlashBanks ((uint32_t) HCLK_FREQ);

    erase_flash_bank_if_non_blank (Fapi_FlashBank0);
    erase_flash_bank_if_non_blank (Fapi_FlashBank1);
    erase_flash_bank_if_non_blank (Fapi_FlashBank7);
/* USER CODE END */

    return 0;
}


/* USER CODE BEGIN (4) */
/* USER CODE END */
