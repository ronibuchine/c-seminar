// EX3Q3.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "fibonnacci.h"
#pragma warning(disable:4996)

int main()
{
    printf("Please input which fibonnacci number you'd like\n");

    size_t number;
    scanf("%d", &number);

    printf("The nth fibonnacci number when n=%d is %d", number, GetFibonnacci(number));
}


