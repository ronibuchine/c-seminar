// EX1Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    char input = '\0';
    /* start accepting letters */
    while (1)
    { 
        scanf("%c", &input);
        if (input == 'Q' || input == 'q')
        {
            break;
        }
        printf("%c", input);
    }
    return 0;
}


