// EX1Q7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#pragma warning(disable:4996)

/**
* @brief Recursive function which accepts input until the base case, '0' is typed and uses the stack to print in reverse
*/
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