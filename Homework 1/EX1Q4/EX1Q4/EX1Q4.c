// EX1Q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string.h>
#include <stdio.h>

#include "diamond.h"
#pragma warning(disable:4996)


int main()
{
    int width;
    printf("enter a number\n");
    scanf("%d", &width);
    if (PrintDiamond(width) == 0)
        printf("printed succesfully\n");
    else
        printf("Please use only positive even integers\n");
}
