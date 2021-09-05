// EX4Q2.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "reverse.h"

int main()
{
    char sentence[100];

    printf("enter a sentence to be reversed:\n");

    fgets(sentence, 100, stdin);
    PrintReversedSentence(sentence);
}


