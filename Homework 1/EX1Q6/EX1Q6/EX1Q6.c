// EX1Q6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#pragma warning(disable:4996)

#include "idfix.h"


int main()
{
    unsigned int id;
    printf("Please enter 8 digits of an ID number\n");
    scanf(" %u", &id);
    printf("The check digit is: %u\n", GetCheckDigit(id));
}
