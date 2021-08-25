// EX3Q4.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "fibonnacci.h"


int main()
{
    printf("Please enter an N thats lower than 94:\n");

    size_t inputValue;
    scanf_s("%d", &inputValue, sizeof(size_t));

    printf("The N'th fibonnacci number is %I64d", GetFibonnacci(inputValue));


}


