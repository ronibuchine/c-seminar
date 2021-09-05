// EX4Q5.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "envp.h"

int main(size_t argc, char* argv[], char* envp[])
{
    if (argc > 2 || argc < 2)
        printf("ERROR\nNot the correct ammount of program arguments!\n");

    /* print all environment variables */
    for (size_t index = 0; envp[index]; index++)
    {
        if (isSubstring(envp[index], argv[1]))
            printf("[%d]: %s\n", index, envp[index]);
    }

    printf("Done!");

    return 0;
}

