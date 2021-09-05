// Exercise 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int input;

    printf("to check 'if' input 1\n");
    printf("to check 'do while' input 2\n");
    printf("to check 'ternary operator' input 3\n");
    printf("to check 'if, else if, else' input 4\n");
    printf("type anything else to exit\n");

    scanf("%d", &input);

    switch (input)
    {
    case 1:
        if (1)
        {
            printf("inside the if statement");
        }
        break;
    case 2:
        do
        {
            printf("inside do-while statement");
        } while (0);
        break;
    case 3:
        1 ? printf("true statement") : printf("false statement");
        break;
    case 4:
        if (1)
        {
            printf("inside 'if'");
        }
        else if (1)
        {
            printf("inside 'else-if'");
        }
        else
        {
            printf("inside 'else'");
        }
        break;
    default:
        return 0;        
    }
    return 0;
}


