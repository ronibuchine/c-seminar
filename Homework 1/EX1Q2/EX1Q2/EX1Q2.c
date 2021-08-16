// EX1Q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "capitalize.h"
#pragma warning(disable:4996)



int main()
{
    char input = '\0';
    printf("Start typing lowercase letters followed by enter\n");
    printf("To stop the program, type 'q' or 'Q'\n");

    /* start accepting letters -- stop on q/Q */
    while (1)
    {
        scanf(" %c", &input);
        if (input == 'Q' || input == 'q')
        {
            break;
        }
        /* capitalize and print */
        capitalize(&input);
        printf("%c\n", input);
        
    }
    return 0;
}