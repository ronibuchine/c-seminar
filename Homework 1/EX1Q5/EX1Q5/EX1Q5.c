// EX1Q5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdbool.h>
#include <stdio.h>
#include "idcheck.h"
#pragma warning(disable:4996)

#define MAX_ID 999999999
#define ID_LENGTH_NO_CHECK_DIGIT 8 


int main()
{
    unsigned int id;
    printf("Please enter an ID number\n");
    scanf(" %u", &id);
    printf(CheckID(id) ? "Valid\n" : "Not Valid\n");
}
