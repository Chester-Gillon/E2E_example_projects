/*
 * @file read_rom_symbols.c
 * @date 2 Apr 2018
 * @author Chester Gillon
 * @brief Program to help generate a ROM symbols object file for TM4C129 devices
 * @details The sequence is:
 *          1) The include_rom.c source file, part of this project, includes <driverlib/rom.h> from TivaWare
 *          2) include_rom.c is compiled with the following custom options:
 *                --preproc_with_compile --preproc_macros="$(basename $@).pp"
 *             This generates an include_rom.pp containing the pre-processed macros from the rom.h file.
 *          3) This program is run on the actual TM4C129 with the ROM for which the symbols are required.
 *             It reads the ROM API table and ROM function macros from the include_rom.pp to extract the
 *             function names and prototypes from the rom.h file and extracts the actual ROM function
 *             addresses from the actual TM4C129 device ROM.
 *
 *             A C source file TM4C_rom_symbols.c is created for a different project TM4C_rom_symbols
 *             which lists all the ROM functions with:
 *             a) The function prototype extracted from the rom.h file.
 *             b) The function address set to that from the actual TM4C129 ROM lookup tables.
 *             c) The function marked as to be retained, since not referenced.
 *             d) The body of the function filled with NOPs such that the text size of the function
 *                extends to the start of the next adjacent ROM function, or the end address of the ROM.
 *                This is so that when the symbol file is added to a CCS debug session when the PC is sampled
 *                as within the ROM the stack backtrace reports which ROM function the PC appears to be in.
 *                A limitation is that can't detect any static functions internal to the ROM.
 *          4) The TM4C_rom_symbols project with the auto-generated TM4C_rom_symbols.c is compiled which
 *             results in a .out file which can used to add symbols for the ROM functions to a debug session.
 *             The TM4C_rom_symbols project is compiled using the following options so that the compiler just
 *             inserts a "bx lr" return instruction (in addition to the explicit NOPs in the TM4C_rom_symbols.c)
 *                 -O0 --opt_for_speed=0
 */

#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <string>
#include <map>
#include <set>

#include <driverlib/rom.h>
#include <inc/hw_types.h>
#include <inc/hw_nvic.h>

#define ROM_MACROS_FILENAME "include_rom.pp"

#define ROM_SYMBOLS_PATHNAME "../../TM4C_rom_symbols/TM4C_rom_symbols.c"

/** The base address of the ROM in all TM4C devices, and the maximum ROM size expected */
#define ROM_BASE_ADDRESS 0x01000000
#define ROM_SIZE_BYTES (16 * 1024 * 1024)
#define ROM_END_ADDRESS (ROM_BASE_ADDRESS + ROM_SIZE_BYTES - 1)

typedef std::map<std::string,unsigned int> rom_api_table_map_t;

typedef std::set<uint32_t> rom_address_set_t;

typedef enum
{
    BUILD_ADDRESS_TO_FUNCTION_MAP,
    WRITE_ROM_SYMBOLS
} rom_include_parse_stage;

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
static bool read_probe (volatile const char *read_address)
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
 * @brief Read the next #define from a preproc_macros file
 * @param[in,out] include_file The preproc_macros file to read the next #define from
 * @param[out] define_name The name of the #define
 * @param[out] define_value The text of the #define value
 * @param[out] define_file Which file the #define was defined in, extracted from the comment added in the preproc_macros file
 * @return Returns true if a #define has been read, or false at the end of file
 */
static bool get_next_define (FILE *const include_file, std::string &define_name,
                             std::string &define_value, std::string &define_file)
{
    std::string line_text;
    bool got_define;
    int next_char;
    size_t name_start_pos;
    size_t name_len;
    size_t value_start_pos;
    size_t value_len;
    size_t filename_comment_start_pos;
    size_t filename_comment_end_pos;

    define_value.clear ();
    define_file.clear ();
    do
    {
        line_text.clear();
        next_char = fgetc (include_file);
        while ((next_char != EOF) && (next_char != '\n'))
        {
            if (next_char != '\r')
            {
                line_text += next_char;
            }
            next_char = fgetc (include_file);
        }

        got_define = line_text.find("#define") == 0;
        if (got_define)
        {
            name_start_pos = line_text.find(' ');
            filename_comment_start_pos = line_text.find("\t/* ");
            filename_comment_end_pos = line_text.find(" */");
            name_len = 0;
            value_start_pos = std::string::npos;
            value_len = 0;
            if (name_start_pos != std::string::npos)
            {
                name_start_pos++;
                value_start_pos = line_text.find(' ', name_start_pos);
                if (value_start_pos != std::string::npos)
                {
                    name_len = value_start_pos - name_start_pos;
                    value_start_pos++;
                    if (filename_comment_start_pos != std::string::npos)
                    {
                        value_len = filename_comment_start_pos - value_start_pos;
                    }
                    else
                    {
                        value_len = line_text.size() - value_start_pos;
                    }
                }
            }

            if (name_start_pos != std::string::npos)
            {
                define_name = line_text.substr(name_start_pos, name_len);
            }

            if (value_start_pos != std::string::npos)
            {
                define_value = line_text.substr(value_start_pos, value_len);
            }

            if ((filename_comment_start_pos != std::string::npos) && (filename_comment_end_pos != std::string::npos))
            {
                filename_comment_start_pos += 4;
                define_file = line_text.substr(filename_comment_start_pos, filename_comment_end_pos - filename_comment_start_pos);
            }
        }
    } while (!got_define && (next_char != EOF));

    return got_define;
}

/**
 * @brief Perform one parse of the preproc_macros file for rom.h
 * @param[in] stage Selects which parsing stage is being called for:
 *                  BUILD_ADDRESS_TO_FUNCTION_MAP : rom_api_table_map and rom_addresses_set are populated.
 *                  WRITE_ROM_SYMBOLS : The rom symbols are written to rom_symbols.
 * @param[in] rom_include The preproc_macros file for rom.h to read
 * @param[in] rom_symbols The C source file created to generate symbolic debugging information to overlap functions
 *                        which match the start address and size of those in the actual ROM.
 *                        pragmas are written to set the start address to match the ROM function.
 *                        The function bodies are filled with NOPs just to make the end of the function
 *                        adjacent to the next function in memory, so that the when the ROM symbols are loaded
 *                        the CCS debugger reports which ROM function a program counter is in.
 * @param[in,out] rom_api_table_map Key is the name of an API table. Value is the index into ROM_APITABLE[]
 * @oaram[in,out] rom_addresses_set The sorted set of all ROM function addresses, to find the address of the next function.
 */
static void parse_rom_macros_file (const rom_include_parse_stage stage,
                                   FILE *const rom_include, FILE *const rom_symbols,
                                   rom_api_table_map_t &rom_api_table_map,
                                   rom_address_set_t &rom_addresses_set)
{
    std::string define_name;
    std::string define_value;
    std::string define_file;
    bool first_symbol = true;
    uint32_t num_nops;
    uint32_t nop_index;

    while (get_next_define (rom_include, define_name, define_value, define_file))
    {
        if (define_file.rfind("/rom.h") != std::string::npos)
        {
            const size_t rom_api_table_pos = define_value.find("ROM_APITABLE");
            unsigned int api_table_index;

            if (rom_api_table_pos != std::string::npos)
            {
                if (sscanf (&(define_value.c_str()[rom_api_table_pos]), "ROM_APITABLE[%u]", &api_table_index) == 1)
                {
                    /* Save a name which defines the ROM_APITABLE index for a group of functions */
                    if (stage == BUILD_ADDRESS_TO_FUNCTION_MAP)
                    {
                        rom_api_table_map[define_name] = api_table_index;
                    }
                }
            }
            else
            {
                rom_api_table_map_t::const_iterator api_table_it;
                rom_address_set_t::const_iterator func_addr_it;
                bool found_rom_api_table_ref;

                found_rom_api_table_ref = false;
                for (api_table_it = rom_api_table_map.begin(); !found_rom_api_table_ref && (api_table_it != rom_api_table_map.end()); ++api_table_it)
                {
                    const size_t table_api_reference_pos = define_value.find(api_table_it->first);

                    if (table_api_reference_pos != std::string::npos)
                    {
                        const size_t table_index_start_pos = table_api_reference_pos + api_table_it->first.size();

                        if (sscanf (&(define_value.c_str()[table_index_start_pos]), "[%u]", &api_table_index) == 1)
                        {
                            const uint32_t api_table_base_address = ROM_APITABLE[api_table_it->second];

                            if ((api_table_base_address >= ROM_BASE_ADDRESS) &&
                                (api_table_base_address <= ROM_END_ADDRESS))
                            {
                                const uint32_t *const api_table = (const uint32_t *) api_table_base_address;
                                const uint32_t function_address = api_table[api_table_index];
                                const uint32_t function_address_with_thumb_bit_cleared = function_address & ~1;
                                const uint32_t function_pointer_start_pos = define_value.find("(*)");
                                uint32_t return_type_start_pos;

                                if ((function_address >= ROM_BASE_ADDRESS) &&
                                    (function_address <= ROM_END_ADDRESS) &&
                                    (function_pointer_start_pos != std::string::npos))
                                {
                                    const uint32_t parameters_start_pos = function_pointer_start_pos + 3;
                                    const uint32_t parameters_end_pos = define_value.find(")", parameters_start_pos);
                                    const uint32_t nop_size_bytes = 2;
                                    const uint32_t return_size_bytes = 2;

                                    if (parameters_end_pos != std::string::npos)
                                    {
                                        switch (stage)
                                        {
                                        case BUILD_ADDRESS_TO_FUNCTION_MAP:
                                            rom_addresses_set.insert (function_address_with_thumb_bit_cleared);
                                            break;

                                        case WRITE_ROM_SYMBOLS:
                                            if (first_symbol)
                                            {
                                                /* Create header of C source file with the ROM symbols before writing the first ROM symbol */
                                                fprintf (rom_symbols, "/* This file was automatically created by %s\n", __FILE__);
                                                fprintf (rom_symbols, "   Using ROM symbols in %s and the ROM_VERSION 0x%x */\n\n",
                                                         define_file.c_str(), ROM_VERSION);
                                                fprintf (rom_symbols, "#include <stdbool.h>\n");
                                                fprintf (rom_symbols, "#include <stdint.h>\n");
                                                fprintf (rom_symbols, "#include <time.h>\n");
                                                fprintf (rom_symbols, "#include <driverlib/can.h>\n");
                                                fprintf (rom_symbols, "#include <driverlib/emac.h>\n");
                                                fprintf (rom_symbols, "#include <driverlib/flash.h>\n");
                                                fprintf (rom_symbols, "#include <driverlib/lcd.h>\n");
                                                fprintf (rom_symbols, "#include <utils/spi_flash.h>\n");
                                                fprintf (rom_symbols, "#include <utils/smbus.h>\n");
                                                fprintf (rom_symbols, "\n");
                                                fprintf (rom_symbols, "/* Suppress warning about missing return statement since the functions won't be executed */\n");
                                                fprintf (rom_symbols, "#pragma diag_suppress=994\n\n");
                                                first_symbol = false;
                                            }

                                            fprintf (rom_symbols, "#pragma RETAIN(%s)\n", define_name.c_str());
                                            fprintf (rom_symbols, "#pragma LOCATION(%s, 0x%x)\n",
                                                     define_name.c_str(), function_address_with_thumb_bit_cleared);
                                            return_type_start_pos = 0;
                                            while (define_value.c_str()[return_type_start_pos] == '(')
                                            {
                                                return_type_start_pos++;
                                            }
                                            fprintf (rom_symbols, "%s%s %s {",
                                                     define_value.substr(return_type_start_pos, function_pointer_start_pos - return_type_start_pos).c_str(),
                                                     define_name.c_str(),
                                                     define_value.substr(parameters_start_pos, parameters_end_pos - parameters_start_pos + 1).c_str());
                                            func_addr_it = rom_addresses_set.upper_bound (function_address_with_thumb_bit_cleared);
                                            if (func_addr_it != rom_addresses_set.end())
                                            {
                                                /* Calculate the number of NOPs to pad the function until the next highest function address */
                                                num_nops = ((*func_addr_it - function_address_with_thumb_bit_cleared) -
                                                        return_size_bytes) / nop_size_bytes;
                                            }
                                            else
                                            {
                                                /* Calculate the number of NOPs to pad the function until the end of addressable ROM space */
                                                uint32_t probed_address = function_address_with_thumb_bit_cleared + return_size_bytes;
                                                num_nops = 0;
                                                while (read_probe ((volatile const char *) probed_address))
                                                {
                                                    probed_address += nop_size_bytes;
                                                    num_nops++;
                                                }
                                            }
                                            for (nop_index = 0; nop_index < num_nops; nop_index++)
                                            {
                                                fprintf (rom_symbols, " asm(\" nop\");");
                                            }
                                            fprintf (rom_symbols, "}\n\n");
                                            break;
                                        }
                                    }
                                }
                            }
                            found_rom_api_table_ref = true;
                        }
                    }
                }
            }
        }
    }
}

int main (void)
{
    FILE *rom_include;
    FILE *rom_symbols;
    rom_api_table_map_t rom_api_table_map;
    rom_address_set_t rom_addresses_set;

    rom_include = fopen (ROM_MACROS_FILENAME, "r");
    if (rom_include == NULL)
    {
        fprintf (stderr, "Failed to open %s\n", ROM_MACROS_FILENAME);
        exit (EXIT_FAILURE);
    }

    rom_symbols = fopen (ROM_SYMBOLS_PATHNAME, "w");
    if (rom_symbols == NULL)
    {
        fprintf (stderr, "Failed to create %s\n", ROM_SYMBOLS_PATHNAME);
        fclose (rom_include);
        exit (EXIT_FAILURE);
    }

    /* 1st parse to build the address to ROM function name map */
    parse_rom_macros_file (BUILD_ADDRESS_TO_FUNCTION_MAP, rom_include, rom_symbols, rom_api_table_map, rom_addresses_set);

    if (!rom_api_table_map.empty())
    {
        /* 2nd parse to write the ROM symbols, when the function addresses are known to pad to the estimated function sizes with NOPs */
        rewind (rom_include);
        parse_rom_macros_file (WRITE_ROM_SYMBOLS, rom_include, rom_symbols, rom_api_table_map, rom_addresses_set);
    }

    fclose (rom_symbols);
    fclose (rom_include);

    printf ("Found %u ROM symbols\n", rom_addresses_set.size());
    return 0;
}

