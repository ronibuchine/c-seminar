// EX6Q3.c : This file contains the 'main' function. Program execution begins and ends there.
//
#include "binary.h"


int main(void)
{
    printf("Enter a number to be converted to binary:\n");
    unsigned int input;
    scanf_s("%u", &input);

    PrintBinary(&input, sizeof(input));


    return 0;
}

