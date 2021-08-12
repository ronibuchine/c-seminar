// EX1Q7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void PrintReversed()
{
    int input;
    scanf(" %d", &input);
    if (input == 0)
    {
        printf("0\n");
        return;
    }
    else
    {
        PrintReversed();
    }
    printf("%d\n", input);
}

int main()
{
    PrintReversed();
}
