#include "args.h"

#define TRUE 1
#define FALSE 0

#define LOWERCASE_A 97
#define LOWERCASE_Z 122
#define UPPERCASE_A 65
#define UPPERCASE_Z 90

size_t countSwitches(size_t argc, char *argv[])
{
    size_t counter = 0;

    for (size_t index = 0; index < argc; ++index)
    {
        if (argv[index][0] == '-' || (wordSize(argv[index]) > 1 && argv[index][0] == '/' && argv[index][1] == 's'))
            counter++;
    }

    return counter;
}

size_t checkUpperCase(char *str)
{
    while (*str != '\0')
    {
        if (*str >= LOWERCASE_A && *str <= LOWERCASE_Z)
            return FALSE;

        ++str;
    }

    return TRUE;
}

size_t checkLowerCase(char* str)
{
    while (*str != '\0')
    {
        if (*str >= UPPERCASE_A && *str <= UPPERCASE_Z)
            return FALSE;

       ++str;
    }

    return TRUE;
}

size_t countUpperCase(size_t argc, char *argv[])
{
    size_t counter = 0;

    char* cmd;

    for (size_t index = 0; index < argc; ++index)
    {
        cmd = &argv[index][0];

        if (wordSize(argv[index]) > 1 && argv[index][0] == '/' && argv[index][1] == 's')
            cmd += 2;

        /* check for case where cmd is '/s-SOME_COMMAND' */
        else if (*cmd == '-')
            while (*cmd == '-')
                ++cmd;

        if (checkUpperCase(cmd))
            counter++;
    }

    return counter;
}

size_t countLowerCase(size_t argc, char *argv[])
{
    size_t counter = 0;

    char *cmd;

    for (size_t index = 0; index < argc; ++index)
    {
        cmd = &argv[index][0];

        if (wordSize(argv[index]) > 1 && argv[index][0] == '/' && argv[index][1] == 's')
            cmd += 2;

        // check for case where cmd is '/s-SOME_COMMAND'
        else if (*cmd == '-')
            while (*cmd == '-')
                ++cmd;

        if (checkLowerCase(cmd))
            counter++;
    }

    return counter;
}

size_t wordSize(char* str)
{
    size_t count = 0;

    while (*str != ' ' && *str != '\0')
    {
        ++str;
        ++count;
    }

    return count;
}