

/**
 * main.c
 */

#include <inttypes.h>
#include <stdio.h>

typedef struct
{
    uint8_t stx;
    uint16_t pktlen;
    uint8_t pid;
} rxBuf_nopack;


typedef struct __attribute__((__packed__))
{
    uint8_t stx;
    uint16_t pktlen;
    uint8_t pid;
} rxBuf_packed;

#define STRINGFY(var) #var
#define PRINT_SIZEOF(var) printf ("sizeof(" STRINGFY (var) ")=%u\n", sizeof(var))
#define PRINT_ADDROF(var) printf ("&" STRINGFY (var) "=0x%p\n", &var)


int main(void)
{
    rxBuf_nopack nopack;
    rxBuf_packed packed;

    nopack.stx = 1;
    nopack.pktlen = 2;
    nopack.pid = 3;

    packed.stx = 4;
    packed.pktlen = 5;
    packed.pid = 6;

    PRINT_SIZEOF (nopack);
    PRINT_ADDROF (nopack.stx);
    PRINT_ADDROF (nopack.pktlen);
    PRINT_ADDROF (nopack.pid);

    PRINT_SIZEOF (packed);
    PRINT_ADDROF (packed.stx);
    PRINT_ADDROF (packed.pktlen);
    PRINT_ADDROF (packed.pid);

	return 0;
}
