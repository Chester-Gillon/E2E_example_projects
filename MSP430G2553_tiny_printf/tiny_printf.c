#include "stdarg.h"

/** The number of bytes which can be buffered waiting to be transferred to the CCS debugger CIO console.
 *  The value of this is a compromise between the amount of RAM .vs. per CIO breakpoint overhead.
 *
 *  An odd value to fill cio_request_buffer to a whole number of 16-bit words */
#define MAX_BYTES_PER_WRITE 33

/* A definition of the CIO request buffer as per http://processors.wiki.ti.com/index.php/CIO_System_Call_Protocol
 * to just support a write to the STDOUT file descriptor. */
#pragma pack(push,1)

#define STDOUT_FILENO 1
#define _DTWRITE 0xF3

typedef struct
{
    int length;
    unsigned char command;
    unsigned char parmbuf[8];
    char data[MAX_BYTES_PER_WRITE];
} cio_request_buffer;

#pragma pack(pop)

/*---------------------------------------------------------------------------*/
/* THESE MACROS PACK AND UNPACK SHORTS AND LONGS INTO CHARACTER ARRAYS       */
/*                                                                           */
/* THIS IS DONE BYTE REVERSED TO MAKE THE PC'S JOB EASIER AND SINCE THE      */
/*     DEVICE COULD BE BIG OR LITTLE ENDIAN                                  */
/*---------------------------------------------------------------------------*/
#define LSB(x) ((x)&0xff)

#define LOADSHORT(x,y,z)  do { x[(z)]   = LSB((y)); \
                   x[(z)+1] = LSB((y) >> 8); } while(0)

/** The CIO buffer placed in its own aligned section as expected by the CCS debugger */
#pragma DATA_SECTION(_CIOBUF_, ".cio")
#pragma DATA_ALIGN(_CIOBUF_, __alignof__(unsigned int))
volatile cio_request_buffer _CIOBUF_;

/** The current number of bytes which are buffered in _CIOBUF_.data[] pending being written to CCS debugger.
 *  Has to use a separate variable in the .bss segment so that is zero initialised, since the .cio section is uninitialised. */
static unsigned int current_ciobuf_length;

/**
 * @brief A function to allow writes of characters to standard out on the CCS CIO console, minimising the memory requirements
 * @details This is a minimum replacement for the stdio library in the compiler run time library which buffers characters
 *          directly in the CIO buffer.
 *
 *          The CIO buffer is flushed when full, or when a carriage return is seen.
 *
 *          Since are only writing to standard out, the response in the CIO buffer is ignored.
 * @param[in] byte The character to output.
 */
static void putc (char byte)
{
    _CIOBUF_.data[current_ciobuf_length] = byte;
    current_ciobuf_length++;

    if ((current_ciobuf_length == MAX_BYTES_PER_WRITE) || (byte == '\n'))
    {
        _CIOBUF_.command = _DTWRITE;
        _CIOBUF_.length = current_ciobuf_length;
        LOADSHORT (_CIOBUF_.parmbuf, STDOUT_FILENO, 0);
        LOADSHORT (_CIOBUF_.parmbuf, _CIOBUF_.length, 2);

        /***********************************************************************/
        /* THE BREAKPOINT THAT SIGNALS THE HOST TO DO DATA TRANSFER            */
        /***********************************************************************/
        __asm("     .global C$$IO$$");
        __asm("C$$IO$$: nop");

        current_ciobuf_length = 0;
    }

}

/**
 * @brief Display a constant string to standard out on the CCS CIO console
 * @param[in] text The null terminated string to display
 */
static void puts (const char *text)
{
    while (*text != '\0')
    {
        putc (*text);
        text++;
    }
}

static const unsigned long dv[] = {
//  4294967296      // 32 bit unsigned max
    1000000000,     // +0
     100000000,     // +1
      10000000,     // +2
       1000000,     // +3
        100000,     // +4
//       65535      // 16 bit unsigned max
         10000,     // +5
          1000,     // +6
           100,     // +7
            10,     // +8
             1,     // +9
};

static void xtoa(unsigned long x, const unsigned long *dp)
{
    char c;
    unsigned long d;
    if(x) {
        while(x < *dp) ++dp;
        do {
            d = *dp++;
            c = '0';
            while(x >= d) ++c, x -= d;
            putc(c);
        } while(!(d & 1));
    } else
        putc('0');
}

static void puth(unsigned n)
{
    static const char hex[16] = {

'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    putc(hex[n & 15]);
}

void printf(char *format, ...)
{
    char c;
    int i;
    long n;

    va_list a;
    va_start(a, format);
    while(c = *format++) {
        if(c == '%') {
            switch(c = *format++) {
                case 's':                       // String
                    puts(va_arg(a, char*));
                    break;
                case 'c':                       // Char
                    putc(va_arg(a, char));
                    break;
                case 'i':                       // 16 bit Integer
                case 'u':                       // 16 bit Unsigned
                    i = va_arg(a, int);
                    if(c == 'i' && i < 0) i = -i, putc('-');
                    xtoa((unsigned)i, dv + 5);
                    break;
                case 'l':                       // 32 bit Long
                case 'n':                       // 32 bit uNsigned loNg
                    n = va_arg(a, long);
                    if(c == 'l' &&  n < 0) n = -n, putc('-');
                    xtoa((unsigned long)n, dv);
                    break;
                case 'x':                       // 16 bit heXadecimal
                    i = va_arg(a, int);
                    puth(i >> 12);
                    puth(i >> 8);
                    puth(i >> 4);
                    puth(i);
                    break;
                case 0: return;
                default: goto bad_fmt;
            }
        } else
bad_fmt:    putc(c);
    }
    va_end(a);
}
