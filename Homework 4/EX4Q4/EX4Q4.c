// EX4Q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "envp.h"

int main(size_t argc, char *argv[], char *envp[])
{
    /* prints out all environment variables */
    for (size_t index = 0; envp[index]; index++)
        printf("Environment variable \"%s\" has the value \"%s\"\n",
            VariableName(envp[index]), VariableValue(envp[index]));

    return 0;
}


