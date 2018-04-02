/* This file was automatically created by ../TM4C_read_rom_symbols.cpp
   Using ROM symbols in C:/ti/TivaWare_C_Series-2.1.4.178/driverlib/rom.h and the ROM_VERSION 0x301 */

#include <stdbool.h>
#include <stdint.h>
#include <time.h>
#include <driverlib/can.h>
#include <driverlib/emac.h>
#include <driverlib/flash.h>
#include <driverlib/lcd.h>
#include <utils/spi_flash.h>
#include <utils/smbus.h>

/* Suppress warning about missing return statement since the functions won't be executed */
#pragma diag_suppress=994

#pragma RETAIN(ROM_ADCSequenceDataGet)
#pragma LOCATION(ROM_ADCSequenceDataGet, 0x100223c)
int32_t ROM_ADCSequenceDataGet (uint32_t ui32Base, uint32_t ui32SequenceNum, uint32_t *pui32Buffer) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCIntDisable)
#pragma LOCATION(ROM_ADCIntDisable, 0x1002152)
void ROM_ADCIntDisable (uint32_t ui32Base, uint32_t ui32SequenceNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCIntEnable)
#pragma LOCATION(ROM_ADCIntEnable, 0x100216c)
void ROM_ADCIntEnable (uint32_t ui32Base, uint32_t ui32SequenceNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCIntStatus)
#pragma LOCATION(ROM_ADCIntStatus, 0x1002184)
uint32_t ROM_ADCIntStatus (uint32_t ui32Base, uint32_t ui32SequenceNum, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCIntClear)
#pragma LOCATION(ROM_ADCIntClear, 0x1002140)
void ROM_ADCIntClear (uint32_t ui32Base, uint32_t ui32SequenceNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCSequenceEnable)
#pragma LOCATION(ROM_ADCSequenceEnable, 0x1002292)
void ROM_ADCSequenceEnable (uint32_t ui32Base, uint32_t ui32SequenceNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCSequenceDisable)
#pragma LOCATION(ROM_ADCSequenceDisable, 0x1002260)
void ROM_ADCSequenceDisable (uint32_t ui32Base, uint32_t ui32SequenceNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCSequenceConfigure)
#pragma LOCATION(ROM_ADCSequenceConfigure, 0x100220a)
void ROM_ADCSequenceConfigure (uint32_t ui32Base, uint32_t ui32SequenceNum, uint32_t ui32Trigger, uint32_t ui32Priority) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCSequenceStepConfigure)
#pragma LOCATION(ROM_ADCSequenceStepConfigure, 0x10022b6)
void ROM_ADCSequenceStepConfigure (uint32_t ui32Base, uint32_t ui32SequenceNum, uint32_t ui32Step, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCSequenceOverflow)
#pragma LOCATION(ROM_ADCSequenceOverflow, 0x10022a0)
int32_t ROM_ADCSequenceOverflow (uint32_t ui32Base, uint32_t ui32SequenceNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCSequenceOverflowClear)
#pragma LOCATION(ROM_ADCSequenceOverflowClear, 0x10022ac)
void ROM_ADCSequenceOverflowClear (uint32_t ui32Base, uint32_t ui32SequenceNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCSequenceUnderflow)
#pragma LOCATION(ROM_ADCSequenceUnderflow, 0x100233a)
int32_t ROM_ADCSequenceUnderflow (uint32_t ui32Base, uint32_t ui32SequenceNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCSequenceUnderflowClear)
#pragma LOCATION(ROM_ADCSequenceUnderflowClear, 0x1002346)
void ROM_ADCSequenceUnderflowClear (uint32_t ui32Base, uint32_t ui32SequenceNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCProcessorTrigger)
#pragma LOCATION(ROM_ADCProcessorTrigger, 0x10021d6)
void ROM_ADCProcessorTrigger (uint32_t ui32Base, uint32_t ui32SequenceNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCHardwareOversampleConfigure)
#pragma LOCATION(ROM_ADCHardwareOversampleConfigure, 0x1002132)
void ROM_ADCHardwareOversampleConfigure (uint32_t ui32Base, uint32_t ui32Factor) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCComparatorConfigure)
#pragma LOCATION(ROM_ADCComparatorConfigure, 0x10020c8)
void ROM_ADCComparatorConfigure (uint32_t ui32Base, uint32_t ui32Comp, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCComparatorRegionSet)
#pragma LOCATION(ROM_ADCComparatorRegionSet, 0x10020fc)
void ROM_ADCComparatorRegionSet (uint32_t ui32Base, uint32_t ui32Comp, uint32_t ui32LowRef, uint32_t ui32HighRef) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCComparatorReset)
#pragma LOCATION(ROM_ADCComparatorReset, 0x100210a)
void ROM_ADCComparatorReset (uint32_t ui32Base, uint32_t ui32Comp, bool bTrigger, bool bInterrupt) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCComparatorIntDisable)
#pragma LOCATION(ROM_ADCComparatorIntDisable, 0x10020d6)
void ROM_ADCComparatorIntDisable (uint32_t ui32Base, uint32_t ui32SequenceNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCComparatorIntEnable)
#pragma LOCATION(ROM_ADCComparatorIntEnable, 0x10020e8)
void ROM_ADCComparatorIntEnable (uint32_t ui32Base, uint32_t ui32SequenceNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCComparatorIntStatus)
#pragma LOCATION(ROM_ADCComparatorIntStatus, 0x10020f8)
uint32_t ROM_ADCComparatorIntStatus (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_ADCComparatorIntClear)
#pragma LOCATION(ROM_ADCComparatorIntClear, 0x10020d2)
void ROM_ADCComparatorIntClear (uint32_t ui32Base, uint32_t ui32Status) { asm(" nop");}

#pragma RETAIN(ROM_ADCReferenceSet)
#pragma LOCATION(ROM_ADCReferenceSet, 0x10021fe)
void ROM_ADCReferenceSet (uint32_t ui32Base, uint32_t ui32Ref) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCReferenceGet)
#pragma LOCATION(ROM_ADCReferenceGet, 0x10021f6)
uint32_t ROM_ADCReferenceGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCPhaseDelaySet)
#pragma LOCATION(ROM_ADCPhaseDelaySet, 0x10021d2)
void ROM_ADCPhaseDelaySet (uint32_t ui32Base, uint32_t ui32Phase) { asm(" nop");}

#pragma RETAIN(ROM_ADCPhaseDelayGet)
#pragma LOCATION(ROM_ADCPhaseDelayGet, 0x10021ce)
uint32_t ROM_ADCPhaseDelayGet (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_ADCIntDisableEx)
#pragma LOCATION(ROM_ADCIntDisableEx, 0x1002162)
void ROM_ADCIntDisableEx (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCIntEnableEx)
#pragma LOCATION(ROM_ADCIntEnableEx, 0x100217c)
void ROM_ADCIntEnableEx (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCIntStatusEx)
#pragma LOCATION(ROM_ADCIntStatusEx, 0x10021b8)
uint32_t ROM_ADCIntStatusEx (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCSequenceDMAEnable)
#pragma LOCATION(ROM_ADCSequenceDMAEnable, 0x1002282)
void ROM_ADCSequenceDMAEnable (uint32_t ui32Base, uint32_t ui32SequenceNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCSequenceDMADisable)
#pragma LOCATION(ROM_ADCSequenceDMADisable, 0x1002270)
void ROM_ADCSequenceDMADisable (uint32_t ui32Base, uint32_t ui32SequenceNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ADCBusy)
#pragma LOCATION(ROM_ADCBusy, 0x10020c0)
bool ROM_ADCBusy (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESIntStatus)
#pragma LOCATION(ROM_AESIntStatus, 0x100259c)
uint32_t ROM_AESIntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESAuthLengthSet)
#pragma LOCATION(ROM_AESAuthLengthSet, 0x1002350)
void ROM_AESAuthLengthSet (uint32_t ui32Base, uint32_t ui32Length) { asm(" nop");}

#pragma RETAIN(ROM_AESConfigSet)
#pragma LOCATION(ROM_AESConfigSet, 0x1002354)
void ROM_AESConfigSet (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESDataAuth)
#pragma LOCATION(ROM_AESDataAuth, 0x100239e)
bool ROM_AESDataAuth (uint32_t ui32Base, uint32_t *pui32Src, uint32_t ui32Length, uint32_t *pui32Tag) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESDataProcess)
#pragma LOCATION(ROM_AESDataProcess, 0x1002400)
bool ROM_AESDataProcess (uint32_t ui32Base, uint32_t *pui32Src, uint32_t *pui32Dest, uint32_t ui32Length) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESDataProcessAuth)
#pragma LOCATION(ROM_AESDataProcessAuth, 0x1002440)
bool ROM_AESDataProcessAuth (uint32_t ui32Base, uint32_t *pui32Src, uint32_t *pui32Dest, uint32_t ui32Length, uint32_t *pui32AuthSrc, uint32_t ui32AuthLength, uint32_t *pui32Tag) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESDataRead)
#pragma LOCATION(ROM_AESDataRead, 0x10023e6)
void ROM_AESDataRead (uint32_t ui32Base, uint32_t *pui32Dest) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESDataReadNonBlocking)
#pragma LOCATION(ROM_AESDataReadNonBlocking, 0x10024be)
bool ROM_AESDataReadNonBlocking (uint32_t ui32Base, uint32_t *pui32Dest) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESDataWrite)
#pragma LOCATION(ROM_AESDataWrite, 0x100237e)
void ROM_AESDataWrite (uint32_t ui32Base, uint32_t *pui32Src) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESDataWriteNonBlocking)
#pragma LOCATION(ROM_AESDataWriteNonBlocking, 0x10024de)
bool ROM_AESDataWriteNonBlocking (uint32_t ui32Base, uint32_t *pui32Src) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESDMADisable)
#pragma LOCATION(ROM_AESDMADisable, 0x10024fe)
void ROM_AESDMADisable (uint32_t ui32Base, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESDMAEnable)
#pragma LOCATION(ROM_AESDMAEnable, 0x100250c)
void ROM_AESDMAEnable (uint32_t ui32Base, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESIntClear)
#pragma LOCATION(ROM_AESIntClear, 0x1002518)
void ROM_AESIntClear (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESIntDisable)
#pragma LOCATION(ROM_AESIntDisable, 0x1002534)
void ROM_AESIntDisable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESIntEnable)
#pragma LOCATION(ROM_AESIntEnable, 0x1002566)
void ROM_AESIntEnable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESIVSet)
#pragma LOCATION(ROM_AESIVSet, 0x10025fa)
void ROM_AESIVSet (uint32_t ui32Base, uint32_t *pui32IVdata) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESKey1Set)
#pragma LOCATION(ROM_AESKey1Set, 0x100260c)
void ROM_AESKey1Set (uint32_t ui32Base, uint32_t *pui32Key, uint32_t ui32Keysize) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESKey2Set)
#pragma LOCATION(ROM_AESKey2Set, 0x100263a)
void ROM_AESKey2Set (uint32_t ui32Base, uint32_t *pui32Key, uint32_t ui32Keysize) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESKey3Set)
#pragma LOCATION(ROM_AESKey3Set, 0x1002668)
void ROM_AESKey3Set (uint32_t ui32Base, uint32_t *pui32Key) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESLengthSet)
#pragma LOCATION(ROM_AESLengthSet, 0x1002398)
void ROM_AESLengthSet (uint32_t ui32Base, uint64_t ui64Length) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESReset)
#pragma LOCATION(ROM_AESReset, 0x100267a)
void ROM_AESReset (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESTagRead)
#pragma LOCATION(ROM_AESTagRead, 0x1002364)
void ROM_AESTagRead (uint32_t ui32Base, uint32_t *pui32TagData) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_AESIVRead)
#pragma LOCATION(ROM_AESIVRead, 0x10025e0)
void ROM_AESIVRead (uint32_t ui32Base, uint32_t *pui32IVdata) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANIntClear)
#pragma LOCATION(ROM_CANIntClear, 0x100285a)
void ROM_CANIntClear (uint32_t ui32Base, uint32_t ui32IntClr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANInit)
#pragma LOCATION(ROM_CANInit, 0x1002818)
void ROM_CANInit (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANEnable)
#pragma LOCATION(ROM_CANEnable, 0x10027f8)
void ROM_CANEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANDisable)
#pragma LOCATION(ROM_CANDisable, 0x10027ee)
void ROM_CANDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANBitTimingSet)
#pragma LOCATION(ROM_CANBitTimingSet, 0x1002778)
void ROM_CANBitTimingSet (uint32_t ui32Base, tCANBitClkParms *psClkParms) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANBitTimingGet)
#pragma LOCATION(ROM_CANBitTimingGet, 0x100274e)
void ROM_CANBitTimingGet (uint32_t ui32Base, tCANBitClkParms *psClkParms) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANMessageSet)
#pragma LOCATION(ROM_CANMessageSet, 0x1002a32)
void ROM_CANMessageSet (uint32_t ui32Base, uint32_t ui32ObjID, tCANMsgObject *psMsgObject, tMsgObjType eMsgType) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANMessageGet)
#pragma LOCATION(ROM_CANMessageGet, 0x10028cc)
void ROM_CANMessageGet (uint32_t ui32Base, uint32_t ui32ObjID, tCANMsgObject *psMsgObject, bool bClrPendingInt) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANStatusGet)
#pragma LOCATION(ROM_CANStatusGet, 0x1002b96)
uint32_t ROM_CANStatusGet (uint32_t ui32Base, tCANStsReg eStatusReg) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANMessageClear)
#pragma LOCATION(ROM_CANMessageClear, 0x10028b2)
void ROM_CANMessageClear (uint32_t ui32Base, uint32_t ui32ObjID) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANIntEnable)
#pragma LOCATION(ROM_CANIntEnable, 0x100288a)
void ROM_CANIntEnable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANIntDisable)
#pragma LOCATION(ROM_CANIntDisable, 0x1002880)
void ROM_CANIntDisable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANIntStatus)
#pragma LOCATION(ROM_CANIntStatus, 0x1002892)
uint32_t ROM_CANIntStatus (uint32_t ui32Base, tCANIntStsReg eIntStsReg) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANRetryGet)
#pragma LOCATION(ROM_CANRetryGet, 0x1002b76)
bool ROM_CANRetryGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANRetrySet)
#pragma LOCATION(ROM_CANRetrySet, 0x1002b84)
void ROM_CANRetrySet (uint32_t ui32Base, bool bAutoRetry) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANErrCntrGet)
#pragma LOCATION(ROM_CANErrCntrGet, 0x1002802)
bool ROM_CANErrCntrGet (uint32_t ui32Base, uint32_t *pui32RxCount, uint32_t *pui32TxCount) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CANBitRateSet)
#pragma LOCATION(ROM_CANBitRateSet, 0x10026e2)
uint32_t ROM_CANBitRateSet (uint32_t ui32Base, uint32_t ui32SourceClock, uint32_t ui32BitRate) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ComparatorIntClear)
#pragma LOCATION(ROM_ComparatorIntClear, 0x1002cd4)
void ROM_ComparatorIntClear (uint32_t ui32Base, uint32_t ui32Comp) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ComparatorConfigure)
#pragma LOCATION(ROM_ComparatorConfigure, 0x1002ccc)
void ROM_ComparatorConfigure (uint32_t ui32Base, uint32_t ui32Comp, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ComparatorRefSet)
#pragma LOCATION(ROM_ComparatorRefSet, 0x1002d12)
void ROM_ComparatorRefSet (uint32_t ui32Base, uint32_t ui32Ref) { asm(" nop");}

#pragma RETAIN(ROM_ComparatorValueGet)
#pragma LOCATION(ROM_ComparatorValueGet, 0x1002d16)
bool ROM_ComparatorValueGet (uint32_t ui32Base, uint32_t ui32Comp) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ComparatorIntEnable)
#pragma LOCATION(ROM_ComparatorIntEnable, 0x1002cee)
void ROM_ComparatorIntEnable (uint32_t ui32Base, uint32_t ui32Comp) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ComparatorIntDisable)
#pragma LOCATION(ROM_ComparatorIntDisable, 0x1002cde)
void ROM_ComparatorIntDisable (uint32_t ui32Base, uint32_t ui32Comp) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_ComparatorIntStatus)
#pragma LOCATION(ROM_ComparatorIntStatus, 0x1002cfc)
bool ROM_ComparatorIntStatus (uint32_t ui32Base, uint32_t ui32Comp, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CRCConfigSet)
#pragma LOCATION(ROM_CRCConfigSet, 0x1002d26)
void ROM_CRCConfigSet (uint32_t ui32Base, uint32_t ui32CRCConfig) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CRCDataProcess)
#pragma LOCATION(ROM_CRCDataProcess, 0x1002d3a)
uint32_t ROM_CRCDataProcess (uint32_t ui32Base, uint32_t *pui32DataIn, uint32_t ui32DataLength, bool bPPResult) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CRCDataWrite)
#pragma LOCATION(ROM_CRCDataWrite, 0x1002d76)
void ROM_CRCDataWrite (uint32_t ui32Base, uint32_t ui32Data) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CRCResultRead)
#pragma LOCATION(ROM_CRCResultRead, 0x1002d2c)
uint32_t ROM_CRCResultRead (uint32_t ui32Base, bool bPPResult) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_CRCSeedSet)
#pragma LOCATION(ROM_CRCSeedSet, 0x1002d7c)
void ROM_CRCSeedSet (uint32_t ui32Base, uint32_t ui32Seed) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESIntStatus)
#pragma LOCATION(ROM_DESIntStatus, 0x1002e80)
uint32_t ROM_DESIntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESConfigSet)
#pragma LOCATION(ROM_DESConfigSet, 0x1002d82)
void ROM_DESConfigSet (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESDataRead)
#pragma LOCATION(ROM_DESDataRead, 0x1002e04)
void ROM_DESDataRead (uint32_t ui32Base, uint32_t *pui32Dest) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESDataReadNonBlocking)
#pragma LOCATION(ROM_DESDataReadNonBlocking, 0x1002d8e)
bool ROM_DESDataReadNonBlocking (uint32_t ui32Base, uint32_t *pui32Dest) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESDataProcess)
#pragma LOCATION(ROM_DESDataProcess, 0x1002dbe)
bool ROM_DESDataProcess (uint32_t ui32Base, uint32_t *pui32Src, uint32_t *pui32Dest, uint32_t ui32Length) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESDataWrite)
#pragma LOCATION(ROM_DESDataWrite, 0x1002e18)
void ROM_DESDataWrite (uint32_t ui32Base, uint32_t *pui32Src) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESDataWriteNonBlocking)
#pragma LOCATION(ROM_DESDataWriteNonBlocking, 0x1002da6)
bool ROM_DESDataWriteNonBlocking (uint32_t ui32Base, uint32_t *pui32Src) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESDMADisable)
#pragma LOCATION(ROM_DESDMADisable, 0x1002e2c)
void ROM_DESDMADisable (uint32_t ui32Base, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESDMAEnable)
#pragma LOCATION(ROM_DESDMAEnable, 0x1002e36)
void ROM_DESDMAEnable (uint32_t ui32Base, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESIntClear)
#pragma LOCATION(ROM_DESIntClear, 0x1002e3e)
void ROM_DESIntClear (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESIntDisable)
#pragma LOCATION(ROM_DESIntDisable, 0x1002e4a)
void ROM_DESIntDisable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESIntEnable)
#pragma LOCATION(ROM_DESIntEnable, 0x1002e66)
void ROM_DESIntEnable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESIVSet)
#pragma LOCATION(ROM_DESIVSet, 0x1002e9e)
bool ROM_DESIVSet (uint32_t ui32Base, uint32_t *pui32IVdata) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESKeySet)
#pragma LOCATION(ROM_DESKeySet, 0x1002eb6)
void ROM_DESKeySet (uint32_t ui32Base, uint32_t *pui32Key) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_DESLengthSet)
#pragma LOCATION(ROM_DESLengthSet, 0x1002eda)
void ROM_DESLengthSet (uint32_t ui32Base, uint32_t ui32Length) { asm(" nop");}

#pragma RETAIN(ROM_DESReset)
#pragma LOCATION(ROM_DESReset, 0x1002ede)
void ROM_DESReset (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMRead)
#pragma LOCATION(ROM_EEPROMRead, 0x1003096)
void ROM_EEPROMRead (uint32_t *pui32Data, uint32_t ui32Address, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMBlockCountGet)
#pragma LOCATION(ROM_EEPROMBlockCountGet, 0x1002efc)
uint32_t ROM_EEPROMBlockCountGet (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMBlockHide)
#pragma LOCATION(ROM_EEPROMBlockHide, 0x1002f06)
void ROM_EEPROMBlockHide (uint32_t ui32Block) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMBlockLock)
#pragma LOCATION(ROM_EEPROMBlockLock, 0x1002f12)
uint32_t ROM_EEPROMBlockLock (uint32_t ui32Block) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMBlockPasswordSet)
#pragma LOCATION(ROM_EEPROMBlockPasswordSet, 0x1002f20)
uint32_t ROM_EEPROMBlockPasswordSet (uint32_t ui32Block, uint32_t *pui32Password, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMBlockProtectGet)
#pragma LOCATION(ROM_EEPROMBlockProtectGet, 0x1002f44)
uint32_t ROM_EEPROMBlockProtectGet (uint32_t ui32Block) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMBlockProtectSet)
#pragma LOCATION(ROM_EEPROMBlockProtectSet, 0x1002f4c)
uint32_t ROM_EEPROMBlockProtectSet (uint32_t ui32Block, uint32_t ui32Protect) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMBlockUnlock)
#pragma LOCATION(ROM_EEPROMBlockUnlock, 0x1002f5e)
uint32_t ROM_EEPROMBlockUnlock (uint32_t ui32Block, uint32_t *pui32Password, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMIntClear)
#pragma LOCATION(ROM_EEPROMIntClear, 0x1002fe4)
void ROM_EEPROMIntClear (uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMIntDisable)
#pragma LOCATION(ROM_EEPROMIntDisable, 0x1002fec)
void ROM_EEPROMIntDisable (uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMIntEnable)
#pragma LOCATION(ROM_EEPROMIntEnable, 0x1003002)
void ROM_EEPROMIntEnable (uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMIntStatus)
#pragma LOCATION(ROM_EEPROMIntStatus, 0x1003018)
uint32_t ROM_EEPROMIntStatus (bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMProgram)
#pragma LOCATION(ROM_EEPROMProgram, 0x100303a)
uint32_t ROM_EEPROMProgram (uint32_t *pui32Data, uint32_t ui32Address, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMProgramNonBlocking)
#pragma LOCATION(ROM_EEPROMProgramNonBlocking, 0x1003084)
uint32_t ROM_EEPROMProgramNonBlocking (uint32_t ui32Data, uint32_t ui32Address) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMSizeGet)
#pragma LOCATION(ROM_EEPROMSizeGet, 0x10030c6)
uint32_t ROM_EEPROMSizeGet (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMStatusGet)
#pragma LOCATION(ROM_EEPROMStatusGet, 0x10030d0)
uint32_t ROM_EEPROMStatusGet (void) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EEPROMInit)
#pragma LOCATION(ROM_EEPROMInit, 0x1002fae)
uint32_t ROM_EEPROMInit (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIIntStatus)
#pragma LOCATION(ROM_EPIIntStatus, 0x1003214)
uint32_t ROM_EPIIntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIModeSet)
#pragma LOCATION(ROM_EPIModeSet, 0x1003222)
void ROM_EPIModeSet (uint32_t ui32Base, uint32_t ui32Mode) { asm(" nop");}

#pragma RETAIN(ROM_EPIDividerSet)
#pragma LOCATION(ROM_EPIDividerSet, 0x10031dc)
void ROM_EPIDividerSet (uint32_t ui32Base, uint32_t ui32Divider) { asm(" nop");}

#pragma RETAIN(ROM_EPIConfigSDRAMSet)
#pragma LOCATION(ROM_EPIConfigSDRAMSet, 0x1003196)
void ROM_EPIConfigSDRAMSet (uint32_t ui32Base, uint32_t ui32Config, uint32_t ui32Refresh) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIConfigGPModeSet)
#pragma LOCATION(ROM_EPIConfigGPModeSet, 0x10030da)
void ROM_EPIConfigGPModeSet (uint32_t ui32Base, uint32_t ui32Config, uint32_t ui32FrameCount, uint32_t ui32MaxWait) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIConfigHB8Set)
#pragma LOCATION(ROM_EPIConfigHB8Set, 0x1003154)
void ROM_EPIConfigHB8Set (uint32_t ui32Base, uint32_t ui32Config, uint32_t ui32MaxWait) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIConfigHB16Set)
#pragma LOCATION(ROM_EPIConfigHB16Set, 0x100310c)
void ROM_EPIConfigHB16Set (uint32_t ui32Base, uint32_t ui32Config, uint32_t ui32MaxWait) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIAddressMapSet)
#pragma LOCATION(ROM_EPIAddressMapSet, 0x10030d6)
void ROM_EPIAddressMapSet (uint32_t ui32Base, uint32_t ui32Map) { asm(" nop");}

#pragma RETAIN(ROM_EPINonBlockingReadConfigure)
#pragma LOCATION(ROM_EPINonBlockingReadConfigure, 0x100322a)
void ROM_EPINonBlockingReadConfigure (uint32_t ui32Base, uint32_t ui32Channel, uint32_t ui32DataSize, uint32_t ui32Address) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPINonBlockingReadStart)
#pragma LOCATION(ROM_EPINonBlockingReadStart, 0x10032a2)
void ROM_EPINonBlockingReadStart (uint32_t ui32Base, uint32_t ui32Channel, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPINonBlockingReadStop)
#pragma LOCATION(ROM_EPINonBlockingReadStop, 0x10032aa)
void ROM_EPINonBlockingReadStop (uint32_t ui32Base, uint32_t ui32Channel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPINonBlockingReadCount)
#pragma LOCATION(ROM_EPINonBlockingReadCount, 0x1003234)
uint32_t ROM_EPINonBlockingReadCount (uint32_t ui32Base, uint32_t ui32Channel) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPINonBlockingReadAvail)
#pragma LOCATION(ROM_EPINonBlockingReadAvail, 0x1003226)
uint32_t ROM_EPINonBlockingReadAvail (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_EPINonBlockingReadGet32)
#pragma LOCATION(ROM_EPINonBlockingReadGet32, 0x100325e)
uint32_t ROM_EPINonBlockingReadGet32 (uint32_t ui32Base, uint32_t ui32Count, uint32_t *pui32Buf) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPINonBlockingReadGet16)
#pragma LOCATION(ROM_EPINonBlockingReadGet16, 0x100323c)
uint32_t ROM_EPINonBlockingReadGet16 (uint32_t ui32Base, uint32_t ui32Count, uint16_t *pui16Buf) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPINonBlockingReadGet8)
#pragma LOCATION(ROM_EPINonBlockingReadGet8, 0x1003280)
uint32_t ROM_EPINonBlockingReadGet8 (uint32_t ui32Base, uint32_t ui32Count, uint8_t *pui8Buf) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIFIFOConfig)
#pragma LOCATION(ROM_EPIFIFOConfig, 0x10031e8)
void ROM_EPIFIFOConfig (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIWriteFIFOCountGet)
#pragma LOCATION(ROM_EPIWriteFIFOCountGet, 0x1003330)
uint32_t ROM_EPIWriteFIFOCountGet (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIIntEnable)
#pragma LOCATION(ROM_EPIIntEnable, 0x10031fc)
void ROM_EPIIntEnable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIIntDisable)
#pragma LOCATION(ROM_EPIIntDisable, 0x10031ee)
void ROM_EPIIntDisable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIIntErrorStatus)
#pragma LOCATION(ROM_EPIIntErrorStatus, 0x100320e)
uint32_t ROM_EPIIntErrorStatus (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIIntErrorClear)
#pragma LOCATION(ROM_EPIIntErrorClear, 0x1003208)
void ROM_EPIIntErrorClear (uint32_t ui32Base, uint32_t ui32ErrFlags) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIDividerCSSet)
#pragma LOCATION(ROM_EPIDividerCSSet, 0x10031a2)
void ROM_EPIDividerCSSet (uint32_t ui32Base, uint32_t ui32CS, uint32_t ui32Divider) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIDMATxCount)
#pragma LOCATION(ROM_EPIDMATxCount, 0x10031e0)
void ROM_EPIDMATxCount (uint32_t ui32Base, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIConfigHB8CSSet)
#pragma LOCATION(ROM_EPIConfigHB8CSSet, 0x1003136)
void ROM_EPIConfigHB8CSSet (uint32_t ui32Base, uint32_t ui32CS, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIConfigHB16CSSet)
#pragma LOCATION(ROM_EPIConfigHB16CSSet, 0x10030ee)
void ROM_EPIConfigHB16CSSet (uint32_t ui32Base, uint32_t ui32CS, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIConfigHB8TimingSet)
#pragma LOCATION(ROM_EPIConfigHB8TimingSet, 0x100318c)
void ROM_EPIConfigHB8TimingSet (uint32_t ui32Base, uint32_t ui32CS, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIConfigHB16TimingSet)
#pragma LOCATION(ROM_EPIConfigHB16TimingSet, 0x100312c)
void ROM_EPIConfigHB16TimingSet (uint32_t ui32Base, uint32_t ui32CS, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIPSRAMConfigRegSet)
#pragma LOCATION(ROM_EPIPSRAMConfigRegSet, 0x1003310)
void ROM_EPIPSRAMConfigRegSet (uint32_t ui32Base, uint32_t ui32CS, uint32_t ui32CR) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIPSRAMConfigRegRead)
#pragma LOCATION(ROM_EPIPSRAMConfigRegRead, 0x10032f8)
void ROM_EPIPSRAMConfigRegRead (uint32_t ui32Base, uint32_t ui32CS) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIPSRAMConfigRegGetNonBlocking)
#pragma LOCATION(ROM_EPIPSRAMConfigRegGetNonBlocking, 0x10032d2)
bool ROM_EPIPSRAMConfigRegGetNonBlocking (uint32_t ui32Base, uint32_t ui32CS, uint32_t *pui32CR) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EPIPSRAMConfigRegGet)
#pragma LOCATION(ROM_EPIPSRAMConfigRegGet, 0x10032b4)
uint32_t ROM_EPIPSRAMConfigRegGet (uint32_t ui32Base, uint32_t ui32CS) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACIntStatus)
#pragma LOCATION(ROM_EMACIntStatus, 0x1003668)
uint32_t ROM_EMACIntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACAddrGet)
#pragma LOCATION(ROM_EMACAddrGet, 0x1003354)
void ROM_EMACAddrGet (uint32_t ui32Base, uint32_t ui32Index, uint8_t *pui8MACAddr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACAddrSet)
#pragma LOCATION(ROM_EMACAddrSet, 0x1003372)
void ROM_EMACAddrSet (uint32_t ui32Base, uint32_t ui32Index, const uint8_t *pui8MACAddr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACConfigGet)
#pragma LOCATION(ROM_EMACConfigGet, 0x1003394)
void ROM_EMACConfigGet (uint32_t ui32Base, uint32_t *pui32Config, uint32_t *pui32Mode, uint32_t *pui32RxMaxFrameSize) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACConfigSet)
#pragma LOCATION(ROM_EMACConfigSet, 0x10033d2)
void ROM_EMACConfigSet (uint32_t ui32Base, uint32_t ui32Config, uint32_t ui32ModeFlags, uint32_t ui32RxMaxFrameSize) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACDMAStateGet)
#pragma LOCATION(ROM_EMACDMAStateGet, 0x1003404)
uint32_t ROM_EMACDMAStateGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACFrameFilterGet)
#pragma LOCATION(ROM_EMACFrameFilterGet, 0x100340e)
uint32_t ROM_EMACFrameFilterGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACFrameFilterSet)
#pragma LOCATION(ROM_EMACFrameFilterSet, 0x1003416)
void ROM_EMACFrameFilterSet (uint32_t ui32Base, uint32_t ui32FilterOpts) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACInit)
#pragma LOCATION(ROM_EMACInit, 0x1003528)
void ROM_EMACInit (uint32_t ui32Base, uint32_t ui32SysClk, uint32_t ui32BusConfig, uint32_t ui32RxBurst, uint32_t ui32TxBurst, uint32_t ui32DescSkipSize) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACIntClear)
#pragma LOCATION(ROM_EMACIntClear, 0x10035a6)
void ROM_EMACIntClear (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACIntDisable)
#pragma LOCATION(ROM_EMACIntDisable, 0x10035e4)
void ROM_EMACIntDisable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACIntEnable)
#pragma LOCATION(ROM_EMACIntEnable, 0x1003622)
void ROM_EMACIntEnable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACPHYConfigSet)
#pragma LOCATION(ROM_EMACPHYConfigSet, 0x10036da)
void ROM_EMACPHYConfigSet (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACPHYPowerOff)
#pragma LOCATION(ROM_EMACPHYPowerOff, 0x100383c)
void ROM_EMACPHYPowerOff (uint32_t ui32Base, uint8_t ui8PhyAddr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACPHYPowerOn)
#pragma LOCATION(ROM_EMACPHYPowerOn, 0x100385c)
void ROM_EMACPHYPowerOn (uint32_t ui32Base, uint8_t ui8PhyAddr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACPHYRead)
#pragma LOCATION(ROM_EMACPHYRead, 0x1003742)
uint16_t ROM_EMACPHYRead (uint32_t ui32Base, uint8_t ui8PhyAddr, uint8_t ui8RegAddr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACPHYWrite)
#pragma LOCATION(ROM_EMACPHYWrite, 0x100376c)
void ROM_EMACPHYWrite (uint32_t ui32Base, uint8_t ui8PhyAddr, uint8_t ui8RegAddr, uint16_t ui16Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACReset)
#pragma LOCATION(ROM_EMACReset, 0x100369a)
void ROM_EMACReset (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACRxDisable)
#pragma LOCATION(ROM_EMACRxDisable, 0x10038ce)
void ROM_EMACRxDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACRxDMACurrentBufferGet)
#pragma LOCATION(ROM_EMACRxDMACurrentBufferGet, 0x10038e6)
uint8_t * ROM_EMACRxDMACurrentBufferGet (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACRxDMACurrentDescriptorGet)
#pragma LOCATION(ROM_EMACRxDMACurrentDescriptorGet, 0x10038ec)
tEMACDMADescriptor * ROM_EMACRxDMACurrentDescriptorGet (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACRxDMADescriptorListGet)
#pragma LOCATION(ROM_EMACRxDMADescriptorListGet, 0x10038f2)
tEMACDMADescriptor * ROM_EMACRxDMADescriptorListGet (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACRxDMADescriptorListSet)
#pragma LOCATION(ROM_EMACRxDMADescriptorListSet, 0x10038f8)
void ROM_EMACRxDMADescriptorListSet (uint32_t ui32Base, tEMACDMADescriptor *pDescriptor) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACRxDMAPollDemand)
#pragma LOCATION(ROM_EMACRxDMAPollDemand, 0x10038fe)
void ROM_EMACRxDMAPollDemand (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACRxEnable)
#pragma LOCATION(ROM_EMACRxEnable, 0x1003906)
void ROM_EMACRxEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACRxWatchdogTimerSet)
#pragma LOCATION(ROM_EMACRxWatchdogTimerSet, 0x100391c)
void ROM_EMACRxWatchdogTimerSet (uint32_t ui32Base, uint8_t ui8Timeout) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACStatusGet)
#pragma LOCATION(ROM_EMACStatusGet, 0x1003922)
uint32_t ROM_EMACStatusGet (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_EMACTxDisable)
#pragma LOCATION(ROM_EMACTxDisable, 0x1003a92)
void ROM_EMACTxDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTxDMACurrentBufferGet)
#pragma LOCATION(ROM_EMACTxDMACurrentBufferGet, 0x1003aaa)
uint8_t * ROM_EMACTxDMACurrentBufferGet (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTxDMACurrentDescriptorGet)
#pragma LOCATION(ROM_EMACTxDMACurrentDescriptorGet, 0x1003ab0)
tEMACDMADescriptor * ROM_EMACTxDMACurrentDescriptorGet (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTxDMADescriptorListGet)
#pragma LOCATION(ROM_EMACTxDMADescriptorListGet, 0x1003ab6)
tEMACDMADescriptor * ROM_EMACTxDMADescriptorListGet (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTxDMADescriptorListSet)
#pragma LOCATION(ROM_EMACTxDMADescriptorListSet, 0x1003abc)
void ROM_EMACTxDMADescriptorListSet (uint32_t ui32Base, tEMACDMADescriptor *pDescriptor) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTxDMAPollDemand)
#pragma LOCATION(ROM_EMACTxDMAPollDemand, 0x1003ac2)
void ROM_EMACTxDMAPollDemand (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTxEnable)
#pragma LOCATION(ROM_EMACTxEnable, 0x1003aca)
void ROM_EMACTxEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTxFlush)
#pragma LOCATION(ROM_EMACTxFlush, 0x1003ae0)
void ROM_EMACTxFlush (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACAddrFilterGet)
#pragma LOCATION(ROM_EMACAddrFilterGet, 0x1003336)
uint32_t ROM_EMACAddrFilterGet (uint32_t ui32Base, uint32_t ui32Index) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACAddrFilterSet)
#pragma LOCATION(ROM_EMACAddrFilterSet, 0x1003342)
void ROM_EMACAddrFilterSet (uint32_t ui32Base, uint32_t ui32Index, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACHashFilterBitCalculate)
#pragma LOCATION(ROM_EMACHashFilterBitCalculate, 0x10034f4)
uint32_t ROM_EMACHashFilterBitCalculate (uint8_t *pui8MACAddr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACHashFilterGet)
#pragma LOCATION(ROM_EMACHashFilterGet, 0x1003518)
void ROM_EMACHashFilterGet (uint32_t ui32Base, uint32_t *pui32HashHi, uint32_t *pui32HashLo) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACHashFilterSet)
#pragma LOCATION(ROM_EMACHashFilterSet, 0x1003522)
void ROM_EMACHashFilterSet (uint32_t ui32Base, uint32_t ui32HashHi, uint32_t ui32HashLo) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACNumAddrGet)
#pragma LOCATION(ROM_EMACNumAddrGet, 0x1003696)
uint32_t ROM_EMACNumAddrGet (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_EMACPHYExtendedRead)
#pragma LOCATION(ROM_EMACPHYExtendedRead, 0x1003796)
uint16_t ROM_EMACPHYExtendedRead (uint32_t ui32Base, uint8_t ui8PhyAddr, uint16_t ui16RegAddr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACPHYExtendedWrite)
#pragma LOCATION(ROM_EMACPHYExtendedWrite, 0x1003800)
void ROM_EMACPHYExtendedWrite (uint32_t ui32Base, uint8_t ui8PhyAddr, uint16_t ui16RegAddr, uint16_t ui16Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACPowerManagementControlGet)
#pragma LOCATION(ROM_EMACPowerManagementControlGet, 0x100387c)
uint32_t ROM_EMACPowerManagementControlGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACPowerManagementControlSet)
#pragma LOCATION(ROM_EMACPowerManagementControlSet, 0x1003886)
void ROM_EMACPowerManagementControlSet (uint32_t ui32Base, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACPowerManagementStatusGet)
#pragma LOCATION(ROM_EMACPowerManagementStatusGet, 0x1003896)
uint32_t ROM_EMACPowerManagementStatusGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACRemoteWakeUpFrameFilterGet)
#pragma LOCATION(ROM_EMACRemoteWakeUpFrameFilterGet, 0x100389e)
void ROM_EMACRemoteWakeUpFrameFilterGet (uint32_t ui32Base, tEMACWakeUpFrameFilter *pFilter) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACRemoteWakeUpFrameFilterSet)
#pragma LOCATION(ROM_EMACRemoteWakeUpFrameFilterSet, 0x10038b6)
void ROM_EMACRemoteWakeUpFrameFilterSet (uint32_t ui32Base, const tEMACWakeUpFrameFilter *pFilter) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampAddendSet)
#pragma LOCATION(ROM_EMACTimestampAddendSet, 0x1003926)
void ROM_EMACTimestampAddendSet (uint32_t ui32Base, uint32_t ui32Seconds) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampConfigGet)
#pragma LOCATION(ROM_EMACTimestampConfigGet, 0x1003944)
uint32_t ROM_EMACTimestampConfigGet (uint32_t ui32Base, uint32_t *pui32SubSecondInc) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampConfigSet)
#pragma LOCATION(ROM_EMACTimestampConfigSet, 0x1003952)
void ROM_EMACTimestampConfigSet (uint32_t ui32Base, uint32_t ui32Config, uint32_t ui32SubSecondInc) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampDisable)
#pragma LOCATION(ROM_EMACTimestampDisable, 0x100396a)
void ROM_EMACTimestampDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampEnable)
#pragma LOCATION(ROM_EMACTimestampEnable, 0x100397a)
void ROM_EMACTimestampEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampIntStatus)
#pragma LOCATION(ROM_EMACTimestampIntStatus, 0x10039a2)
uint32_t ROM_EMACTimestampIntStatus (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampPPSCommand)
#pragma LOCATION(ROM_EMACTimestampPPSCommand, 0x10039a8)
void ROM_EMACTimestampPPSCommand (uint32_t ui32Base, uint8_t ui8Cmd) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampPPSCommandModeSet)
#pragma LOCATION(ROM_EMACTimestampPPSCommandModeSet, 0x10039bc)
void ROM_EMACTimestampPPSCommandModeSet (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampPPSPeriodSet)
#pragma LOCATION(ROM_EMACTimestampPPSPeriodSet, 0x10039d0)
void ROM_EMACTimestampPPSPeriodSet (uint32_t ui32Base, uint32_t ui32Period, uint32_t ui32Width) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampPPSSimpleModeSet)
#pragma LOCATION(ROM_EMACTimestampPPSSimpleModeSet, 0x10039da)
void ROM_EMACTimestampPPSSimpleModeSet (uint32_t ui32Base, uint32_t ui32FreqConfig) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampSysTimeGet)
#pragma LOCATION(ROM_EMACTimestampSysTimeGet, 0x10039f0)
void ROM_EMACTimestampSysTimeGet (uint32_t ui32Base, uint32_t *pui32Seconds, uint32_t *pui32SubSeconds) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampSysTimeSet)
#pragma LOCATION(ROM_EMACTimestampSysTimeSet, 0x1003a0e)
void ROM_EMACTimestampSysTimeSet (uint32_t ui32Base, uint32_t ui32Seconds, uint32_t ui32SubSeconds) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampSysTimeUpdate)
#pragma LOCATION(ROM_EMACTimestampSysTimeUpdate, 0x1003a30)
void ROM_EMACTimestampSysTimeUpdate (uint32_t ui32Base, uint32_t ui32Seconds, uint32_t ui32SubSeconds, bool bInc) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampTargetIntDisable)
#pragma LOCATION(ROM_EMACTimestampTargetIntDisable, 0x1003a5e)
void ROM_EMACTimestampTargetIntDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampTargetIntEnable)
#pragma LOCATION(ROM_EMACTimestampTargetIntEnable, 0x1003a6e)
void ROM_EMACTimestampTargetIntEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACTimestampTargetSet)
#pragma LOCATION(ROM_EMACTimestampTargetSet, 0x1003a7e)
void ROM_EMACTimestampTargetSet (uint32_t ui32Base, uint32_t ui32Seconds, uint32_t ui32Nanoseconds) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACVLANHashFilterBitCalculate)
#pragma LOCATION(ROM_EMACVLANHashFilterBitCalculate, 0x1003b02)
uint32_t ROM_EMACVLANHashFilterBitCalculate (uint16_t ui16Tag) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACVLANHashFilterGet)
#pragma LOCATION(ROM_EMACVLANHashFilterGet, 0x1003b26)
uint32_t ROM_EMACVLANHashFilterGet (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACVLANHashFilterSet)
#pragma LOCATION(ROM_EMACVLANHashFilterSet, 0x1003b2c)
void ROM_EMACVLANHashFilterSet (uint32_t ui32Base, uint32_t ui32Hash) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACVLANRxConfigGet)
#pragma LOCATION(ROM_EMACVLANRxConfigGet, 0x1003b32)
uint32_t ROM_EMACVLANRxConfigGet (uint32_t ui32Base, uint16_t *pui16Tag) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACVLANRxConfigSet)
#pragma LOCATION(ROM_EMACVLANRxConfigSet, 0x1003b3c)
void ROM_EMACVLANRxConfigSet (uint32_t ui32Base, uint16_t ui16Tag, uint32_t ui32Config) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACVLANTxConfigGet)
#pragma LOCATION(ROM_EMACVLANTxConfigGet, 0x1003b42)
uint32_t ROM_EMACVLANTxConfigGet (uint32_t ui32Base, uint16_t *pui16Tag) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_EMACVLANTxConfigSet)
#pragma LOCATION(ROM_EMACVLANTxConfigSet, 0x1003b4e)
void ROM_EMACVLANTxConfigSet (uint32_t ui32Base, uint16_t ui16Tag, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UpdateEMAC)
#pragma LOCATION(ROM_UpdateEMAC, 0x1001708)
void ROM_UpdateEMAC (uint32_t ui32Clock) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FlashProgram)
#pragma LOCATION(ROM_FlashProgram, 0x1003c8a)
int32_t ROM_FlashProgram (uint32_t *pui32Data, uint32_t ui32Address, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FlashErase)
#pragma LOCATION(ROM_FlashErase, 0x1003c40)
int32_t ROM_FlashErase (uint32_t ui32Address) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FlashProtectGet)
#pragma LOCATION(ROM_FlashProtectGet, 0x1003cea)
tFlashProtection ROM_FlashProtectGet (uint32_t ui32Address) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FlashProtectSet)
#pragma LOCATION(ROM_FlashProtectSet, 0x1003d40)
int32_t ROM_FlashProtectSet (uint32_t ui32Address, tFlashProtection eProtect) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FlashProtectSave)
#pragma LOCATION(ROM_FlashProtectSave, 0x1003d24)
int32_t ROM_FlashProtectSave (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FlashUserGet)
#pragma LOCATION(ROM_FlashUserGet, 0x1003db4)
int32_t ROM_FlashUserGet (uint32_t *pui32User0, uint32_t *pui32User1) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FlashUserSet)
#pragma LOCATION(ROM_FlashUserSet, 0x1003dea)
int32_t ROM_FlashUserSet (uint32_t ui32User0, uint32_t ui32User1) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FlashUserSave)
#pragma LOCATION(ROM_FlashUserSave, 0x1003dc4)
int32_t ROM_FlashUserSave (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FlashIntEnable)
#pragma LOCATION(ROM_FlashIntEnable, 0x1003c74)
void ROM_FlashIntEnable (uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FlashIntDisable)
#pragma LOCATION(ROM_FlashIntDisable, 0x1003c68)
void ROM_FlashIntDisable (uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FlashIntStatus)
#pragma LOCATION(ROM_FlashIntStatus, 0x1003c7e)
uint32_t ROM_FlashIntStatus (bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FlashIntClear)
#pragma LOCATION(ROM_FlashIntClear, 0x1003c62)
void ROM_FlashIntClear (uint32_t ui32IntFlags) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FPUEnable)
#pragma LOCATION(ROM_FPUEnable, 0x1003e02)
void ROM_FPUEnable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FPUDisable)
#pragma LOCATION(ROM_FPUDisable, 0x1003df6)
void ROM_FPUDisable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FPUFlushToZeroModeSet)
#pragma LOCATION(ROM_FPUFlushToZeroModeSet, 0x1003e0e)
void ROM_FPUFlushToZeroModeSet (uint32_t ui32Mode) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FPUHalfPrecisionModeSet)
#pragma LOCATION(ROM_FPUHalfPrecisionModeSet, 0x1003e1c)
void ROM_FPUHalfPrecisionModeSet (uint32_t ui32Mode) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FPULazyStackingEnable)
#pragma LOCATION(ROM_FPULazyStackingEnable, 0x1003e2a)
void ROM_FPULazyStackingEnable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FPUNaNModeSet)
#pragma LOCATION(ROM_FPUNaNModeSet, 0x1003e36)
void ROM_FPUNaNModeSet (uint32_t ui32Mode) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FPURoundingModeSet)
#pragma LOCATION(ROM_FPURoundingModeSet, 0x1003e44)
void ROM_FPURoundingModeSet (uint32_t ui32Mode) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FPUStackingDisable)
#pragma LOCATION(ROM_FPUStackingDisable, 0x1003e52)
void ROM_FPUStackingDisable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_FPUStackingEnable)
#pragma LOCATION(ROM_FPUStackingEnable, 0x1003e5e)
void ROM_FPUStackingEnable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinWrite)
#pragma LOCATION(ROM_GPIOPinWrite, 0x100454a)
void ROM_GPIOPinWrite (uint32_t ui32Port, uint8_t ui8Pins, uint8_t ui8Val) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIODirModeSet)
#pragma LOCATION(ROM_GPIODirModeSet, 0x1003eac)
void ROM_GPIODirModeSet (uint32_t ui32Port, uint8_t ui8Pins, uint32_t ui32PinIO) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIODirModeGet)
#pragma LOCATION(ROM_GPIODirModeGet, 0x1003e8a)
uint32_t ROM_GPIODirModeGet (uint32_t ui32Port, uint8_t ui8Pin) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOIntTypeSet)
#pragma LOCATION(ROM_GPIOIntTypeSet, 0x1003f64)
void ROM_GPIOIntTypeSet (uint32_t ui32Port, uint8_t ui8Pins, uint32_t ui32IntType) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOIntTypeGet)
#pragma LOCATION(ROM_GPIOIntTypeGet, 0x1003f20)
uint32_t ROM_GPIOIntTypeGet (uint32_t ui32Port, uint8_t ui8Pin) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPadConfigGet)
#pragma LOCATION(ROM_GPIOPadConfigGet, 0x1003fb4)
void ROM_GPIOPadConfigGet (uint32_t ui32Port, uint8_t ui8Pin, uint32_t *pui32Strength, uint32_t *pui32PadType) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinRead)
#pragma LOCATION(ROM_GPIOPinRead, 0x100422e)
int32_t ROM_GPIOPinRead (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeComparator)
#pragma LOCATION(ROM_GPIOPinTypeComparator, 0x1004282)
void ROM_GPIOPinTypeComparator (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeGPIOInput)
#pragma LOCATION(ROM_GPIOPinTypeGPIOInput, 0x1004304)
void ROM_GPIOPinTypeGPIOInput (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeGPIOOutput)
#pragma LOCATION(ROM_GPIOPinTypeGPIOOutput, 0x100431e)
void ROM_GPIOPinTypeGPIOOutput (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeI2C)
#pragma LOCATION(ROM_GPIOPinTypeI2C, 0x1004352)
void ROM_GPIOPinTypeI2C (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypePWM)
#pragma LOCATION(ROM_GPIOPinTypePWM, 0x1004456)
void ROM_GPIOPinTypePWM (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeQEI)
#pragma LOCATION(ROM_GPIOPinTypeQEI, 0x1004470)
void ROM_GPIOPinTypeQEI (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeSSI)
#pragma LOCATION(ROM_GPIOPinTypeSSI, 0x100448a)
void ROM_GPIOPinTypeSSI (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeTimer)
#pragma LOCATION(ROM_GPIOPinTypeTimer, 0x10044a4)
void ROM_GPIOPinTypeTimer (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeUART)
#pragma LOCATION(ROM_GPIOPinTypeUART, 0x10044be)
void ROM_GPIOPinTypeUART (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeGPIOOutputOD)
#pragma LOCATION(ROM_GPIOPinTypeGPIOOutputOD, 0x1004338)
void ROM_GPIOPinTypeGPIOOutputOD (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeADC)
#pragma LOCATION(ROM_GPIOPinTypeADC, 0x1004234)
void ROM_GPIOPinTypeADC (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeUSBDigital)
#pragma LOCATION(ROM_GPIOPinTypeUSBDigital, 0x10044f2)
void ROM_GPIOPinTypeUSBDigital (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinConfigure)
#pragma LOCATION(ROM_GPIOPinConfigure, 0x10041ee)
void ROM_GPIOPinConfigure (uint32_t ui32PinConfig) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeUSBAnalog)
#pragma LOCATION(ROM_GPIOPinTypeUSBAnalog, 0x10044d8)
void ROM_GPIOPinTypeUSBAnalog (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIODMATriggerEnable)
#pragma LOCATION(ROM_GPIODMATriggerEnable, 0x1003ee2)
void ROM_GPIODMATriggerEnable (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIODMATriggerDisable)
#pragma LOCATION(ROM_GPIODMATriggerDisable, 0x1003ed4)
void ROM_GPIODMATriggerDisable (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOADCTriggerEnable)
#pragma LOCATION(ROM_GPIOADCTriggerEnable, 0x1003e7c)
void ROM_GPIOADCTriggerEnable (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOADCTriggerDisable)
#pragma LOCATION(ROM_GPIOADCTriggerDisable, 0x1003e6e)
void ROM_GPIOADCTriggerDisable (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeI2CSCL)
#pragma LOCATION(ROM_GPIOPinTypeI2CSCL, 0x100436c)
void ROM_GPIOPinTypeI2CSCL (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeOneWire)
#pragma LOCATION(ROM_GPIOPinTypeOneWire, 0x1004408)
void ROM_GPIOPinTypeOneWire (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeWakeHigh)
#pragma LOCATION(ROM_GPIOPinTypeWakeHigh, 0x100450c)
void ROM_GPIOPinTypeWakeHigh (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOPinTypeWakeLow)
#pragma LOCATION(ROM_GPIOPinTypeWakeLow, 0x1004528)
void ROM_GPIOPinTypeWakeLow (uint32_t ui32Port, uint8_t ui8Pins) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOIntClear)
#pragma LOCATION(ROM_GPIOIntClear, 0x1003ef0)
void ROM_GPIOIntClear (uint32_t ui32Port, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOIntDisable)
#pragma LOCATION(ROM_GPIOIntDisable, 0x1003ef6)
void ROM_GPIOIntDisable (uint32_t ui32Port, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOIntEnable)
#pragma LOCATION(ROM_GPIOIntEnable, 0x1003f04)
void ROM_GPIOIntEnable (uint32_t ui32Port, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_GPIOIntStatus)
#pragma LOCATION(ROM_GPIOIntStatus, 0x1003f12)
uint32_t ROM_GPIOIntStatus (uint32_t ui32Port, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateIntClear)
#pragma LOCATION(ROM_HibernateIntClear, 0x10047f4)
void ROM_HibernateIntClear (uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateEnableExpClk)
#pragma LOCATION(ROM_HibernateEnableExpClk, 0x10047b6)
void ROM_HibernateEnableExpClk (uint32_t ui32HibClk) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateDisable)
#pragma LOCATION(ROM_HibernateDisable, 0x10047aa)
void ROM_HibernateDisable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateRTCEnable)
#pragma LOCATION(ROM_HibernateRTCEnable, 0x1004860)
void ROM_HibernateRTCEnable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateRTCDisable)
#pragma LOCATION(ROM_HibernateRTCDisable, 0x1004854)
void ROM_HibernateRTCDisable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateWakeSet)
#pragma LOCATION(ROM_HibernateWakeSet, 0x1004a8c)
void ROM_HibernateWakeSet (uint32_t ui32WakeFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateWakeGet)
#pragma LOCATION(ROM_HibernateWakeGet, 0x1004a76)
uint32_t ROM_HibernateWakeGet (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateLowBatSet)
#pragma LOCATION(ROM_HibernateLowBatSet, 0x1004836)
void ROM_HibernateLowBatSet (uint32_t ui32LowBatFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateLowBatGet)
#pragma LOCATION(ROM_HibernateLowBatGet, 0x100482a)
uint32_t ROM_HibernateLowBatGet (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateRTCSet)
#pragma LOCATION(ROM_HibernateRTCSet, 0x100487e)
void ROM_HibernateRTCSet (uint32_t ui32RTCValue) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateRTCGet)
#pragma LOCATION(ROM_HibernateRTCGet, 0x100486c)
uint32_t ROM_HibernateRTCGet (void) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateRTCTrimSet)
#pragma LOCATION(ROM_HibernateRTCTrimSet, 0x10048c0)
void ROM_HibernateRTCTrimSet (uint32_t ui32Trim) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateRTCTrimGet)
#pragma LOCATION(ROM_HibernateRTCTrimGet, 0x10048ba)
uint32_t ROM_HibernateRTCTrimGet (void) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateDataSet)
#pragma LOCATION(ROM_HibernateDataSet, 0x100477e)
void ROM_HibernateDataSet (uint32_t *pui32Data, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateDataGet)
#pragma LOCATION(ROM_HibernateDataGet, 0x1004760)
void ROM_HibernateDataGet (uint32_t *pui32Data, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateRequest)
#pragma LOCATION(ROM_HibernateRequest, 0x1004848)
void ROM_HibernateRequest (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateIntEnable)
#pragma LOCATION(ROM_HibernateIntEnable, 0x100480a)
void ROM_HibernateIntEnable (uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateIntDisable)
#pragma LOCATION(ROM_HibernateIntDisable, 0x10047fe)
void ROM_HibernateIntDisable (uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateIntStatus)
#pragma LOCATION(ROM_HibernateIntStatus, 0x1004814)
uint32_t ROM_HibernateIntStatus (bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateIsActive)
#pragma LOCATION(ROM_HibernateIsActive, 0x1004820)
uint32_t ROM_HibernateIsActive (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateRTCSSGet)
#pragma LOCATION(ROM_HibernateRTCSSGet, 0x10048a0)
uint32_t ROM_HibernateRTCSSGet (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateClockConfig)
#pragma LOCATION(ROM_HibernateClockConfig, 0x1004738)
void ROM_HibernateClockConfig (uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateBatCheckStart)
#pragma LOCATION(ROM_HibernateBatCheckStart, 0x100463c)
void ROM_HibernateBatCheckStart (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateBatCheckDone)
#pragma LOCATION(ROM_HibernateBatCheckDone, 0x1004632)
uint32_t ROM_HibernateBatCheckDone (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateGPIORetentionEnable)
#pragma LOCATION(ROM_HibernateGPIORetentionEnable, 0x10047d2)
void ROM_HibernateGPIORetentionEnable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateGPIORetentionDisable)
#pragma LOCATION(ROM_HibernateGPIORetentionDisable, 0x10047c2)
void ROM_HibernateGPIORetentionDisable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateGPIORetentionGet)
#pragma LOCATION(ROM_HibernateGPIORetentionGet, 0x10047e2)
bool ROM_HibernateGPIORetentionGet (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateCounterMode)
#pragma LOCATION(ROM_HibernateCounterMode, 0x100475a)
void ROM_HibernateCounterMode (uint32_t ui32Config) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateCalendarSet)
#pragma LOCATION(ROM_HibernateCalendarSet, 0x1004732)
void ROM_HibernateCalendarSet (struct tm *psTime) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateCalendarGet)
#pragma LOCATION(ROM_HibernateCalendarGet, 0x1004648)
int ROM_HibernateCalendarGet (struct tm *psTime) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateCalendarMatchSet)
#pragma LOCATION(ROM_HibernateCalendarMatchSet, 0x100472e)
void ROM_HibernateCalendarMatchSet (uint32_t ui32Index, struct tm *psTime) { asm(" nop");}

#pragma RETAIN(ROM_HibernateCalendarMatchGet)
#pragma LOCATION(ROM_HibernateCalendarMatchGet, 0x10046bc)
void ROM_HibernateCalendarMatchGet (uint32_t ui32Index, struct tm *psTime) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateTamperDisable)
#pragma LOCATION(ROM_HibernateTamperDisable, 0x10048c6)
void ROM_HibernateTamperDisable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateTamperEnable)
#pragma LOCATION(ROM_HibernateTamperEnable, 0x10048ea)
void ROM_HibernateTamperEnable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateTamperEventsClear)
#pragma LOCATION(ROM_HibernateTamperEventsClear, 0x100490e)
void ROM_HibernateTamperEventsClear (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateTamperEventsConfig)
#pragma LOCATION(ROM_HibernateTamperEventsConfig, 0x1004932)
void ROM_HibernateTamperEventsConfig (uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateTamperEventsGet)
#pragma LOCATION(ROM_HibernateTamperEventsGet, 0x100495e)
bool ROM_HibernateTamperEventsGet (uint32_t ui32Index, uint32_t *pui32RTC, uint32_t *pui32Event) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateTamperExtOscValid)
#pragma LOCATION(ROM_HibernateTamperExtOscValid, 0x1004a00)
bool ROM_HibernateTamperExtOscValid (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateTamperExtOscRecover)
#pragma LOCATION(ROM_HibernateTamperExtOscRecover, 0x100497a)
void ROM_HibernateTamperExtOscRecover (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateTamperIODisable)
#pragma LOCATION(ROM_HibernateTamperIODisable, 0x1004a10)
void ROM_HibernateTamperIODisable (uint32_t ui32Input) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateTamperIOEnable)
#pragma LOCATION(ROM_HibernateTamperIOEnable, 0x1004a3e)
void ROM_HibernateTamperIOEnable (uint32_t ui32Input, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateTamperStatusGet)
#pragma LOCATION(ROM_HibernateTamperStatusGet, 0x100499e)
uint32_t ROM_HibernateTamperStatusGet (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateRTCMatchGet)
#pragma LOCATION(ROM_HibernateRTCMatchGet, 0x1004872)
uint32_t ROM_HibernateRTCMatchGet (uint32_t ui32Match) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateRTCMatchSet)
#pragma LOCATION(ROM_HibernateRTCMatchSet, 0x1004878)
void ROM_HibernateRTCMatchSet (uint32_t ui32Match, uint32_t ui32Value) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateRTCSSMatchGet)
#pragma LOCATION(ROM_HibernateRTCSSMatchGet, 0x10048aa)
uint32_t ROM_HibernateRTCSSMatchGet (uint32_t ui32Match) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_HibernateRTCSSMatchSet)
#pragma LOCATION(ROM_HibernateRTCSSMatchSet, 0x10048b2)
void ROM_HibernateRTCSSMatchSet (uint32_t ui32Match, uint32_t ui32Value) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterDataPut)
#pragma LOCATION(ROM_I2CMasterDataPut, 0x1004b4e)
void ROM_I2CMasterDataPut (uint32_t ui32Base, uint8_t ui8Data) { asm(" nop");}

#pragma RETAIN(ROM_I2CMasterInitExpClk)
#pragma LOCATION(ROM_I2CMasterInitExpClk, 0x1004b86)
void ROM_I2CMasterInitExpClk (uint32_t ui32Base, uint32_t ui32I2CClk, bool bFast) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveInit)
#pragma LOCATION(ROM_I2CSlaveInit, 0x1004cd6)
void ROM_I2CSlaveInit (uint32_t ui32Base, uint8_t ui8SlaveAddr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterEnable)
#pragma LOCATION(ROM_I2CMasterEnable, 0x1004b5c)
void ROM_I2CMasterEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveEnable)
#pragma LOCATION(ROM_I2CSlaveEnable, 0x1004cb4)
void ROM_I2CSlaveEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterDisable)
#pragma LOCATION(ROM_I2CMasterDisable, 0x1004b52)
void ROM_I2CMasterDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveDisable)
#pragma LOCATION(ROM_I2CSlaveDisable, 0x1004ca4)
void ROM_I2CSlaveDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterIntEnable)
#pragma LOCATION(ROM_I2CMasterIntEnable, 0x1004bec)
void ROM_I2CMasterIntEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveIntEnable)
#pragma LOCATION(ROM_I2CSlaveIntEnable, 0x1004d12)
void ROM_I2CSlaveIntEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterIntDisable)
#pragma LOCATION(ROM_I2CMasterIntDisable, 0x1004bdc)
void ROM_I2CMasterIntDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveIntDisable)
#pragma LOCATION(ROM_I2CSlaveIntDisable, 0x1004cf4)
void ROM_I2CSlaveIntDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterIntStatus)
#pragma LOCATION(ROM_I2CMasterIntStatus, 0x1004bfa)
bool ROM_I2CMasterIntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveIntStatus)
#pragma LOCATION(ROM_I2CSlaveIntStatus, 0x1004d30)
bool ROM_I2CSlaveIntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterIntClear)
#pragma LOCATION(ROM_I2CMasterIntClear, 0x1004bd0)
void ROM_I2CMasterIntClear (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveIntClear)
#pragma LOCATION(ROM_I2CSlaveIntClear, 0x1004ce6)
void ROM_I2CSlaveIntClear (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterSlaveAddrSet)
#pragma LOCATION(ROM_I2CMasterSlaveAddrSet, 0x1004c20)
void ROM_I2CMasterSlaveAddrSet (uint32_t ui32Base, uint8_t ui8SlaveAddr, bool bReceive) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterBusy)
#pragma LOCATION(ROM_I2CMasterBusy, 0x1004b3a)
bool ROM_I2CMasterBusy (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterBusBusy)
#pragma LOCATION(ROM_I2CMasterBusBusy, 0x1004b2e)
bool ROM_I2CMasterBusBusy (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterControl)
#pragma LOCATION(ROM_I2CMasterControl, 0x1004b46)
void ROM_I2CMasterControl (uint32_t ui32Base, uint32_t ui32Cmd) { asm(" nop");}

#pragma RETAIN(ROM_I2CMasterErr)
#pragma LOCATION(ROM_I2CMasterErr, 0x1004b66)
uint32_t ROM_I2CMasterErr (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterDataGet)
#pragma LOCATION(ROM_I2CMasterDataGet, 0x1004b4a)
uint32_t ROM_I2CMasterDataGet (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveStatus)
#pragma LOCATION(ROM_I2CSlaveStatus, 0x1004d5a)
uint32_t ROM_I2CSlaveStatus (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveDataPut)
#pragma LOCATION(ROM_I2CSlaveDataPut, 0x1004c9e)
void ROM_I2CSlaveDataPut (uint32_t ui32Base, uint8_t ui8Data) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveDataGet)
#pragma LOCATION(ROM_I2CSlaveDataGet, 0x1004c98)
uint32_t ROM_I2CSlaveDataGet (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UpdateI2C)
#pragma LOCATION(ROM_UpdateI2C, 0x1001734)
void ROM_UpdateI2C (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveIntEnableEx)
#pragma LOCATION(ROM_I2CSlaveIntEnableEx, 0x1004d22)
void ROM_I2CSlaveIntEnableEx (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveIntDisableEx)
#pragma LOCATION(ROM_I2CSlaveIntDisableEx, 0x1004d04)
void ROM_I2CSlaveIntDisableEx (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveIntStatusEx)
#pragma LOCATION(ROM_I2CSlaveIntStatusEx, 0x1004d4c)
uint32_t ROM_I2CSlaveIntStatusEx (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveIntClearEx)
#pragma LOCATION(ROM_I2CSlaveIntClearEx, 0x1004cee)
void ROM_I2CSlaveIntClearEx (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterIntEnableEx)
#pragma LOCATION(ROM_I2CMasterIntEnableEx, 0x1004bf2)
void ROM_I2CMasterIntEnableEx (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterIntDisableEx)
#pragma LOCATION(ROM_I2CMasterIntDisableEx, 0x1004be2)
void ROM_I2CMasterIntDisableEx (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterIntStatusEx)
#pragma LOCATION(ROM_I2CMasterIntStatusEx, 0x1004c12)
uint32_t ROM_I2CMasterIntStatusEx (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterIntClearEx)
#pragma LOCATION(ROM_I2CMasterIntClearEx, 0x1004bd8)
void ROM_I2CMasterIntClearEx (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop");}

#pragma RETAIN(ROM_I2CMasterTimeoutSet)
#pragma LOCATION(ROM_I2CMasterTimeoutSet, 0x1004c28)
void ROM_I2CMasterTimeoutSet (uint32_t ui32Base, uint32_t ui32Value) { asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveACKOverride)
#pragma LOCATION(ROM_I2CSlaveACKOverride, 0x1004c50)
void ROM_I2CSlaveACKOverride (uint32_t ui32Base, bool bEnable) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveACKValueSet)
#pragma LOCATION(ROM_I2CSlaveACKValueSet, 0x1004c68)
void ROM_I2CSlaveACKValueSet (uint32_t ui32Base, bool bACK) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveAddressSet)
#pragma LOCATION(ROM_I2CSlaveAddressSet, 0x1004c80)
void ROM_I2CSlaveAddressSet (uint32_t ui32Base, uint8_t ui8AddrNum, uint8_t ui8SlaveAddr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterLineStateGet)
#pragma LOCATION(ROM_I2CMasterLineStateGet, 0x1004c1c)
uint32_t ROM_I2CMasterLineStateGet (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_I2CTxFIFOConfigSet)
#pragma LOCATION(ROM_I2CTxFIFOConfigSet, 0x1004d60)
void ROM_I2CTxFIFOConfigSet (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CTxFIFOFlush)
#pragma LOCATION(ROM_I2CTxFIFOFlush, 0x1004d76)
void ROM_I2CTxFIFOFlush (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CRxFIFOConfigSet)
#pragma LOCATION(ROM_I2CRxFIFOConfigSet, 0x1004c2c)
void ROM_I2CRxFIFOConfigSet (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CRxFIFOFlush)
#pragma LOCATION(ROM_I2CRxFIFOFlush, 0x1004c40)
void ROM_I2CRxFIFOFlush (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CFIFOStatus)
#pragma LOCATION(ROM_I2CFIFOStatus, 0x1004b20)
uint32_t ROM_I2CFIFOStatus (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CFIFODataPut)
#pragma LOCATION(ROM_I2CFIFODataPut, 0x1004afc)
void ROM_I2CFIFODataPut (uint32_t ui32Base, uint8_t ui8Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CFIFODataPutNonBlocking)
#pragma LOCATION(ROM_I2CFIFODataPutNonBlocking, 0x1004b0c)
uint32_t ROM_I2CFIFODataPutNonBlocking (uint32_t ui32Base, uint8_t ui8Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CFIFODataGet)
#pragma LOCATION(ROM_I2CFIFODataGet, 0x1004ad4)
uint32_t ROM_I2CFIFODataGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CFIFODataGetNonBlocking)
#pragma LOCATION(ROM_I2CFIFODataGetNonBlocking, 0x1004ae4)
uint32_t ROM_I2CFIFODataGetNonBlocking (uint32_t ui32Base, uint8_t *pui8Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterBurstLengthSet)
#pragma LOCATION(ROM_I2CMasterBurstLengthSet, 0x1004b2a)
void ROM_I2CMasterBurstLengthSet (uint32_t ui32Base, uint8_t ui8Length) { asm(" nop");}

#pragma RETAIN(ROM_I2CMasterBurstCountGet)
#pragma LOCATION(ROM_I2CMasterBurstCountGet, 0x1004b26)
uint32_t ROM_I2CMasterBurstCountGet (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveFIFODisable)
#pragma LOCATION(ROM_I2CSlaveFIFODisable, 0x1004cc4)
void ROM_I2CSlaveFIFODisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CSlaveFIFOEnable)
#pragma LOCATION(ROM_I2CSlaveFIFOEnable, 0x1004ccc)
void ROM_I2CSlaveFIFOEnable (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_I2CMasterGlitchFilterConfigSet)
#pragma LOCATION(ROM_I2CMasterGlitchFilterConfigSet, 0x1004b7e)
void ROM_I2CMasterGlitchFilterConfigSet (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_IntEnable)
#pragma LOCATION(ROM_IntEnable, 0x1004de2)
void ROM_IntEnable (uint32_t ui32Interrupt) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_IntMasterEnable)
#pragma LOCATION(ROM_IntMasterEnable, 0x100cd98)
bool ROM_IntMasterEnable (void) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_IntMasterDisable)
#pragma LOCATION(ROM_IntMasterDisable, 0x100cda0)
bool ROM_IntMasterDisable (void) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_IntDisable)
#pragma LOCATION(ROM_IntDisable, 0x1004d86)
void ROM_IntDisable (uint32_t ui32Interrupt) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_IntPriorityGroupingSet)
#pragma LOCATION(ROM_IntPriorityGroupingSet, 0x1004f7a)
void ROM_IntPriorityGroupingSet (uint32_t ui32Bits) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_IntPriorityGroupingGet)
#pragma LOCATION(ROM_IntPriorityGroupingGet, 0x1004f5c)
uint32_t ROM_IntPriorityGroupingGet (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_IntPrioritySet)
#pragma LOCATION(ROM_IntPrioritySet, 0x1004f8e)
void ROM_IntPrioritySet (uint32_t ui32Interrupt, uint8_t ui8Priority) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_IntPriorityGet)
#pragma LOCATION(ROM_IntPriorityGet, 0x1004f46)
int32_t ROM_IntPriorityGet (uint32_t ui32Interrupt) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_IntPendSet)
#pragma LOCATION(ROM_IntPendSet, 0x1004efc)
void ROM_IntPendSet (uint32_t ui32Interrupt) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_IntPendClear)
#pragma LOCATION(ROM_IntPendClear, 0x1004ec0)
void ROM_IntPendClear (uint32_t ui32Interrupt) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_IntPriorityMaskSet)
#pragma LOCATION(ROM_IntPriorityMaskSet, 0x100cda8)
void ROM_IntPriorityMaskSet (uint32_t ui32PriorityMask) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_IntPriorityMaskGet)
#pragma LOCATION(ROM_IntPriorityMaskGet, 0x100cdae)
uint32_t ROM_IntPriorityMaskGet (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_IntIsEnabled)
#pragma LOCATION(ROM_IntIsEnabled, 0x1004e68)
uint32_t ROM_IntIsEnabled (uint32_t ui32Interrupt) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_IntTrigger)
#pragma LOCATION(ROM_IntTrigger, 0x1004fb2)
void ROM_IntTrigger (uint32_t ui32Interrupt) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDIntStatus)
#pragma LOCATION(ROM_LCDIntStatus, 0x10051ba)
uint32_t ROM_LCDIntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDClockReset)
#pragma LOCATION(ROM_LCDClockReset, 0x10050b2)
void ROM_LCDClockReset (uint32_t ui32Base, uint32_t ui32Clocks) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDDMAConfigSet)
#pragma LOCATION(ROM_LCDDMAConfigSet, 0x10050cc)
void ROM_LCDDMAConfigSet (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop");}

#pragma RETAIN(ROM_LCDIDDCommandWrite)
#pragma LOCATION(ROM_LCDIDDCommandWrite, 0x10050d0)
void ROM_LCDIDDCommandWrite (uint32_t ui32Base, uint32_t ui32CS, uint16_t ui16Cmd) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDIDDConfigSet)
#pragma LOCATION(ROM_LCDIDDConfigSet, 0x10050dc)
void ROM_LCDIDDConfigSet (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop");}

#pragma RETAIN(ROM_LCDIDDDataRead)
#pragma LOCATION(ROM_LCDIDDDataRead, 0x10050e0)
uint16_t ROM_LCDIDDDataRead (uint32_t ui32Base, uint32_t ui32CS) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDIDDDataWrite)
#pragma LOCATION(ROM_LCDIDDDataWrite, 0x10050ee)
void ROM_LCDIDDDataWrite (uint32_t ui32Base, uint32_t ui32CS, uint16_t ui16Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDIDDDMADisable)
#pragma LOCATION(ROM_LCDIDDDMADisable, 0x10050fa)
void ROM_LCDIDDDMADisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDIDDDMAWrite)
#pragma LOCATION(ROM_LCDIDDDMAWrite, 0x1005104)
void ROM_LCDIDDDMAWrite (uint32_t ui32Base, uint32_t ui32CS, const uint32_t *pui32Data, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDIDDIndexedRead)
#pragma LOCATION(ROM_LCDIDDIndexedRead, 0x1005134)
uint16_t ROM_LCDIDDIndexedRead (uint32_t ui32Base, uint32_t ui32CS, uint16_t ui16Addr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDIDDIndexedWrite)
#pragma LOCATION(ROM_LCDIDDIndexedWrite, 0x100514a)
void ROM_LCDIDDIndexedWrite (uint32_t ui32Base, uint32_t ui32CS, uint16_t ui16Addr, uint16_t ui16Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDIDDStatusRead)
#pragma LOCATION(ROM_LCDIDDStatusRead, 0x1005164)
uint16_t ROM_LCDIDDStatusRead (uint32_t ui32Base, uint32_t ui32CS) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDIDDTimingSet)
#pragma LOCATION(ROM_LCDIDDTimingSet, 0x1005172)
void ROM_LCDIDDTimingSet (uint32_t ui32Base, uint32_t ui32CS, const tLCDIDDTiming *pTiming) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDIntClear)
#pragma LOCATION(ROM_LCDIntClear, 0x10051ae)
void ROM_LCDIntClear (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop");}

#pragma RETAIN(ROM_LCDIntDisable)
#pragma LOCATION(ROM_LCDIntDisable, 0x10051b2)
void ROM_LCDIntDisable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop");}

#pragma RETAIN(ROM_LCDIntEnable)
#pragma LOCATION(ROM_LCDIntEnable, 0x10051b6)
void ROM_LCDIntEnable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop");}

#pragma RETAIN(ROM_LCDModeSet)
#pragma LOCATION(ROM_LCDModeSet, 0x10051c4)
uint32_t ROM_LCDModeSet (uint32_t ui32Base, uint8_t ui8Mode, uint32_t ui32PixClk, uint32_t ui32SysClk) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDRasterACBiasIntCountSet)
#pragma LOCATION(ROM_LCDRasterACBiasIntCountSet, 0x10051ea)
void ROM_LCDRasterACBiasIntCountSet (uint32_t ui32Base, uint8_t ui8Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDRasterConfigSet)
#pragma LOCATION(ROM_LCDRasterConfigSet, 0x10051fe)
void ROM_LCDRasterConfigSet (uint32_t ui32Base, uint32_t ui32Config, uint8_t ui8PalLoadDelay) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDRasterDisable)
#pragma LOCATION(ROM_LCDRasterDisable, 0x1005206)
void ROM_LCDRasterDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDRasterEnable)
#pragma LOCATION(ROM_LCDRasterEnable, 0x1005210)
void ROM_LCDRasterEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDRasterFrameBufferSet)
#pragma LOCATION(ROM_LCDRasterFrameBufferSet, 0x1005258)
void ROM_LCDRasterFrameBufferSet (uint32_t ui32Base, uint8_t ui8Buffer, uint32_t *pui32Addr, uint32_t ui32NumBytes) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDRasterPaletteSet)
#pragma LOCATION(ROM_LCDRasterPaletteSet, 0x100526a)
void ROM_LCDRasterPaletteSet (uint32_t ui32Base, uint32_t ui32Type, uint32_t *pui32PalAddr, const uint32_t *pui32SrcColors, uint32_t ui32Start, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDRasterSubPanelConfigSet)
#pragma LOCATION(ROM_LCDRasterSubPanelConfigSet, 0x10052c2)
void ROM_LCDRasterSubPanelConfigSet (uint32_t ui32Base, uint32_t ui32Flags, uint32_t ui32BottomLines, uint32_t ui32DefaultPixel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDRasterSubPanelDisable)
#pragma LOCATION(ROM_LCDRasterSubPanelDisable, 0x10052f6)
void ROM_LCDRasterSubPanelDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDRasterSubPanelEnable)
#pragma LOCATION(ROM_LCDRasterSubPanelEnable, 0x1005300)
void ROM_LCDRasterSubPanelEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDRasterTimingSet)
#pragma LOCATION(ROM_LCDRasterTimingSet, 0x100530a)
void ROM_LCDRasterTimingSet (uint32_t ui32Base, const tLCDRasterTiming *pTiming) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_LCDRasterEnabled)
#pragma LOCATION(ROM_LCDRasterEnabled, 0x1005250)
bool ROM_LCDRasterEnabled (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_MPUEnable)
#pragma LOCATION(ROM_MPUEnable, 0x1005ace)
void ROM_MPUEnable (uint32_t ui32MPUConfig) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_MPUDisable)
#pragma LOCATION(ROM_MPUDisable, 0x1005ac2)
void ROM_MPUDisable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_MPURegionCountGet)
#pragma LOCATION(ROM_MPURegionCountGet, 0x1005ad8)
uint32_t ROM_MPURegionCountGet (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_MPURegionEnable)
#pragma LOCATION(ROM_MPURegionEnable, 0x1005af2)
void ROM_MPURegionEnable (uint32_t ui32Region) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_MPURegionDisable)
#pragma LOCATION(ROM_MPURegionDisable, 0x1005ae2)
void ROM_MPURegionDisable (uint32_t ui32Region) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_MPURegionSet)
#pragma LOCATION(ROM_MPURegionSet, 0x1005b18)
void ROM_MPURegionSet (uint32_t ui32Region, uint32_t ui32Addr, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_MPURegionGet)
#pragma LOCATION(ROM_MPURegionGet, 0x1005b02)
void ROM_MPURegionGet (uint32_t ui32Region, uint32_t *pui32Addr, uint32_t *pui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_OneWireIntStatus)
#pragma LOCATION(ROM_OneWireIntStatus, 0x1005bde)
uint32_t ROM_OneWireIntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_OneWireBusReset)
#pragma LOCATION(ROM_OneWireBusReset, 0x1005b30)
void ROM_OneWireBusReset (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_OneWireBusStatus)
#pragma LOCATION(ROM_OneWireBusStatus, 0x1005b3a)
uint32_t ROM_OneWireBusStatus (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_OneWireDataGet)
#pragma LOCATION(ROM_OneWireDataGet, 0x1005b42)
void ROM_OneWireDataGet (uint32_t u3i2Base, uint32_t *pui32Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_OneWireDataGetNonBlocking)
#pragma LOCATION(ROM_OneWireDataGetNonBlocking, 0x1005b50)
bool ROM_OneWireDataGetNonBlocking (uint32_t ui32Base, uint32_t *pui32Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_OneWireInit)
#pragma LOCATION(ROM_OneWireInit, 0x1005bba)
void ROM_OneWireInit (uint32_t ui32Base, uint32_t ui32InitFlags) { asm(" nop");}

#pragma RETAIN(ROM_OneWireIntClear)
#pragma LOCATION(ROM_OneWireIntClear, 0x1005bbe)
void ROM_OneWireIntClear (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_OneWireIntDisable)
#pragma LOCATION(ROM_OneWireIntDisable, 0x1005bc4)
void ROM_OneWireIntDisable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_OneWireIntEnable)
#pragma LOCATION(ROM_OneWireIntEnable, 0x1005bd2)
void ROM_OneWireIntEnable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_OneWireTransaction)
#pragma LOCATION(ROM_OneWireTransaction, 0x1005bec)
void ROM_OneWireTransaction (uint32_t ui32Base, uint32_t ui32OpFlags, uint32_t ui32Data, uint32_t ui32BitCnt) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_OneWireDMADisable)
#pragma LOCATION(ROM_OneWireDMADisable, 0x1005b64)
void ROM_OneWireDMADisable (uint32_t ui32Base, uint32_t ui32DMAFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_OneWireDMAEnable)
#pragma LOCATION(ROM_OneWireDMAEnable, 0x1005b80)
void ROM_OneWireDMAEnable (uint32_t ui32Base, uint32_t ui32DMAFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMPulseWidthSet)
#pragma LOCATION(ROM_PWMPulseWidthSet, 0x100619c)
void ROM_PWMPulseWidthSet (uint32_t ui32Base, uint32_t ui32PWMOut, uint32_t ui32Width) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMGenConfigure)
#pragma LOCATION(ROM_PWMGenConfigure, 0x1006010)
void ROM_PWMGenConfigure (uint32_t ui32Base, uint32_t ui32Gen, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMGenPeriodSet)
#pragma LOCATION(ROM_PWMGenPeriodSet, 0x10060be)
void ROM_PWMGenPeriodSet (uint32_t ui32Base, uint32_t ui32Gen, uint32_t ui32Period) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMGenPeriodGet)
#pragma LOCATION(ROM_PWMGenPeriodGet, 0x10060d0)
uint32_t ROM_PWMGenPeriodGet (uint32_t ui32Base, uint32_t ui32Gen) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMGenEnable)
#pragma LOCATION(ROM_PWMGenEnable, 0x1006040)
void ROM_PWMGenEnable (uint32_t ui32Base, uint32_t ui32Gen) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMGenDisable)
#pragma LOCATION(ROM_PWMGenDisable, 0x1006036)
void ROM_PWMGenDisable (uint32_t ui32Base, uint32_t ui32Gen) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMPulseWidthGet)
#pragma LOCATION(ROM_PWMPulseWidthGet, 0x100617c)
uint32_t ROM_PWMPulseWidthGet (uint32_t ui32Base, uint32_t ui32PWMOut) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMDeadBandEnable)
#pragma LOCATION(ROM_PWMDeadBandEnable, 0x1005ff4)
void ROM_PWMDeadBandEnable (uint32_t ui32Base, uint32_t ui32Gen, uint16_t ui16Rise, uint16_t ui16Fall) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMDeadBandDisable)
#pragma LOCATION(ROM_PWMDeadBandDisable, 0x1005fe8)
void ROM_PWMDeadBandDisable (uint32_t ui32Base, uint32_t ui32Gen) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMSyncUpdate)
#pragma LOCATION(ROM_PWMSyncUpdate, 0x10061c0)
void ROM_PWMSyncUpdate (uint32_t ui32Base, uint32_t ui32GenBits) { asm(" nop");}

#pragma RETAIN(ROM_PWMSyncTimeBase)
#pragma LOCATION(ROM_PWMSyncTimeBase, 0x10061bc)
void ROM_PWMSyncTimeBase (uint32_t ui32Base, uint32_t ui32GenBits) { asm(" nop");}

#pragma RETAIN(ROM_PWMOutputState)
#pragma LOCATION(ROM_PWMOutputState, 0x100612e)
void ROM_PWMOutputState (uint32_t ui32Base, uint32_t ui32PWMOutBits, bool bEnable) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMOutputInvert)
#pragma LOCATION(ROM_PWMOutputInvert, 0x100611e)
void ROM_PWMOutputInvert (uint32_t ui32Base, uint32_t ui32PWMOutBits, bool bInvert) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMOutputFault)
#pragma LOCATION(ROM_PWMOutputFault, 0x10060fe)
void ROM_PWMOutputFault (uint32_t ui32Base, uint32_t ui32PWMOutBits, bool bFaultSuppress) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMGenIntTrigEnable)
#pragma LOCATION(ROM_PWMGenIntTrigEnable, 0x10060b4)
void ROM_PWMGenIntTrigEnable (uint32_t ui32Base, uint32_t ui32Gen, uint32_t ui32IntTrig) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMGenIntTrigDisable)
#pragma LOCATION(ROM_PWMGenIntTrigDisable, 0x10060aa)
void ROM_PWMGenIntTrigDisable (uint32_t ui32Base, uint32_t ui32Gen, uint32_t ui32IntTrig) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMGenIntStatus)
#pragma LOCATION(ROM_PWMGenIntStatus, 0x100609e)
uint32_t ROM_PWMGenIntStatus (uint32_t ui32Base, uint32_t ui32Gen, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMGenIntClear)
#pragma LOCATION(ROM_PWMGenIntClear, 0x1006098)
void ROM_PWMGenIntClear (uint32_t ui32Base, uint32_t ui32Gen, uint32_t ui32Ints) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMIntEnable)
#pragma LOCATION(ROM_PWMIntEnable, 0x10060ec)
void ROM_PWMIntEnable (uint32_t ui32Base, uint32_t ui32GenFault) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMIntDisable)
#pragma LOCATION(ROM_PWMIntDisable, 0x10060e2)
void ROM_PWMIntDisable (uint32_t ui32Base, uint32_t ui32GenFault) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMFaultIntClear)
#pragma LOCATION(ROM_PWMFaultIntClear, 0x1006004)
void ROM_PWMFaultIntClear (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMIntStatus)
#pragma LOCATION(ROM_PWMIntStatus, 0x10060f4)
uint32_t ROM_PWMIntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMOutputFaultLevel)
#pragma LOCATION(ROM_PWMOutputFaultLevel, 0x100610e)
void ROM_PWMOutputFaultLevel (uint32_t ui32Base, uint32_t ui32PWMOutBits, bool bDriveHigh) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMFaultIntClearExt)
#pragma LOCATION(ROM_PWMFaultIntClearExt, 0x100600c)
void ROM_PWMFaultIntClearExt (uint32_t ui32Base, uint32_t ui32FaultInts) { asm(" nop");}

#pragma RETAIN(ROM_PWMGenFaultConfigure)
#pragma LOCATION(ROM_PWMGenFaultConfigure, 0x100605c)
void ROM_PWMGenFaultConfigure (uint32_t ui32Base, uint32_t ui32Gen, uint32_t ui32MinFaultPeriod, uint32_t ui32FaultSenses) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMGenFaultTriggerSet)
#pragma LOCATION(ROM_PWMGenFaultTriggerSet, 0x100608c)
void ROM_PWMGenFaultTriggerSet (uint32_t ui32Base, uint32_t ui32Gen, uint32_t ui32Group, uint32_t ui32FaultTriggers) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMGenFaultTriggerGet)
#pragma LOCATION(ROM_PWMGenFaultTriggerGet, 0x1006080)
uint32_t ROM_PWMGenFaultTriggerGet (uint32_t ui32Base, uint32_t ui32Gen, uint32_t ui32Group) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMGenFaultStatus)
#pragma LOCATION(ROM_PWMGenFaultStatus, 0x100606e)
uint32_t ROM_PWMGenFaultStatus (uint32_t ui32Base, uint32_t ui32Gen, uint32_t ui32Group) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMGenFaultClear)
#pragma LOCATION(ROM_PWMGenFaultClear, 0x100604a)
void ROM_PWMGenFaultClear (uint32_t ui32Base, uint32_t ui32Gen, uint32_t ui32Group, uint32_t ui32FaultTriggers) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMClockSet)
#pragma LOCATION(ROM_PWMClockSet, 0x1005fd2)
void ROM_PWMClockSet (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMClockGet)
#pragma LOCATION(ROM_PWMClockGet, 0x1005fb8)
uint32_t ROM_PWMClockGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_PWMOutputUpdateMode)
#pragma LOCATION(ROM_PWMOutputUpdateMode, 0x100613e)
void ROM_PWMOutputUpdateMode (uint32_t ui32Base, uint32_t ui32PWMOutBits, uint32_t ui32Mode) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_QEIPositionGet)
#pragma LOCATION(ROM_QEIPositionGet, 0x100621e)
uint32_t ROM_QEIPositionGet (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_QEIEnable)
#pragma LOCATION(ROM_QEIEnable, 0x10061ec)
void ROM_QEIEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_QEIDisable)
#pragma LOCATION(ROM_QEIDisable, 0x10061e2)
void ROM_QEIDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_QEIConfigure)
#pragma LOCATION(ROM_QEIConfigure, 0x10061c4)
void ROM_QEIConfigure (uint32_t ui32Base, uint32_t ui32Config, uint32_t ui32MaxPosition) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_QEIPositionSet)
#pragma LOCATION(ROM_QEIPositionSet, 0x1006222)
void ROM_QEIPositionSet (uint32_t ui32Base, uint32_t ui32Position) { asm(" nop");}

#pragma RETAIN(ROM_QEIDirectionGet)
#pragma LOCATION(ROM_QEIDirectionGet, 0x10061d2)
int32_t ROM_QEIDirectionGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_QEIErrorGet)
#pragma LOCATION(ROM_QEIErrorGet, 0x10061f6)
bool ROM_QEIErrorGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_QEIVelocityEnable)
#pragma LOCATION(ROM_QEIVelocityEnable, 0x1006240)
void ROM_QEIVelocityEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_QEIVelocityDisable)
#pragma LOCATION(ROM_QEIVelocityDisable, 0x1006236)
void ROM_QEIVelocityDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_QEIVelocityConfigure)
#pragma LOCATION(ROM_QEIVelocityConfigure, 0x1006226)
void ROM_QEIVelocityConfigure (uint32_t ui32Base, uint32_t ui32PreDiv, uint32_t ui32Period) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_QEIVelocityGet)
#pragma LOCATION(ROM_QEIVelocityGet, 0x100624a)
uint32_t ROM_QEIVelocityGet (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_QEIIntEnable)
#pragma LOCATION(ROM_QEIIntEnable, 0x100620c)
void ROM_QEIIntEnable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_QEIIntDisable)
#pragma LOCATION(ROM_QEIIntDisable, 0x1006202)
void ROM_QEIIntDisable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_QEIIntStatus)
#pragma LOCATION(ROM_QEIIntStatus, 0x1006214)
uint32_t ROM_QEIIntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_QEIIntClear)
#pragma LOCATION(ROM_QEIIntClear, 0x10061fe)
void ROM_QEIIntClear (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop");}

#pragma RETAIN(ROM_SHAMD5IntStatus)
#pragma LOCATION(ROM_SHAMD5IntStatus, 0x10064ba)
uint32_t ROM_SHAMD5IntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SHAMD5ConfigSet)
#pragma LOCATION(ROM_SHAMD5ConfigSet, 0x10062c2)
void ROM_SHAMD5ConfigSet (uint32_t ui32Base, uint32_t ui32Mode) { asm(" nop");}

#pragma RETAIN(ROM_SHAMD5DataProcess)
#pragma LOCATION(ROM_SHAMD5DataProcess, 0x100630a)
void ROM_SHAMD5DataProcess (uint32_t ui32Base, uint32_t *pui32DataSrc, uint32_t ui32DataLength, uint32_t *pui32HashResult) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SHAMD5DataWrite)
#pragma LOCATION(ROM_SHAMD5DataWrite, 0x100624e)
void ROM_SHAMD5DataWrite (uint32_t ui32Base, uint32_t *pui32Src) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SHAMD5DataWriteNonBlocking)
#pragma LOCATION(ROM_SHAMD5DataWriteNonBlocking, 0x1006340)
bool ROM_SHAMD5DataWriteNonBlocking (uint32_t ui32Base, uint32_t *pui32Src) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SHAMD5DMADisable)
#pragma LOCATION(ROM_SHAMD5DMADisable, 0x1006366)
void ROM_SHAMD5DMADisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SHAMD5DMAEnable)
#pragma LOCATION(ROM_SHAMD5DMAEnable, 0x1006374)
void ROM_SHAMD5DMAEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SHAMD5HashLengthSet)
#pragma LOCATION(ROM_SHAMD5HashLengthSet, 0x1006306)
void ROM_SHAMD5HashLengthSet (uint32_t ui32Base, uint32_t ui32Length) { asm(" nop");}

#pragma RETAIN(ROM_SHAMD5HMACKeySet)
#pragma LOCATION(ROM_SHAMD5HMACKeySet, 0x1006382)
void ROM_SHAMD5HMACKeySet (uint32_t ui32Base, uint32_t *pui32Src) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SHAMD5HMACPPKeyGenerate)
#pragma LOCATION(ROM_SHAMD5HMACPPKeyGenerate, 0x100639a)
void ROM_SHAMD5HMACPPKeyGenerate (uint32_t ui32Base, uint32_t *pui32Key, uint32_t *pui32PPKey) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SHAMD5HMACPPKeySet)
#pragma LOCATION(ROM_SHAMD5HMACPPKeySet, 0x10063da)
void ROM_SHAMD5HMACPPKeySet (uint32_t ui32Base, uint32_t *pui32Src) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SHAMD5HMACProcess)
#pragma LOCATION(ROM_SHAMD5HMACProcess, 0x10063f6)
void ROM_SHAMD5HMACProcess (uint32_t ui32Base, uint32_t *pui32DataSrc, uint32_t ui32DataLength, uint32_t *pui32HashResult) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SHAMD5IntClear)
#pragma LOCATION(ROM_SHAMD5IntClear, 0x100642c)
void ROM_SHAMD5IntClear (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SHAMD5IntDisable)
#pragma LOCATION(ROM_SHAMD5IntDisable, 0x1006442)
void ROM_SHAMD5IntDisable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SHAMD5IntEnable)
#pragma LOCATION(ROM_SHAMD5IntEnable, 0x1006484)
void ROM_SHAMD5IntEnable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SHAMD5Reset)
#pragma LOCATION(ROM_SHAMD5Reset, 0x1006502)
void ROM_SHAMD5Reset (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SHAMD5ResultRead)
#pragma LOCATION(ROM_SHAMD5ResultRead, 0x10062c6)
void ROM_SHAMD5ResultRead (uint32_t ui32Base, uint32_t *pui32Dest) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterIntProcess)
#pragma LOCATION(ROM_SMBusMasterIntProcess, 0x100783e)
tSMBusStatus ROM_SMBusMasterIntProcess (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusARPDisable)
#pragma LOCATION(ROM_SMBusARPDisable, 0x1006a24)
void ROM_SMBusARPDisable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusARPEnable)
#pragma LOCATION(ROM_SMBusARPEnable, 0x1006a40)
void ROM_SMBusARPEnable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusARPUDIDPacketDecode)
#pragma LOCATION(ROM_SMBusARPUDIDPacketDecode, 0x1006a5c)
void ROM_SMBusARPUDIDPacketDecode (tSMBusUDID *pUDID, uint8_t *pui8Address, uint8_t *pui8Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusARPUDIDPacketEncode)
#pragma LOCATION(ROM_SMBusARPUDIDPacketEncode, 0x1006a9a)
void ROM_SMBusARPUDIDPacketEncode (tSMBusUDID *pUDID, uint8_t ui8Address, uint8_t *pui8Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterARPAssignAddress)
#pragma LOCATION(ROM_SMBusMasterARPAssignAddress, 0x1006d60)
tSMBusStatus ROM_SMBusMasterARPAssignAddress (tSMBus *psSMBus, uint8_t *pui8Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterARPGetUDIDDir)
#pragma LOCATION(ROM_SMBusMasterARPGetUDIDDir, 0x1006e2a)
tSMBusStatus ROM_SMBusMasterARPGetUDIDDir (tSMBus *psSMBus, uint8_t ui8TargetAddress, uint8_t *pui8Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterARPGetUDIDGen)
#pragma LOCATION(ROM_SMBusMasterARPGetUDIDGen, 0x1006e38)
tSMBusStatus ROM_SMBusMasterARPGetUDIDGen (tSMBus *psSMBus, uint8_t *pui8Data) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterARPNotifyMaster)
#pragma LOCATION(ROM_SMBusMasterARPNotifyMaster, 0x1006ed8)
tSMBusStatus ROM_SMBusMasterARPNotifyMaster (tSMBus *psSMBus, uint8_t *pui8Data) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterARPPrepareToARP)
#pragma LOCATION(ROM_SMBusMasterARPPrepareToARP, 0x1006fbc)
tSMBusStatus ROM_SMBusMasterARPPrepareToARP (tSMBus *psSMBus) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterARPResetDeviceDir)
#pragma LOCATION(ROM_SMBusMasterARPResetDeviceDir, 0x1006fc2)
tSMBusStatus ROM_SMBusMasterARPResetDeviceDir (tSMBus *psSMBus, uint8_t ui8TargetAddress) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterARPResetDeviceGen)
#pragma LOCATION(ROM_SMBusMasterARPResetDeviceGen, 0x1006fca)
tSMBusStatus ROM_SMBusMasterARPResetDeviceGen (tSMBus *psSMBus) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterBlockProcessCall)
#pragma LOCATION(ROM_SMBusMasterBlockProcessCall, 0x1006fd0)
tSMBusStatus ROM_SMBusMasterBlockProcessCall (tSMBus *psSMBus, uint8_t ui8TargetAddress, uint8_t ui8Command, uint8_t *pui8TxData, uint8_t ui8TxSize, uint8_t *pui8RxData) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterBlockRead)
#pragma LOCATION(ROM_SMBusMasterBlockRead, 0x1006d72)
tSMBusStatus ROM_SMBusMasterBlockRead (tSMBus *psSMBus, uint8_t ui8TargetAddress, uint8_t ui8Command, uint8_t *pui8Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterBlockWrite)
#pragma LOCATION(ROM_SMBusMasterBlockWrite, 0x1006bc4)
tSMBusStatus ROM_SMBusMasterBlockWrite (tSMBus *psSMBus, uint8_t ui8TargetAddress, uint8_t ui8Command, uint8_t *pui8Data, uint8_t ui8Size) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterByteReceive)
#pragma LOCATION(ROM_SMBusMasterByteReceive, 0x1007144)
tSMBusStatus ROM_SMBusMasterByteReceive (tSMBus *psSMBus, uint8_t ui8TargetAddress, uint8_t *pui8Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterByteSend)
#pragma LOCATION(ROM_SMBusMasterByteSend, 0x1006ede)
tSMBusStatus ROM_SMBusMasterByteSend (tSMBus *psSMBus, uint8_t ui8TargetAddress, uint8_t ui8Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterByteWordRead)
#pragma LOCATION(ROM_SMBusMasterByteWordRead, 0x1007202)
tSMBusStatus ROM_SMBusMasterByteWordRead (tSMBus *psSMBus, uint8_t ui8TargetAddress, uint8_t ui8Command, uint8_t *pui8Data, uint8_t ui8Size) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterByteWordWrite)
#pragma LOCATION(ROM_SMBusMasterByteWordWrite, 0x10072d6)
tSMBusStatus ROM_SMBusMasterByteWordWrite (tSMBus *psSMBus, uint8_t ui8TargetAddress, uint8_t ui8Command, uint8_t *pui8Data, uint8_t ui8Size) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterHostNotify)
#pragma LOCATION(ROM_SMBusMasterHostNotify, 0x1006e40)
tSMBusStatus ROM_SMBusMasterHostNotify (tSMBus *psSMBus, uint8_t ui8OwnSlaveAddress, uint8_t *pui8Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterI2CRead)
#pragma LOCATION(ROM_SMBusMasterI2CRead, 0x100744c)
tSMBusStatus ROM_SMBusMasterI2CRead (tSMBus *psSMBus, uint8_t ui8TargetAddress, uint8_t *pui8Data, uint8_t ui8Size) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterI2CWrite)
#pragma LOCATION(ROM_SMBusMasterI2CWrite, 0x100752e)
tSMBusStatus ROM_SMBusMasterI2CWrite (tSMBus *psSMBus, uint8_t ui8TargetAddress, uint8_t *pui8Data, uint8_t ui8Size) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterI2CWriteRead)
#pragma LOCATION(ROM_SMBusMasterI2CWriteRead, 0x100764c)
tSMBusStatus ROM_SMBusMasterI2CWriteRead (tSMBus *psSMBus, uint8_t ui8TargetAddress, uint8_t *pui8TxData, uint8_t ui8TxSize, uint8_t *pui8RxData, uint8_t ui8RxSize) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterInit)
#pragma LOCATION(ROM_SMBusMasterInit, 0x1007752)
void ROM_SMBusMasterInit (tSMBus *psSMBus, uint32_t ui32I2CBase, uint32_t ui32SMBusClock) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterIntEnable)
#pragma LOCATION(ROM_SMBusMasterIntEnable, 0x1007788)
void ROM_SMBusMasterIntEnable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterProcessCall)
#pragma LOCATION(ROM_SMBusMasterProcessCall, 0x1007e94)
tSMBusStatus ROM_SMBusMasterProcessCall (tSMBus *psSMBus, uint8_t ui8TargetAddress, uint8_t ui8Command, uint8_t *pui8TxData, uint8_t *pui8RxData) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusMasterQuickCommand)
#pragma LOCATION(ROM_SMBusMasterQuickCommand, 0x1007faa)
tSMBusStatus ROM_SMBusMasterQuickCommand (tSMBus *psSMBus, uint8_t ui8TargetAddress, bool bData) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusPECDisable)
#pragma LOCATION(ROM_SMBusPECDisable, 0x100802e)
void ROM_SMBusPECDisable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusPECEnable)
#pragma LOCATION(ROM_SMBusPECEnable, 0x1008046)
void ROM_SMBusPECEnable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusRxPacketSizeGet)
#pragma LOCATION(ROM_SMBusRxPacketSizeGet, 0x100805e)
uint8_t ROM_SMBusRxPacketSizeGet (tSMBus *psSMBus) { asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveACKSend)
#pragma LOCATION(ROM_SMBusSlaveACKSend, 0x1008062)
void ROM_SMBusSlaveACKSend (tSMBus *psSMBus, bool bACK) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveAddressSet)
#pragma LOCATION(ROM_SMBusSlaveAddressSet, 0x1008072)
void ROM_SMBusSlaveAddressSet (tSMBus *psSMBus, uint8_t ui8AddressNum, uint8_t ui8SlaveAddress) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveARPFlagARGet)
#pragma LOCATION(ROM_SMBusSlaveARPFlagARGet, 0x1008078)
bool ROM_SMBusSlaveARPFlagARGet (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveARPFlagARSet)
#pragma LOCATION(ROM_SMBusSlaveARPFlagARSet, 0x1008098)
void ROM_SMBusSlaveARPFlagARSet (tSMBus *psSMBus, bool bValue) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveARPFlagAVGet)
#pragma LOCATION(ROM_SMBusSlaveARPFlagAVGet, 0x10080b2)
bool ROM_SMBusSlaveARPFlagAVGet (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveARPFlagAVSet)
#pragma LOCATION(ROM_SMBusSlaveARPFlagAVSet, 0x10080d2)
void ROM_SMBusSlaveARPFlagAVSet (tSMBus *psSMBus, bool bValue) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveBlockTransferDisable)
#pragma LOCATION(ROM_SMBusSlaveBlockTransferDisable, 0x10080ec)
void ROM_SMBusSlaveBlockTransferDisable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveBlockTransferEnable)
#pragma LOCATION(ROM_SMBusSlaveBlockTransferEnable, 0x1008108)
void ROM_SMBusSlaveBlockTransferEnable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveCommandGet)
#pragma LOCATION(ROM_SMBusSlaveCommandGet, 0x1008124)
uint8_t ROM_SMBusSlaveCommandGet (tSMBus *psSMBus) { asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveI2CDisable)
#pragma LOCATION(ROM_SMBusSlaveI2CDisable, 0x10081d6)
void ROM_SMBusSlaveI2CDisable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveI2CEnable)
#pragma LOCATION(ROM_SMBusSlaveI2CEnable, 0x10081f2)
void ROM_SMBusSlaveI2CEnable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveInit)
#pragma LOCATION(ROM_SMBusSlaveInit, 0x100820e)
void ROM_SMBusSlaveInit (tSMBus *psSMBus, uint32_t ui32I2CBase) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveIntAddressGet)
#pragma LOCATION(ROM_SMBusSlaveIntAddressGet, 0x1008230)
tSMBusStatus ROM_SMBusSlaveIntAddressGet (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveIntEnable)
#pragma LOCATION(ROM_SMBusSlaveIntEnable, 0x1008244)
void ROM_SMBusSlaveIntEnable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveIntProcess)
#pragma LOCATION(ROM_SMBusSlaveIntProcess, 0x1008306)
tSMBusStatus ROM_SMBusSlaveIntProcess (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveManualACKDisable)
#pragma LOCATION(ROM_SMBusSlaveManualACKDisable, 0x1008888)
void ROM_SMBusSlaveManualACKDisable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveManualACKEnable)
#pragma LOCATION(ROM_SMBusSlaveManualACKEnable, 0x1008890)
void ROM_SMBusSlaveManualACKEnable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveManualACKStatusGet)
#pragma LOCATION(ROM_SMBusSlaveManualACKStatusGet, 0x1008898)
bool ROM_SMBusSlaveManualACKStatusGet (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveProcessCallDisable)
#pragma LOCATION(ROM_SMBusSlaveProcessCallDisable, 0x10088a4)
void ROM_SMBusSlaveProcessCallDisable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveProcessCallEnable)
#pragma LOCATION(ROM_SMBusSlaveProcessCallEnable, 0x10088c0)
void ROM_SMBusSlaveProcessCallEnable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveRxBufferSet)
#pragma LOCATION(ROM_SMBusSlaveRxBufferSet, 0x10088dc)
void ROM_SMBusSlaveRxBufferSet (tSMBus *psSMBus, uint8_t *pui8Data, uint8_t ui8Size) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveTransferInit)
#pragma LOCATION(ROM_SMBusSlaveTransferInit, 0x10088e2)
void ROM_SMBusSlaveTransferInit (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveTxBufferSet)
#pragma LOCATION(ROM_SMBusSlaveTxBufferSet, 0x1008946)
void ROM_SMBusSlaveTxBufferSet (tSMBus *psSMBus, uint8_t *pui8Data, uint8_t ui8Size) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveUDIDSet)
#pragma LOCATION(ROM_SMBusSlaveUDIDSet, 0x100894c)
void ROM_SMBusSlaveUDIDSet (tSMBus *psSMBus, tSMBusUDID *pUDID) { asm(" nop");}

#pragma RETAIN(ROM_SMBusStatusGet)
#pragma LOCATION(ROM_SMBusStatusGet, 0x1008950)
tSMBusStatus ROM_SMBusStatusGet (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusSlaveDataSend)
#pragma LOCATION(ROM_SMBusSlaveDataSend, 0x1008128)
tSMBusStatus ROM_SMBusSlaveDataSend (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusFIFOEnable)
#pragma LOCATION(ROM_SMBusFIFOEnable, 0x1006536)
void ROM_SMBusFIFOEnable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusFIFODisable)
#pragma LOCATION(ROM_SMBusFIFODisable, 0x1006aee)
void ROM_SMBusFIFODisable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusDMAEnable)
#pragma LOCATION(ROM_SMBusDMAEnable, 0x1006b92)
void ROM_SMBusDMAEnable (tSMBus *psSMBus, uint8_t ui8TxChannel, uint8_t ui8RxChannel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SMBusDMADisable)
#pragma LOCATION(ROM_SMBusDMADisable, 0x1006b64)
void ROM_SMBusDMADisable (tSMBus *psSMBus) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashIntHandler)
#pragma LOCATION(ROM_SPIFlashIntHandler, 0x1008d1c)
uint32_t ROM_SPIFlashIntHandler (tSPIFlashState *pState) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashInit)
#pragma LOCATION(ROM_SPIFlashInit, 0x1008cb2)
void ROM_SPIFlashInit (uint32_t ui32Base, uint32_t ui32Clock, uint32_t ui32BitRate) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashWriteStatus)
#pragma LOCATION(ROM_SPIFlashWriteStatus, 0x100955c)
void ROM_SPIFlashWriteStatus (uint32_t ui32Base, uint8_t ui8Status) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashPageProgram)
#pragma LOCATION(ROM_SPIFlashPageProgram, 0x100919c)
void ROM_SPIFlashPageProgram (uint32_t ui32Base, uint32_t ui32Addr, const uint8_t *pui8Data, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashPageProgramNonBlocking)
#pragma LOCATION(ROM_SPIFlashPageProgramNonBlocking, 0x10091ee)
void ROM_SPIFlashPageProgramNonBlocking (tSPIFlashState *pState, uint32_t ui32Base, uint32_t ui32Addr, const uint8_t *pui8Data, uint32_t ui32Count, bool bUseDMA, uint32_t ui32TxChannel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashRead)
#pragma LOCATION(ROM_SPIFlashRead, 0x100932e)
void ROM_SPIFlashRead (uint32_t ui32Base, uint32_t ui32Addr, uint8_t *pui8Data, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashReadNonBlocking)
#pragma LOCATION(ROM_SPIFlashReadNonBlocking, 0x1009464)
void ROM_SPIFlashReadNonBlocking (tSPIFlashState *pState, uint32_t ui32Base, uint32_t ui32Addr, uint8_t *pui8Data, uint32_t ui32Count, bool bUseDMA, uint32_t ui32TxChannel, uint32_t ui32RxChannel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashWriteDisable)
#pragma LOCATION(ROM_SPIFlashWriteDisable, 0x1009530)
void ROM_SPIFlashWriteDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashReadStatus)
#pragma LOCATION(ROM_SPIFlashReadStatus, 0x10094bc)
uint8_t ROM_SPIFlashReadStatus (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashWriteEnable)
#pragma LOCATION(ROM_SPIFlashWriteEnable, 0x1009546)
void ROM_SPIFlashWriteEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashFastRead)
#pragma LOCATION(ROM_SPIFlashFastRead, 0x1008b46)
void ROM_SPIFlashFastRead (uint32_t ui32Base, uint32_t ui32Addr, uint8_t *pui8Data, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashFastReadNonBlocking)
#pragma LOCATION(ROM_SPIFlashFastReadNonBlocking, 0x1008bfc)
void ROM_SPIFlashFastReadNonBlocking (tSPIFlashState *pState, uint32_t ui32Base, uint32_t ui32Addr, uint8_t *pui8Data, uint32_t ui32Count, bool bUseDMA, uint32_t ui32TxChannel, uint32_t ui32RxChannel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashSectorErase)
#pragma LOCATION(ROM_SPIFlashSectorErase, 0x10094fc)
void ROM_SPIFlashSectorErase (uint32_t ui32Base, uint32_t ui32Addr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashDualRead)
#pragma LOCATION(ROM_SPIFlashDualRead, 0x1008a38)
void ROM_SPIFlashDualRead (uint32_t ui32Base, uint32_t ui32Addr, uint8_t *pui8Data, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashDualReadNonBlocking)
#pragma LOCATION(ROM_SPIFlashDualReadNonBlocking, 0x1008aee)
void ROM_SPIFlashDualReadNonBlocking (tSPIFlashState *pState, uint32_t ui32Base, uint32_t ui32Addr, uint8_t *pui8Data, uint32_t ui32Count, bool bUseDMA, uint32_t ui32TxChannel, uint32_t ui32RxChannel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashBlockErase32)
#pragma LOCATION(ROM_SPIFlashBlockErase32, 0x100899e)
void ROM_SPIFlashBlockErase32 (uint32_t ui32Base, uint32_t ui32Addr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashQuadRead)
#pragma LOCATION(ROM_SPIFlashQuadRead, 0x1009220)
void ROM_SPIFlashQuadRead (uint32_t ui32Base, uint32_t ui32Addr, uint8_t *pui8Data, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashQuadReadNonBlocking)
#pragma LOCATION(ROM_SPIFlashQuadReadNonBlocking, 0x10092d6)
void ROM_SPIFlashQuadReadNonBlocking (tSPIFlashState *pState, uint32_t ui32Base, uint32_t ui32Addr, uint8_t *pui8Data, uint32_t ui32Count, bool bUseDMA, uint32_t ui32TxChannel, uint32_t ui32RxChannel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashReadID)
#pragma LOCATION(ROM_SPIFlashReadID, 0x10093ee)
void ROM_SPIFlashReadID (uint32_t ui32Base, uint8_t *pui8ManufacturerID, uint16_t *pui16DeviceID) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashChipErase)
#pragma LOCATION(ROM_SPIFlashChipErase, 0x1008a02)
void ROM_SPIFlashChipErase (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SPIFlashBlockErase64)
#pragma LOCATION(ROM_SPIFlashBlockErase64, 0x10089d0)
void ROM_SPIFlashBlockErase64 (uint32_t ui32Base, uint32_t ui32Addr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIDataPut)
#pragma LOCATION(ROM_SSIDataPut, 0x1008986)
void ROM_SSIDataPut (uint32_t ui32Base, uint32_t ui32Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIConfigSetExpClk)
#pragma LOCATION(ROM_SSIConfigSetExpClk, 0x1008c68)
void ROM_SSIConfigSetExpClk (uint32_t ui32Base, uint32_t ui32SSIClk, uint32_t ui32Protocol, uint32_t ui32Mode, uint32_t ui32BitRate, uint32_t ui32DataWidth) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIEnable)
#pragma LOCATION(ROM_SSIEnable, 0x1008c54)
void ROM_SSIEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIDisable)
#pragma LOCATION(ROM_SSIDisable, 0x100959a)
void ROM_SSIDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIIntEnable)
#pragma LOCATION(ROM_SSIIntEnable, 0x10095b2)
void ROM_SSIIntEnable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIIntDisable)
#pragma LOCATION(ROM_SSIIntDisable, 0x10095a8)
void ROM_SSIIntDisable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIIntStatus)
#pragma LOCATION(ROM_SSIIntStatus, 0x10095ba)
uint32_t ROM_SSIIntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIIntClear)
#pragma LOCATION(ROM_SSIIntClear, 0x10095a4)
void ROM_SSIIntClear (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop");}

#pragma RETAIN(ROM_SSIDataPutNonBlocking)
#pragma LOCATION(ROM_SSIDataPutNonBlocking, 0x1008d04)
int32_t ROM_SSIDataPutNonBlocking (uint32_t ui32Base, uint32_t ui32Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIDataGet)
#pragma LOCATION(ROM_SSIDataGet, 0x1008a16)
void ROM_SSIDataGet (uint32_t ui32Base, uint32_t *pui32Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIDataGetNonBlocking)
#pragma LOCATION(ROM_SSIDataGetNonBlocking, 0x1008a24)
int32_t ROM_SSIDataGetNonBlocking (uint32_t ui32Base, uint32_t *pui32Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UpdateSSI)
#pragma LOCATION(ROM_UpdateSSI, 0x1001740)
void ROM_UpdateSSI (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIDMAEnable)
#pragma LOCATION(ROM_SSIDMAEnable, 0x1008d14)
void ROM_SSIDMAEnable (uint32_t ui32Base, uint32_t ui32DMAFlags) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIDMADisable)
#pragma LOCATION(ROM_SSIDMADisable, 0x1008cfa)
void ROM_SSIDMADisable (uint32_t ui32Base, uint32_t ui32DMAFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIBusy)
#pragma LOCATION(ROM_SSIBusy, 0x1009586)
bool ROM_SSIBusy (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIClockSourceGet)
#pragma LOCATION(ROM_SSIClockSourceGet, 0x100958e)
uint32_t ROM_SSIClockSourceGet (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIClockSourceSet)
#pragma LOCATION(ROM_SSIClockSourceSet, 0x1009594)
void ROM_SSIClockSourceSet (uint32_t ui32Base, uint32_t ui32Source) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIAdvModeSet)
#pragma LOCATION(ROM_SSIAdvModeSet, 0x1008992)
void ROM_SSIAdvModeSet (uint32_t ui32Base, uint32_t ui32Mode) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIAdvDataPutFrameEnd)
#pragma LOCATION(ROM_SSIAdvDataPutFrameEnd, 0x1008972)
void ROM_SSIAdvDataPutFrameEnd (uint32_t ui32Base, uint32_t ui32Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIAdvDataPutFrameEndNonBlocking)
#pragma LOCATION(ROM_SSIAdvDataPutFrameEndNonBlocking, 0x1008ce0)
int32_t ROM_SSIAdvDataPutFrameEndNonBlocking (uint32_t ui32Base, uint32_t ui32Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIAdvFrameHoldEnable)
#pragma LOCATION(ROM_SSIAdvFrameHoldEnable, 0x1008c5e)
void ROM_SSIAdvFrameHoldEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SSIAdvFrameHoldDisable)
#pragma LOCATION(ROM_SSIAdvFrameHoldDisable, 0x100957c)
void ROM_SSIAdvFrameHoldDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlSleep)
#pragma LOCATION(ROM_SysCtlSleep, 0x1009cc2)
void ROM_SysCtlSleep (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlSRAMSizeGet)
#pragma LOCATION(ROM_SysCtlSRAMSizeGet, 0x1009ccc)
uint32_t ROM_SysCtlSRAMSizeGet (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlFlashSizeGet)
#pragma LOCATION(ROM_SysCtlFlashSizeGet, 0x1009a0a)
uint32_t ROM_SysCtlFlashSizeGet (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlPeripheralPresent)
#pragma LOCATION(ROM_SysCtlPeripheralPresent, 0x1009be8)
bool ROM_SysCtlPeripheralPresent (uint32_t ui32Peripheral) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlPeripheralReset)
#pragma LOCATION(ROM_SysCtlPeripheralReset, 0x1002f7e)
void ROM_SysCtlPeripheralReset (uint32_t ui32Peripheral) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlPeripheralEnable)
#pragma LOCATION(ROM_SysCtlPeripheralEnable, 0x1009b7c)
void ROM_SysCtlPeripheralEnable (uint32_t ui32Peripheral) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlPeripheralDisable)
#pragma LOCATION(ROM_SysCtlPeripheralDisable, 0x1009b58)
void ROM_SysCtlPeripheralDisable (uint32_t ui32Peripheral) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlPeripheralSleepEnable)
#pragma LOCATION(ROM_SysCtlPeripheralSleepEnable, 0x1009c34)
void ROM_SysCtlPeripheralSleepEnable (uint32_t ui32Peripheral) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlPeripheralSleepDisable)
#pragma LOCATION(ROM_SysCtlPeripheralSleepDisable, 0x1009c10)
void ROM_SysCtlPeripheralSleepDisable (uint32_t ui32Peripheral) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlPeripheralDeepSleepEnable)
#pragma LOCATION(ROM_SysCtlPeripheralDeepSleepEnable, 0x1009b34)
void ROM_SysCtlPeripheralDeepSleepEnable (uint32_t ui32Peripheral) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlPeripheralDeepSleepDisable)
#pragma LOCATION(ROM_SysCtlPeripheralDeepSleepDisable, 0x1009b10)
void ROM_SysCtlPeripheralDeepSleepDisable (uint32_t ui32Peripheral) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlPeripheralClockGating)
#pragma LOCATION(ROM_SysCtlPeripheralClockGating, 0x1009af8)
void ROM_SysCtlPeripheralClockGating (bool bEnable) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlIntEnable)
#pragma LOCATION(ROM_SysCtlIntEnable, 0x1009a52)
void ROM_SysCtlIntEnable (uint32_t ui32Ints) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlIntDisable)
#pragma LOCATION(ROM_SysCtlIntDisable, 0x1009a46)
void ROM_SysCtlIntDisable (uint32_t ui32Ints) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlIntClear)
#pragma LOCATION(ROM_SysCtlIntClear, 0x1009a40)
void ROM_SysCtlIntClear (uint32_t ui32Ints) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlIntStatus)
#pragma LOCATION(ROM_SysCtlIntStatus, 0x1009a5c)
uint32_t ROM_SysCtlIntStatus (bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlReset)
#pragma LOCATION(ROM_SysCtlReset, 0x1009c9c)
void ROM_SysCtlReset (void) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlDeepSleep)
#pragma LOCATION(ROM_SysCtlDeepSleep, 0x100998a)
void ROM_SysCtlDeepSleep (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlResetCauseGet)
#pragma LOCATION(ROM_SysCtlResetCauseGet, 0x1009cbc)
uint32_t ROM_SysCtlResetCauseGet (void) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlResetCauseClear)
#pragma LOCATION(ROM_SysCtlResetCauseClear, 0x1009cb0)
void ROM_SysCtlResetCauseClear (uint32_t ui32Causes) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlDelay)
#pragma LOCATION(ROM_SysCtlDelay, 0x100cdb8)
void ROM_SysCtlDelay (uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlPeripheralReady)
#pragma LOCATION(ROM_SysCtlPeripheralReady, 0x10036b2)
bool ROM_SysCtlPeripheralReady (uint32_t ui32Peripheral) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlPeripheralPowerOn)
#pragma LOCATION(ROM_SysCtlPeripheralPowerOn, 0x1009bc4)
void ROM_SysCtlPeripheralPowerOn (uint32_t ui32Peripheral) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlPeripheralPowerOff)
#pragma LOCATION(ROM_SysCtlPeripheralPowerOff, 0x1009ba0)
void ROM_SysCtlPeripheralPowerOff (uint32_t ui32Peripheral) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlMOSCConfigSet)
#pragma LOCATION(ROM_SysCtlMOSCConfigSet, 0x1009ae0)
void ROM_SysCtlMOSCConfigSet (uint32_t ui32Config) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlPIOSCCalibrate)
#pragma LOCATION(ROM_SysCtlPIOSCCalibrate, 0x1009c58)
uint32_t ROM_SysCtlPIOSCCalibrate (uint32_t ui32Type) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlDeepSleepClockConfigSet)
#pragma LOCATION(ROM_SysCtlDeepSleepClockConfigSet, 0x10099a4)
void ROM_SysCtlDeepSleepClockConfigSet (uint32_t ui32Div, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlResetBehaviorSet)
#pragma LOCATION(ROM_SysCtlResetBehaviorSet, 0x1009caa)
void ROM_SysCtlResetBehaviorSet (uint32_t ui32Behavior) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlResetBehaviorGet)
#pragma LOCATION(ROM_SysCtlResetBehaviorGet, 0x1009ca4)
uint32_t ROM_SysCtlResetBehaviorGet (void) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlFlashSectorSizeGet)
#pragma LOCATION(ROM_SysCtlFlashSectorSizeGet, 0x10099f8)
uint32_t ROM_SysCtlFlashSectorSizeGet (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlVoltageEventConfig)
#pragma LOCATION(ROM_SysCtlVoltageEventConfig, 0x1009ce0)
void ROM_SysCtlVoltageEventConfig (uint32_t ui32Config) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlVoltageEventStatus)
#pragma LOCATION(ROM_SysCtlVoltageEventStatus, 0x1009ce6)
uint32_t ROM_SysCtlVoltageEventStatus (void) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlVoltageEventClear)
#pragma LOCATION(ROM_SysCtlVoltageEventClear, 0x1009cd6)
void ROM_SysCtlVoltageEventClear (uint32_t ui32Status) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlNMIStatus)
#pragma LOCATION(ROM_SysCtlNMIStatus, 0x1009af2)
uint32_t ROM_SysCtlNMIStatus (void) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlNMIClear)
#pragma LOCATION(ROM_SysCtlNMIClear, 0x1009ae6)
void ROM_SysCtlNMIClear (uint32_t ui32Status) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlClockOutConfig)
#pragma LOCATION(ROM_SysCtlClockOutConfig, 0x100997e)
void ROM_SysCtlClockOutConfig (uint32_t ui32Config, uint32_t ui32Div) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysCtlAltClkConfig)
#pragma LOCATION(ROM_SysCtlAltClkConfig, 0x10097a2)
void ROM_SysCtlAltClkConfig (uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysExcIntStatus)
#pragma LOCATION(ROM_SysExcIntStatus, 0x1009d08)
uint32_t ROM_SysExcIntStatus (bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysExcIntClear)
#pragma LOCATION(ROM_SysExcIntClear, 0x1009cec)
void ROM_SysExcIntClear (uint32_t ui32IntFlags) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysExcIntDisable)
#pragma LOCATION(ROM_SysExcIntDisable, 0x1009cf2)
void ROM_SysExcIntDisable (uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysExcIntEnable)
#pragma LOCATION(ROM_SysExcIntEnable, 0x1009cfe)
void ROM_SysExcIntEnable (uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysTickValueGet)
#pragma LOCATION(ROM_SysTickValueGet, 0x1009d60)
uint32_t ROM_SysTickValueGet (void) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysTickEnable)
#pragma LOCATION(ROM_SysTickEnable, 0x1009d22)
void ROM_SysTickEnable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysTickDisable)
#pragma LOCATION(ROM_SysTickDisable, 0x1009d14)
void ROM_SysTickDisable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysTickIntEnable)
#pragma LOCATION(ROM_SysTickIntEnable, 0x1009d3e)
void ROM_SysTickIntEnable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysTickIntDisable)
#pragma LOCATION(ROM_SysTickIntDisable, 0x1009d30)
void ROM_SysTickIntDisable (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysTickPeriodSet)
#pragma LOCATION(ROM_SysTickPeriodSet, 0x1009d56)
void ROM_SysTickPeriodSet (uint32_t ui32Period) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_SysTickPeriodGet)
#pragma LOCATION(ROM_SysTickPeriodGet, 0x1009d4c)
uint32_t ROM_SysTickPeriodGet (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerIntClear)
#pragma LOCATION(ROM_TimerIntClear, 0x1009e72)
void ROM_TimerIntClear (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop");}

#pragma RETAIN(ROM_TimerEnable)
#pragma LOCATION(ROM_TimerEnable, 0x1009e64)
void ROM_TimerEnable (uint32_t ui32Base, uint32_t ui32Timer) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerDisable)
#pragma LOCATION(ROM_TimerDisable, 0x1009e4c)
void ROM_TimerDisable (uint32_t ui32Base, uint32_t ui32Timer) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerConfigure)
#pragma LOCATION(ROM_TimerConfigure, 0x1009d7c)
void ROM_TimerConfigure (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerControlLevel)
#pragma LOCATION(ROM_TimerControlLevel, 0x1009dc2)
void ROM_TimerControlLevel (uint32_t ui32Base, uint32_t ui32Timer, bool bInvert) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerControlEvent)
#pragma LOCATION(ROM_TimerControlEvent, 0x1009db0)
void ROM_TimerControlEvent (uint32_t ui32Base, uint32_t ui32Timer, uint32_t ui32Event) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerControlStall)
#pragma LOCATION(ROM_TimerControlStall, 0x1009dd8)
void ROM_TimerControlStall (uint32_t ui32Base, uint32_t ui32Timer, bool bStall) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerRTCEnable)
#pragma LOCATION(ROM_TimerRTCEnable, 0x1009f42)
void ROM_TimerRTCEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerRTCDisable)
#pragma LOCATION(ROM_TimerRTCDisable, 0x1009f38)
void ROM_TimerRTCDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerPrescaleSet)
#pragma LOCATION(ROM_TimerPrescaleSet, 0x1009f26)
void ROM_TimerPrescaleSet (uint32_t ui32Base, uint32_t ui32Timer, uint32_t ui32Value) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerPrescaleGet)
#pragma LOCATION(ROM_TimerPrescaleGet, 0x1009f00)
uint32_t ROM_TimerPrescaleGet (uint32_t ui32Base, uint32_t ui32Timer) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerPrescaleMatchSet)
#pragma LOCATION(ROM_TimerPrescaleMatchSet, 0x1009f14)
void ROM_TimerPrescaleMatchSet (uint32_t ui32Base, uint32_t ui32Timer, uint32_t ui32Value) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerPrescaleMatchGet)
#pragma LOCATION(ROM_TimerPrescaleMatchGet, 0x1009f0a)
uint32_t ROM_TimerPrescaleMatchGet (uint32_t ui32Base, uint32_t ui32Timer) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerLoadSet)
#pragma LOCATION(ROM_TimerLoadSet, 0x1009e9c)
void ROM_TimerLoadSet (uint32_t ui32Base, uint32_t ui32Timer, uint32_t ui32Value) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerLoadGet)
#pragma LOCATION(ROM_TimerLoadGet, 0x1009e92)
uint32_t ROM_TimerLoadGet (uint32_t ui32Base, uint32_t ui32Timer) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerValueGet)
#pragma LOCATION(ROM_TimerValueGet, 0x1009f50)
uint32_t ROM_TimerValueGet (uint32_t ui32Base, uint32_t ui32Timer) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerMatchSet)
#pragma LOCATION(ROM_TimerMatchSet, 0x1009eb8)
void ROM_TimerMatchSet (uint32_t ui32Base, uint32_t ui32Timer, uint32_t ui32Value) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerMatchGet)
#pragma LOCATION(ROM_TimerMatchGet, 0x1009eae)
uint32_t ROM_TimerMatchGet (uint32_t ui32Base, uint32_t ui32Timer) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerIntEnable)
#pragma LOCATION(ROM_TimerIntEnable, 0x1009e80)
void ROM_TimerIntEnable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerIntDisable)
#pragma LOCATION(ROM_TimerIntDisable, 0x1009e76)
void ROM_TimerIntDisable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerIntStatus)
#pragma LOCATION(ROM_TimerIntStatus, 0x1009e88)
uint32_t ROM_TimerIntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerControlWaitOnTrigger)
#pragma LOCATION(ROM_TimerControlWaitOnTrigger, 0x1009e1c)
void ROM_TimerControlWaitOnTrigger (uint32_t ui32Base, uint32_t ui32Timer, bool bWait) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerClockSourceGet)
#pragma LOCATION(ROM_TimerClockSourceGet, 0x1009d70)
uint32_t ROM_TimerClockSourceGet (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerClockSourceSet)
#pragma LOCATION(ROM_TimerClockSourceSet, 0x1009d76)
void ROM_TimerClockSourceSet (uint32_t ui32Base, uint32_t ui32Source) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_TimerADCEventGet)
#pragma LOCATION(ROM_TimerADCEventGet, 0x1009d68)
uint32_t ROM_TimerADCEventGet (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_TimerADCEventSet)
#pragma LOCATION(ROM_TimerADCEventSet, 0x1009d6c)
void ROM_TimerADCEventSet (uint32_t ui32Base, uint32_t ui32ADCEvent) { asm(" nop");}

#pragma RETAIN(ROM_TimerDMAEventGet)
#pragma LOCATION(ROM_TimerDMAEventGet, 0x1009e5c)
uint32_t ROM_TimerDMAEventGet (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_TimerDMAEventSet)
#pragma LOCATION(ROM_TimerDMAEventSet, 0x1009e60)
void ROM_TimerDMAEventSet (uint32_t ui32Base, uint32_t ui32DMAEvent) { asm(" nop");}

#pragma RETAIN(ROM_TimerSynchronize)
#pragma LOCATION(ROM_TimerSynchronize, 0x1009f4c)
void ROM_TimerSynchronize (uint32_t ui32Base, uint32_t ui32Timers) { asm(" nop");}

#pragma RETAIN(ROM_UARTCharPut)
#pragma LOCATION(ROM_UARTCharPut, 0x1009fdc)
void ROM_UARTCharPut (uint32_t ui32Base, unsigned char ucData) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTParityModeSet)
#pragma LOCATION(ROM_UARTParityModeSet, 0x100a17c)
void ROM_UARTParityModeSet (uint32_t ui32Base, uint32_t ui32Parity) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTParityModeGet)
#pragma LOCATION(ROM_UARTParityModeGet, 0x100a174)
uint32_t ROM_UARTParityModeGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTFIFOLevelSet)
#pragma LOCATION(ROM_UARTFIFOLevelSet, 0x100a10e)
void ROM_UARTFIFOLevelSet (uint32_t ui32Base, uint32_t ui32TxLevel, uint32_t ui32RxLevel) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTFIFOLevelGet)
#pragma LOCATION(ROM_UARTFIFOLevelGet, 0x100a0fe)
void ROM_UARTFIFOLevelGet (uint32_t ui32Base, uint32_t *pui32TxLevel, uint32_t *pui32RxLevel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTConfigSetExpClk)
#pragma LOCATION(ROM_UARTConfigSetExpClk, 0x100a06e)
void ROM_UARTConfigSetExpClk (uint32_t ui32Base, uint32_t ui32UARTClk, uint32_t ui32Baud, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTConfigGetExpClk)
#pragma LOCATION(ROM_UARTConfigGetExpClk, 0x100a00e)
void ROM_UARTConfigGetExpClk (uint32_t ui32Base, uint32_t ui32UARTClk, uint32_t *pui32Baud, uint32_t *pui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTEnable)
#pragma LOCATION(ROM_UARTEnable, 0x100a03c)
void ROM_UARTEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTDisable)
#pragma LOCATION(ROM_UARTDisable, 0x100a050)
void ROM_UARTDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTEnableSIR)
#pragma LOCATION(ROM_UARTEnableSIR, 0x100a0d8)
void ROM_UARTEnableSIR (uint32_t ui32Base, bool bLowPower) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTDisableSIR)
#pragma LOCATION(ROM_UARTDisableSIR, 0x100a0bc)
void ROM_UARTDisableSIR (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTCharsAvail)
#pragma LOCATION(ROM_UARTCharsAvail, 0x1009ff8)
bool ROM_UARTCharsAvail (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTSpaceAvail)
#pragma LOCATION(ROM_UARTSpaceAvail, 0x100a1b6)
bool ROM_UARTSpaceAvail (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTCharGetNonBlocking)
#pragma LOCATION(ROM_UARTCharGetNonBlocking, 0x1009fcc)
int32_t ROM_UARTCharGetNonBlocking (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTCharGet)
#pragma LOCATION(ROM_UARTCharGet, 0x1009fc0)
int32_t ROM_UARTCharGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTCharPutNonBlocking)
#pragma LOCATION(ROM_UARTCharPutNonBlocking, 0x1009fe8)
bool ROM_UARTCharPutNonBlocking (uint32_t ui32Base, unsigned char ucData) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTBreakCtl)
#pragma LOCATION(ROM_UARTBreakCtl, 0x1009fa6)
void ROM_UARTBreakCtl (uint32_t ui32Base, bool bBreakState) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTIntEnable)
#pragma LOCATION(ROM_UARTIntEnable, 0x100a136)
void ROM_UARTIntEnable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTIntDisable)
#pragma LOCATION(ROM_UARTIntDisable, 0x100a12c)
void ROM_UARTIntDisable (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTIntStatus)
#pragma LOCATION(ROM_UARTIntStatus, 0x100a13e)
uint32_t ROM_UARTIntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTIntClear)
#pragma LOCATION(ROM_UARTIntClear, 0x100a128)
void ROM_UARTIntClear (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop");}

#pragma RETAIN(ROM_UpdateUART)
#pragma LOCATION(ROM_UpdateUART, 0x100174c)
void ROM_UpdateUART (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTDMAEnable)
#pragma LOCATION(ROM_UARTDMAEnable, 0x100a0d0)
void ROM_UARTDMAEnable (uint32_t ui32Base, uint32_t ui32DMAFlags) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTDMADisable)
#pragma LOCATION(ROM_UARTDMADisable, 0x100a0c6)
void ROM_UARTDMADisable (uint32_t ui32Base, uint32_t ui32DMAFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTFIFOEnable)
#pragma LOCATION(ROM_UARTFIFOEnable, 0x100a0f4)
void ROM_UARTFIFOEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTFIFODisable)
#pragma LOCATION(ROM_UARTFIFODisable, 0x100a0ea)
void ROM_UARTFIFODisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTBusy)
#pragma LOCATION(ROM_UARTBusy, 0x1009fb8)
bool ROM_UARTBusy (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTTxIntModeSet)
#pragma LOCATION(ROM_UARTTxIntModeSet, 0x100a1c8)
void ROM_UARTTxIntModeSet (uint32_t ui32Base, uint32_t ui32Mode) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTTxIntModeGet)
#pragma LOCATION(ROM_UARTTxIntModeGet, 0x100a1c0)
uint32_t ROM_UARTTxIntModeGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTRxErrorGet)
#pragma LOCATION(ROM_UARTRxErrorGet, 0x100a18e)
uint32_t ROM_UARTRxErrorGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTRxErrorClear)
#pragma LOCATION(ROM_UARTRxErrorClear, 0x100a188)
void ROM_UARTRxErrorClear (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTClockSourceSet)
#pragma LOCATION(ROM_UARTClockSourceSet, 0x100a008)
void ROM_UARTClockSourceSet (uint32_t ui32Base, uint32_t ui32Source) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTClockSourceGet)
#pragma LOCATION(ROM_UARTClockSourceGet, 0x100a002)
uint32_t ROM_UARTClockSourceGet (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UART9BitEnable)
#pragma LOCATION(ROM_UART9BitEnable, 0x1009f98)
void ROM_UART9BitEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UART9BitDisable)
#pragma LOCATION(ROM_UART9BitDisable, 0x1009f8a)
void ROM_UART9BitDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UART9BitAddrSet)
#pragma LOCATION(ROM_UART9BitAddrSet, 0x1009f80)
void ROM_UART9BitAddrSet (uint32_t ui32Base, uint8_t ui8Addr, uint8_t ui8Mask) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UART9BitAddrSend)
#pragma LOCATION(ROM_UART9BitAddrSend, 0x1009f5a)
void ROM_UART9BitAddrSend (uint32_t ui32Base, uint8_t ui8Addr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTSmartCardDisable)
#pragma LOCATION(ROM_UARTSmartCardDisable, 0x100a196)
void ROM_UARTSmartCardDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTSmartCardEnable)
#pragma LOCATION(ROM_UARTSmartCardEnable, 0x100a1a0)
void ROM_UARTSmartCardEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTModemControlClear)
#pragma LOCATION(ROM_UARTModemControlClear, 0x100a148)
void ROM_UARTModemControlClear (uint32_t ui32Base, uint32_t ui32Control) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTModemControlGet)
#pragma LOCATION(ROM_UARTModemControlGet, 0x100a156)
uint32_t ROM_UARTModemControlGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTModemControlSet)
#pragma LOCATION(ROM_UARTModemControlSet, 0x100a15e)
void ROM_UARTModemControlSet (uint32_t ui32Base, uint32_t ui32Control) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTModemStatusGet)
#pragma LOCATION(ROM_UARTModemStatusGet, 0x100a16a)
uint32_t ROM_UARTModemStatusGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTFlowControlGet)
#pragma LOCATION(ROM_UARTFlowControlGet, 0x100a114)
uint32_t ROM_UARTFlowControlGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UARTFlowControlSet)
#pragma LOCATION(ROM_UARTFlowControlSet, 0x100a11c)
void ROM_UARTFlowControlSet (uint32_t ui32Base, uint32_t ui32Mode) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelTransferSet)
#pragma LOCATION(ROM_uDMAChannelTransferSet, 0x1006606)
void ROM_uDMAChannelTransferSet (uint32_t ui32ChannelStructIndex, uint32_t ui32Mode, void *pvSrcAddr, void *pvDstAddr, uint32_t ui32TransferSize) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAEnable)
#pragma LOCATION(ROM_uDMAEnable, 0x100a35e)
void ROM_uDMAEnable (void) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMADisable)
#pragma LOCATION(ROM_uDMADisable, 0x100a356)
void ROM_uDMADisable (void) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAErrorStatusGet)
#pragma LOCATION(ROM_uDMAErrorStatusGet, 0x100a36e)
uint32_t ROM_uDMAErrorStatusGet (void) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAErrorStatusClear)
#pragma LOCATION(ROM_uDMAErrorStatusClear, 0x100a366)
void ROM_uDMAErrorStatusClear (void) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelEnable)
#pragma LOCATION(ROM_uDMAChannelEnable, 0x10065f6)
void ROM_uDMAChannelEnable (uint32_t ui32ChannelNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelDisable)
#pragma LOCATION(ROM_uDMAChannelDisable, 0x1006526)
void ROM_uDMAChannelDisable (uint32_t ui32ChannelNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelIsEnabled)
#pragma LOCATION(ROM_uDMAChannelIsEnabled, 0x100a27a)
bool ROM_uDMAChannelIsEnabled (uint32_t ui32ChannelNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAControlBaseSet)
#pragma LOCATION(ROM_uDMAControlBaseSet, 0x100a350)
void ROM_uDMAControlBaseSet (void *pControlTable) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAControlBaseGet)
#pragma LOCATION(ROM_uDMAControlBaseGet, 0x100a34a)
void * ROM_uDMAControlBaseGet (void) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelRequest)
#pragma LOCATION(ROM_uDMAChannelRequest, 0x100a2b2)
void ROM_uDMAChannelRequest (uint32_t ui32ChannelNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelAttributeEnable)
#pragma LOCATION(ROM_uDMAChannelAttributeEnable, 0x100a1fc)
void ROM_uDMAChannelAttributeEnable (uint32_t ui32ChannelNum, uint32_t ui32Attr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelAttributeDisable)
#pragma LOCATION(ROM_uDMAChannelAttributeDisable, 0x100669a)
void ROM_uDMAChannelAttributeDisable (uint32_t ui32ChannelNum, uint32_t ui32Attr) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelAttributeGet)
#pragma LOCATION(ROM_uDMAChannelAttributeGet, 0x100a23e)
uint32_t ROM_uDMAChannelAttributeGet (uint32_t ui32ChannelNum) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelControlSet)
#pragma LOCATION(ROM_uDMAChannelControlSet, 0x1006682)
void ROM_uDMAChannelControlSet (uint32_t ui32ChannelStructIndex, uint32_t ui32Control) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelSizeGet)
#pragma LOCATION(ROM_uDMAChannelSizeGet, 0x100a328)
uint32_t ROM_uDMAChannelSizeGet (uint32_t ui32ChannelStructIndex) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelModeGet)
#pragma LOCATION(ROM_uDMAChannelModeGet, 0x100a290)
uint32_t ROM_uDMAChannelModeGet (uint32_t ui32ChannelStructIndex) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelSelectSecondary)
#pragma LOCATION(ROM_uDMAChannelSelectSecondary, 0x100a31e)
void ROM_uDMAChannelSelectSecondary (uint32_t ui32SecPeriphs) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelSelectDefault)
#pragma LOCATION(ROM_uDMAChannelSelectDefault, 0x100a312)
void ROM_uDMAChannelSelectDefault (uint32_t ui32DefPeriphs) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAIntStatus)
#pragma LOCATION(ROM_uDMAIntStatus, 0x100a37a)
uint32_t ROM_uDMAIntStatus (void) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAIntClear)
#pragma LOCATION(ROM_uDMAIntClear, 0x100a374)
void ROM_uDMAIntClear (uint32_t ui32ChanMask) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAControlAlternateBaseGet)
#pragma LOCATION(ROM_uDMAControlAlternateBaseGet, 0x100a344)
void * ROM_uDMAControlAlternateBaseGet (void) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelScatterGatherSet)
#pragma LOCATION(ROM_uDMAChannelScatterGatherSet, 0x100a2c2)
void ROM_uDMAChannelScatterGatherSet (uint32_t ui32ChannelNum, uint32_t ui32TaskCount, void *pvTaskList, uint32_t ui32IsPeriphSG) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_uDMAChannelAssign)
#pragma LOCATION(ROM_uDMAChannelAssign, 0x100a1d4)
void ROM_uDMAChannelAssign (uint32_t ui32Mapping) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDevAddrGet)
#pragma LOCATION(ROM_USBDevAddrGet, 0x100a3ce)
uint32_t ROM_USBDevAddrGet (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_USBDevAddrSet)
#pragma LOCATION(ROM_USBDevAddrSet, 0x100a3d2)
void ROM_USBDevAddrSet (uint32_t ui32Base, uint32_t ui32Address) { asm(" nop");}

#pragma RETAIN(ROM_USBDevConnect)
#pragma LOCATION(ROM_USBDevConnect, 0x100a3d6)
void ROM_USBDevConnect (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDevDisconnect)
#pragma LOCATION(ROM_USBDevDisconnect, 0x100a3e0)
void ROM_USBDevDisconnect (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDevEndpointConfigSet)
#pragma LOCATION(ROM_USBDevEndpointConfigSet, 0x100a47a)
void ROM_USBDevEndpointConfigSet (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32MaxPacketSize, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDevEndpointDataAck)
#pragma LOCATION(ROM_USBDevEndpointDataAck, 0x100a502)
void ROM_USBDevEndpointDataAck (uint32_t ui32Base, uint32_t ui32Endpoint, bool bIsLastPacket) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDevEndpointStall)
#pragma LOCATION(ROM_USBDevEndpointStall, 0x100a526)
void ROM_USBDevEndpointStall (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDevEndpointStallClear)
#pragma LOCATION(ROM_USBDevEndpointStallClear, 0x100a55a)
void ROM_USBDevEndpointStallClear (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDevEndpointStatusClear)
#pragma LOCATION(ROM_USBDevEndpointStatusClear, 0x100a5a4)
void ROM_USBDevEndpointStatusClear (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBEndpointDataGet)
#pragma LOCATION(ROM_USBEndpointDataGet, 0x100a72a)
int32_t ROM_USBEndpointDataGet (uint32_t ui32Base, uint32_t ui32Endpoint, uint8_t *pui8Data, uint32_t *pui32Size) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBEndpointDataPut)
#pragma LOCATION(ROM_USBEndpointDataPut, 0x100a77e)
int32_t ROM_USBEndpointDataPut (uint32_t ui32Base, uint32_t ui32Endpoint, uint8_t *pui8Data, uint32_t ui32Size) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBEndpointDataSend)
#pragma LOCATION(ROM_USBEndpointDataSend, 0x100a7b8)
int32_t ROM_USBEndpointDataSend (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32TransType) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBEndpointDataToggleClear)
#pragma LOCATION(ROM_USBEndpointDataToggleClear, 0x100a7e8)
void ROM_USBEndpointDataToggleClear (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBEndpointStatus)
#pragma LOCATION(ROM_USBEndpointStatus, 0x100a8d4)
uint32_t ROM_USBEndpointStatus (uint32_t ui32Base, uint32_t ui32Endpoint) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBFIFOAddrGet)
#pragma LOCATION(ROM_USBFIFOAddrGet, 0x100a8e4)
uint32_t ROM_USBFIFOAddrGet (uint32_t ui32Base, uint32_t ui32Endpoint) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBFIFOConfigGet)
#pragma LOCATION(ROM_USBFIFOConfigGet, 0x100a8ec)
void ROM_USBFIFOConfigGet (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t *pui32FIFOAddress, uint32_t *pui32FIFOSize, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBFIFOConfigSet)
#pragma LOCATION(ROM_USBFIFOConfigSet, 0x100a946)
void ROM_USBFIFOConfigSet (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32FIFOAddress, uint32_t ui32FIFOSize, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBFIFOFlush)
#pragma LOCATION(ROM_USBFIFOFlush, 0x100a99e)
void ROM_USBFIFOFlush (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBFrameNumberGet)
#pragma LOCATION(ROM_USBFrameNumberGet, 0x100a9ee)
uint32_t ROM_USBFrameNumberGet (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_USBHostAddrGet)
#pragma LOCATION(ROM_USBHostAddrGet, 0x100aa04)
uint32_t ROM_USBHostAddrGet (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostAddrSet)
#pragma LOCATION(ROM_USBHostAddrSet, 0x100aa18)
void ROM_USBHostAddrSet (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Addr, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostEndpointConfig)
#pragma LOCATION(ROM_USBHostEndpointConfig, 0x100aa2e)
void ROM_USBHostEndpointConfig (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32MaxPacketSize, uint32_t ui32NAKPollInterval, uint32_t ui32TargetEndpoint, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostEndpointDataAck)
#pragma LOCATION(ROM_USBHostEndpointDataAck, 0x100ab22)
void ROM_USBHostEndpointDataAck (uint32_t ui32Base, uint32_t ui32Endpoint) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostEndpointDataToggle)
#pragma LOCATION(ROM_USBHostEndpointDataToggle, 0x100ab42)
void ROM_USBHostEndpointDataToggle (uint32_t ui32Base, uint32_t ui32Endpoint, bool bDataToggle, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostEndpointStatusClear)
#pragma LOCATION(ROM_USBHostEndpointStatusClear, 0x100ac1e)
void ROM_USBHostEndpointStatusClear (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostHubAddrGet)
#pragma LOCATION(ROM_USBHostHubAddrGet, 0x100ac46)
uint32_t ROM_USBHostHubAddrGet (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostHubAddrSet)
#pragma LOCATION(ROM_USBHostHubAddrSet, 0x100ac5a)
void ROM_USBHostHubAddrSet (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Addr, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostPwrDisable)
#pragma LOCATION(ROM_USBHostPwrDisable, 0x100ad08)
void ROM_USBHostPwrDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostPwrEnable)
#pragma LOCATION(ROM_USBHostPwrEnable, 0x100ad18)
void ROM_USBHostPwrEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostPwrConfig)
#pragma LOCATION(ROM_USBHostPwrConfig, 0x100acec)
void ROM_USBHostPwrConfig (uint32_t ui32Base, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostPwrFaultDisable)
#pragma LOCATION(ROM_USBHostPwrFaultDisable, 0x100ad28)
void ROM_USBHostPwrFaultDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostPwrFaultEnable)
#pragma LOCATION(ROM_USBHostPwrFaultEnable, 0x100ad38)
void ROM_USBHostPwrFaultEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostRequestIN)
#pragma LOCATION(ROM_USBHostRequestIN, 0x100ad48)
void ROM_USBHostRequestIN (uint32_t ui32Base, uint32_t ui32Endpoint) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostRequestStatus)
#pragma LOCATION(ROM_USBHostRequestStatus, 0x100ad70)
void ROM_USBHostRequestStatus (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostReset)
#pragma LOCATION(ROM_USBHostReset, 0x100ad78)
void ROM_USBHostReset (uint32_t ui32Base, bool bStart) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostResume)
#pragma LOCATION(ROM_USBHostResume, 0x100ad8a)
void ROM_USBHostResume (uint32_t ui32Base, bool bStart) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostSpeedGet)
#pragma LOCATION(ROM_USBHostSpeedGet, 0x100ad9c)
uint32_t ROM_USBHostSpeedGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostSuspend)
#pragma LOCATION(ROM_USBHostSuspend, 0x100adc8)
void ROM_USBHostSuspend (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDevEndpointConfigGet)
#pragma LOCATION(ROM_USBDevEndpointConfigGet, 0x100a3ea)
void ROM_USBDevEndpointConfigGet (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t *pui32MaxPacketSize, uint32_t *pui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBEndpointDMAEnable)
#pragma LOCATION(ROM_USBEndpointDMAEnable, 0x100a8a4)
void ROM_USBEndpointDMAEnable (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBEndpointDMADisable)
#pragma LOCATION(ROM_USBEndpointDMADisable, 0x100a880)
void ROM_USBEndpointDMADisable (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBEndpointDataAvail)
#pragma LOCATION(ROM_USBEndpointDataAvail, 0x100a70c)
uint32_t ROM_USBEndpointDataAvail (uint32_t ui32Base, uint32_t ui32Endpoint) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBModeGet)
#pragma LOCATION(ROM_USBModeGet, 0x100aed0)
uint32_t ROM_USBModeGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBEndpointDMAChannel)
#pragma LOCATION(ROM_USBEndpointDMAChannel, 0x100a80c)
void ROM_USBEndpointDMAChannel (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Channel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBIntDisableControl)
#pragma LOCATION(ROM_USBIntDisableControl, 0x100add2)
void ROM_USBIntDisableControl (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBIntEnableControl)
#pragma LOCATION(ROM_USBIntEnableControl, 0x100ae0c)
void ROM_USBIntEnableControl (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBIntStatusControl)
#pragma LOCATION(ROM_USBIntStatusControl, 0x100ae46)
uint32_t ROM_USBIntStatusControl (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBIntDisableEndpoint)
#pragma LOCATION(ROM_USBIntDisableEndpoint, 0x100adf8)
void ROM_USBIntDisableEndpoint (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBIntEnableEndpoint)
#pragma LOCATION(ROM_USBIntEnableEndpoint, 0x100ae32)
void ROM_USBIntEnableEndpoint (uint32_t ui32Base, uint32_t ui32IntFlags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBIntStatusEndpoint)
#pragma LOCATION(ROM_USBIntStatusEndpoint, 0x100ae80)
uint32_t ROM_USBIntStatusEndpoint (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostMode)
#pragma LOCATION(ROM_USBHostMode, 0x100ace4)
void ROM_USBHostMode (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDevMode)
#pragma LOCATION(ROM_USBDevMode, 0x100a640)
void ROM_USBDevMode (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBPHYPowerOff)
#pragma LOCATION(ROM_USBPHYPowerOff, 0x100af18)
void ROM_USBPHYPowerOff (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBPHYPowerOn)
#pragma LOCATION(ROM_USBPHYPowerOn, 0x100af22)
void ROM_USBPHYPowerOn (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_UpdateUSB)
#pragma LOCATION(ROM_UpdateUSB, 0x100171c)
void ROM_UpdateUSB (uint8_t *pui8DescriptorInfo) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBOTGMode)
#pragma LOCATION(ROM_USBOTGMode, 0x100aefa)
void ROM_USBOTGMode (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostRequestINClear)
#pragma LOCATION(ROM_USBHostRequestINClear, 0x100ad5a)
void ROM_USBHostRequestINClear (uint32_t ui32Base, uint32_t ui32Endpoint) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBNumEndpointsGet)
#pragma LOCATION(ROM_USBNumEndpointsGet, 0x100aeda)
uint32_t ROM_USBNumEndpointsGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBClockDisable)
#pragma LOCATION(ROM_USBClockDisable, 0x100a3b2)
void ROM_USBClockDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBClockEnable)
#pragma LOCATION(ROM_USBClockEnable, 0x100a3ba)
void ROM_USBClockEnable (uint32_t ui32Base, uint32_t ui32Div, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBControllerVersion)
#pragma LOCATION(ROM_USBControllerVersion, 0x100a3c4)
uint32_t ROM_USBControllerVersion (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDevLPMConfig)
#pragma LOCATION(ROM_USBDevLPMConfig, 0x100a610)
void ROM_USBDevLPMConfig (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDevLPMDisable)
#pragma LOCATION(ROM_USBDevLPMDisable, 0x100a616)
void ROM_USBDevLPMDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDevLPMEnable)
#pragma LOCATION(ROM_USBDevLPMEnable, 0x100a624)
void ROM_USBDevLPMEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDevLPMRemoteWake)
#pragma LOCATION(ROM_USBDevLPMRemoteWake, 0x100a632)
void ROM_USBDevLPMRemoteWake (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDevSpeedGet)
#pragma LOCATION(ROM_USBDevSpeedGet, 0x100a648)
uint32_t ROM_USBDevSpeedGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDMAChannelAddressGet)
#pragma LOCATION(ROM_USBDMAChannelAddressGet, 0x100a656)
void * ROM_USBDMAChannelAddressGet (uint32_t ui32Base, uint32_t ui32Channel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDMAChannelAddressSet)
#pragma LOCATION(ROM_USBDMAChannelAddressSet, 0x100a660)
void ROM_USBDMAChannelAddressSet (uint32_t ui32Base, uint32_t ui32Channel, void *pvAddress) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDMAChannelConfigSet)
#pragma LOCATION(ROM_USBDMAChannelConfigSet, 0x100a66a)
void ROM_USBDMAChannelConfigSet (uint32_t ui32Base, uint32_t ui32Channel, uint32_t ui32Endpoint, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDMAChannelDisable)
#pragma LOCATION(ROM_USBDMAChannelDisable, 0x100a694)
void ROM_USBDMAChannelDisable (uint32_t ui32Base, uint32_t ui32Channel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDMAChannelEnable)
#pragma LOCATION(ROM_USBDMAChannelEnable, 0x100a6a6)
void ROM_USBDMAChannelEnable (uint32_t ui32Base, uint32_t ui32Channel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDMAChannelIntDisable)
#pragma LOCATION(ROM_USBDMAChannelIntDisable, 0x100a6b8)
void ROM_USBDMAChannelIntDisable (uint32_t ui32Base, uint32_t ui32Channel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDMAChannelIntEnable)
#pragma LOCATION(ROM_USBDMAChannelIntEnable, 0x100a6ca)
void ROM_USBDMAChannelIntEnable (uint32_t ui32Base, uint32_t ui32Channel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDMAChannelCountGet)
#pragma LOCATION(ROM_USBDMAChannelCountGet, 0x100a680)
uint32_t ROM_USBDMAChannelCountGet (uint32_t ui32Base, uint32_t ui32Channel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDMAChannelCountSet)
#pragma LOCATION(ROM_USBDMAChannelCountSet, 0x100a68a)
void ROM_USBDMAChannelCountSet (uint32_t ui32Base, uint32_t ui32Count, uint32_t ui32Channel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDMAChannelIntStatus)
#pragma LOCATION(ROM_USBDMAChannelIntStatus, 0x100a6dc)
uint32_t ROM_USBDMAChannelIntStatus (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDMAChannelStatus)
#pragma LOCATION(ROM_USBDMAChannelStatus, 0x100a6e2)
uint32_t ROM_USBDMAChannelStatus (uint32_t ui32Base, uint32_t ui32Channel) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDMAChannelStatusClear)
#pragma LOCATION(ROM_USBDMAChannelStatusClear, 0x100a6f0)
void ROM_USBDMAChannelStatusClear (uint32_t ui32Base, uint32_t ui32Channel, uint32_t ui32Status) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHighSpeed)
#pragma LOCATION(ROM_USBHighSpeed, 0x100a9f2)
void ROM_USBHighSpeed (uint32_t ui32Base, bool bEnable) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostEndpointPing)
#pragma LOCATION(ROM_USBHostEndpointPing, 0x100abb2)
void ROM_USBHostEndpointPing (uint32_t ui32Base, uint32_t ui32Endpoint, bool bEnable) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostEndpointSpeed)
#pragma LOCATION(ROM_USBHostEndpointSpeed, 0x100abca)
void ROM_USBHostEndpointSpeed (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Flags) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostLPMConfig)
#pragma LOCATION(ROM_USBHostLPMConfig, 0x100ac9e)
void ROM_USBHostLPMConfig (uint32_t ui32Base, uint32_t ui32ResumeTime, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostLPMResume)
#pragma LOCATION(ROM_USBHostLPMResume, 0x100acb2)
void ROM_USBHostLPMResume (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBHostLPMSend)
#pragma LOCATION(ROM_USBHostLPMSend, 0x100acc0)
void ROM_USBHostLPMSend (uint32_t ui32Base, uint32_t ui32Address, uint32_t uiEndpoint) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBLPMIntDisable)
#pragma LOCATION(ROM_USBLPMIntDisable, 0x100ae92)
void ROM_USBLPMIntDisable (uint32_t ui32Base, uint32_t ui32Ints) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBLPMIntEnable)
#pragma LOCATION(ROM_USBLPMIntEnable, 0x100aea0)
void ROM_USBLPMIntEnable (uint32_t ui32Base, uint32_t ui32Ints) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBLPMIntStatus)
#pragma LOCATION(ROM_USBLPMIntStatus, 0x100aeac)
uint32_t ROM_USBLPMIntStatus (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBLPMLinkStateGet)
#pragma LOCATION(ROM_USBLPMLinkStateGet, 0x100aeb2)
uint32_t ROM_USBLPMLinkStateGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBEndpointPacketCountSet)
#pragma LOCATION(ROM_USBEndpointPacketCountSet, 0x100a8c8)
void ROM_USBEndpointPacketCountSet (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBULPIConfig)
#pragma LOCATION(ROM_USBULPIConfig, 0x100af2c)
void ROM_USBULPIConfig (uint32_t ui32Base, uint32_t ui32Config) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBULPIDisable)
#pragma LOCATION(ROM_USBULPIDisable, 0x100af32)
void ROM_USBULPIDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBULPIEnable)
#pragma LOCATION(ROM_USBULPIEnable, 0x100af42)
void ROM_USBULPIEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBULPIRegRead)
#pragma LOCATION(ROM_USBULPIRegRead, 0x100af52)
uint8_t ROM_USBULPIRegRead (uint32_t ui32Base, uint8_t ui8Reg) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBULPIRegWrite)
#pragma LOCATION(ROM_USBULPIRegWrite, 0x100af72)
void ROM_USBULPIRegWrite (uint32_t ui32Base, uint8_t ui8Reg, uint8_t ui8Data) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBOTGSessionRequest)
#pragma LOCATION(ROM_USBOTGSessionRequest, 0x100af02)
void ROM_USBOTGSessionRequest (uint32_t ui32Base, bool bStart) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBDMANumChannels)
#pragma LOCATION(ROM_USBDMANumChannels, 0x100a704)
uint32_t ROM_USBDMANumChannels (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBEndpointDMAConfigSet)
#pragma LOCATION(ROM_USBEndpointDMAConfigSet, 0x100a82a)
void ROM_USBEndpointDMAConfigSet (uint32_t ui32Base, uint32_t ui32Endpoint, uint32_t ui32Config) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBLPMRemoteWakeEnabled)
#pragma LOCATION(ROM_USBLPMRemoteWakeEnabled, 0x100aebc)
bool ROM_USBLPMRemoteWakeEnabled (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_USBModeConfig)
#pragma LOCATION(ROM_USBModeConfig, 0x100aeca)
void ROM_USBModeConfig (uint32_t ui32Base, uint32_t ui32Mode) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_WatchdogIntClear)
#pragma LOCATION(ROM_WatchdogIntClear, 0x100afae)
void ROM_WatchdogIntClear (uint32_t ui32Base) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_WatchdogRunning)
#pragma LOCATION(ROM_WatchdogRunning, 0x100b004)
bool ROM_WatchdogRunning (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_WatchdogEnable)
#pragma LOCATION(ROM_WatchdogEnable, 0x100afa4)
void ROM_WatchdogEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_WatchdogResetEnable)
#pragma LOCATION(ROM_WatchdogResetEnable, 0x100affa)
void ROM_WatchdogResetEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_WatchdogResetDisable)
#pragma LOCATION(ROM_WatchdogResetDisable, 0x100aff0)
void ROM_WatchdogResetDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_WatchdogLock)
#pragma LOCATION(ROM_WatchdogLock, 0x100afd4)
void ROM_WatchdogLock (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_WatchdogUnlock)
#pragma LOCATION(ROM_WatchdogUnlock, 0x100b02c)
void ROM_WatchdogUnlock (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_WatchdogLockState)
#pragma LOCATION(ROM_WatchdogLockState, 0x100afdc)
bool ROM_WatchdogLockState (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_WatchdogReloadSet)
#pragma LOCATION(ROM_WatchdogReloadSet, 0x100afec)
void ROM_WatchdogReloadSet (uint32_t ui32Base, uint32_t ui32LoadVal) { asm(" nop");}

#pragma RETAIN(ROM_WatchdogReloadGet)
#pragma LOCATION(ROM_WatchdogReloadGet, 0x100afe8)
uint32_t ROM_WatchdogReloadGet (uint32_t ui32Base) { asm(" nop");}

#pragma RETAIN(ROM_WatchdogValueGet)
#pragma LOCATION(ROM_WatchdogValueGet, 0x100b034)
uint32_t ROM_WatchdogValueGet (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_WatchdogIntEnable)
#pragma LOCATION(ROM_WatchdogIntEnable, 0x100afb4)
void ROM_WatchdogIntEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_WatchdogIntStatus)
#pragma LOCATION(ROM_WatchdogIntStatus, 0x100afbe)
uint32_t ROM_WatchdogIntStatus (uint32_t ui32Base, bool bMasked) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_WatchdogStallEnable)
#pragma LOCATION(ROM_WatchdogStallEnable, 0x100b01c)
void ROM_WatchdogStallEnable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_WatchdogStallDisable)
#pragma LOCATION(ROM_WatchdogStallDisable, 0x100b00c)
void ROM_WatchdogStallDisable (uint32_t ui32Base) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_WatchdogIntTypeSet)
#pragma LOCATION(ROM_WatchdogIntTypeSet, 0x100afc8)
void ROM_WatchdogIntTypeSet (uint32_t ui32Base, uint32_t ui32Type) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_Crc16Array)
#pragma LOCATION(ROM_Crc16Array, 0x1009696)
uint16_t ROM_Crc16Array (uint32_t ui32WordLen, const uint32_t *pui32Data) { asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_Crc16Array3)
#pragma LOCATION(ROM_Crc16Array3, 0x100969c)
void ROM_Crc16Array3 (uint32_t ui32WordLen, const uint32_t *pui32Data, uint16_t *pui16Crc3) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_Crc16)
#pragma LOCATION(ROM_Crc16, 0x10095c4)
uint16_t ROM_Crc16 (uint16_t ui16Crc, const uint8_t *pui8Data, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_Crc8CCITT)
#pragma LOCATION(ROM_Crc8CCITT, 0x1006872)
uint8_t ROM_Crc8CCITT (uint8_t ui8Crc, const uint8_t *pui8Data, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

#pragma RETAIN(ROM_Crc32)
#pragma LOCATION(ROM_Crc32, 0x1003422)
uint32_t ROM_Crc32 (uint32_t ui32Crc, const uint8_t *pui8Data, uint32_t ui32Count) { asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop"); asm(" nop");}

