// EX1Q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string.h>
#include <stdio.h>

#include "diamond.h"

void PrintChar(char c, int n)
{
    for (int i = 0; i < n; ++i)
        printf("%c", c);
}

void PrintLine(int spaces, int stars)
{
    PrintChar(' ', spaces);
    PrintChar('*', stars);
    printf("\n");
}

int PrintDiamond(int width)
{
    int return_val = 0;
    if (width % 2 == 0 || width < 0)
    {
        return_val = -1;
    }
    else
    {
        int smaller_half = width / 2;
        for (int i = 1; i <= width; i += 2)
            PrintLine(smaller_half - (i / 2), i);
        for (int i = width - 2; i > 0; i -= 2)
            PrintLine(smaller_half - (i / 2), i);
    }
    return return_val;
}

int main()
{
    int width;
    printf("enter a number\n");
    scanf("%d", &width);
    if (PrintDiamond(width) == 0)
        printf("printed succesfully\n");
    else
        printf("woopsies, try a postive, odd integer next time\n");
}
