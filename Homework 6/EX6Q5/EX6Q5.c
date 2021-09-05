// EX6Q5.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include "reverse.h"
#include <malloc.h>

int main()
{
    printf("Please start inputting numbers, to stop type a character:\n");
    int *numbers = NULL;
    size_t arraySize = 1;
    

    if (AcceptNumbersInitial(numbers))
    {
        while (AcceptNumbers(numbers, arraySize++)); 
        PrintInReverse(numbers, arraySize);
    }
    else
    {
        printf("You didn't type any numbers\nexiting...");
    }    

    return 0;

}


