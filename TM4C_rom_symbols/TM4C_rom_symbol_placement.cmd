
/* Define an arbitrary entry point to avoid trying to link in any run time library start up code */
--entry_point=ROM_ADCSequenceDataGet

/* And supress the warning about a non-default entry point */
--diag_suppress=10063

MEMORY
{
    ROM (RX) : origin = 0x01000000, length = 0x01000000
}

SECTIONS
{
    .text   :   > ROM
}
