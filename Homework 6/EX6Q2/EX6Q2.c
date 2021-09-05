// EX6Q2.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include "hexadecimal.h"

int main(void)
{
    

    void *input = 0x11223344;
    

    printf("Here is the result:\n");
    PrintHex(input, sizeof(input));

    return 0;
}


