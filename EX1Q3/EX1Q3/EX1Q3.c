// EX1Q3.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "strlen.h"

size_t MyStrlen(char* str)
{
    size_t length = 0;
    for (int i = 0; str[i] != '\0'; ++i)
        ++length;
    return length;
}


int main()
{
    char buffer[LENGTH];
    fgets(buffer, LENGTH, stdin);
    int length = MyStrlen(buffer);
    printf("length of entered string (including newline) is %d\n", length);
}

