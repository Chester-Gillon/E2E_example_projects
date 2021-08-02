/*
 * @file cpp_test.cpp
 * @date 2 Aug 2021
 * @author Chester Gillon
 * @brief C++ test for a RM46L850 built using GCC.
 * @details Contains test of global constructors and stringstream (dynamic memory allocation)
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <sstream>
#include <iomanip>

#include "sci.h"
#include "cpp_test.h"

#define UART scilinREG

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
        sciSendByte(UART, text[index]);      /* send out text   */
    }
}

double division(int var1, int var2)
{
  if (var2 == 0)
  {
    throw "Division by Zero.";
  }
  return (var1 / var2);
}

void cpp_test_internal (void)
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
    int a = 30;
    int b = 0;
    double d = 0;
    try
    {
      //d = division(a, b);
      ss << d << "\n\r";
    }
    catch (const char *error)
    {
      ss << error << "\n\r";
    }
    uart_print (ss.str().c_str());
}


void cpp_test (void)
{
    cpp_test_internal ();
}
