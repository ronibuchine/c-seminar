// EX5Q1.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include "dog.h"
#define ARRAY_SIZE 4

int main()
{
    Dog dog1 = { "bobby", 32.8 };
    Dog dog2 = { "queenie", 22.1 };
    Dog dog3 = { "chacho", 20.7 };
    Dog dog4 = { "nini", 7.3 };
    Dog dogs[] = { dog1, dog2, dog3, dog4 };

    SortByName(&dogs, ARRAY_SIZE);
    printf("\n");
    SortByWeight(&dogs, ARRAY_SIZE);
}


