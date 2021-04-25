/*
 * @file cpp_test.cpp
 * @date 17 Oct 2020
 * @author Chester Gillon
 * @brief C++ test for a TMS570LC4357 built using GCC.
 * @details Contains test of global constructors and stringstream (dynamic memory allocation)
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <sstream>
#include <iomanip>

#include "HL_sci.h"
#include "cpp_test.h"


class test_class
{
public:
    test_class();
    unsigned int get_initialised (void) const;

private:
    unsigned int initialised;
};

test_class::test_class()
{
    initialised = 0xfeedabba;
}

unsigned int test_class::get_initialised() const
{
    return initialised;
}

test_class global_instance;


static void uart_print (const char *const text)
{
    const size_t text_len = strlen (text);

    for (size_t index = 0; index < text_len; index++)
    {
        sciSendByte(sciREG1, text[index]);      /* send out text   */
    }
}


void cpp_test (void)
{
    test_class stack_instance;
    std::stringstream ss;
    volatile float float_in = 123.45f;
    volatile double double_in = 123.456789;

    ss << "\n\rC++ test\n\r";
    ss << "global_instance.initialised=0x" << std::hex << global_instance.get_initialised() << "\n\r";
    ss << "stack_instance.initialised=0x" << std::hex << stack_instance.get_initialised() << "\n\r";
    ss << "sqrtf(" << float_in << ")=" << sqrtf (float_in) << "\n\r";
    ss << std::setprecision(16) << "sqrt(" << double_in << ")=" << sqrt (double_in) << "\n\r";
    uart_print (ss.str().c_str());
}
