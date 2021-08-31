#include "envp.h"
#include <malloc.h>

char *VariableName(char* str)
{
    size_t varNameSize = StringLengthDelimited(str, ENV_DELIM);    
    /* allow room for null bit */
    varNameSize++;
    /* allocate space for the result name */
    char* varName = (char *)malloc(sizeof(char) * varNameSize);

    char *inputIter = str;
    char* resultIter = varName;

    while (*inputIter != ENV_DELIM)
    {
        *resultIter = *inputIter;

        ++inputIter;
        ++resultIter;
    }

    *resultIter = '\0';

    return varName;
}

size_t StringLengthDelimited(char* str, char delim)
{
    size_t stringLength = 0;
    if (str)
    {
        while (*str != delim)
        {
            ++stringLength;
            ++str;
        }        
    }
    return stringLength;
}

char *VariableValue(char* str)
{
    char* inputIter = str;
    /* iterate past the '=' */
    while (*inputIter != ENV_DELIM)
    {
        ++inputIter;
    }

    ++inputIter;

    return inputIter;
}
