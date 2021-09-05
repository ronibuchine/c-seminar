// EX7Q1.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "macros.h"


int main()
{
    /* test #1 */
    /* declare the numbers and their pointers for the swap */
    int number1 = 7;
    int number2 = -7;    

    printf("the two numbers are %d and %d\n", number1, number2);
    SWAP(int, number1, number2);
    /* if successful the numbers will appear in opposite order in the console */
    printf("After the swap macro they are %d and %d", number1, number2);

    /* test #2 */
    printf("\n\nNow lets swap a string... this should be fun\n");

    char *string1 = "hello";
    char *string2 = "world";
    printf("The original strings are %s and %s\n", string1, string2);
    SWAP(char *, string1, string2);
    printf("Now the strings are swapped are %s and %s", string1, string2);
}

