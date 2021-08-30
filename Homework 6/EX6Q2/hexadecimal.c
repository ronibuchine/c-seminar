#include "hexadecimal.h"

void PrintHex(unsigned int *address, size_t addressSize)
{
    unsigned char *addressIter = (unsigned char *)address;
    for (int index = 0; index < addressSize; ++index)
    {
        printf("0x%02x \n", *addressIter);
        ++addressIter;
    }
}
