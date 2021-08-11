// EX1Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
    char input = '\0';
    /* start accepting letters  -- stop on q/Q*/
    while (1)
    {
        scanf_s("%c", &input);
        if (input == 'Q' || input == 'q')
        {
            break;
        }
        /* capitalize and print */
        input += 32;
        printf("%c", input);
    }
    return 0;
}