// EX8Q1.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "ziphelp.h"


/**
 * @brief EX8Q1.c : This file contains the 'main' function. Program execution begins and ends there.
 * @param argc argument conter
 * @param argv arguments
 * @return error codes 0-4
*/
int main(int argc, char* argv[])
{
    /* not the correct amount of arguments */
    if (argc != 2)
    {
        printf("To use this program, type:\n./EX8Q1.exe <full-file-path.zip>");
        return ERROR_ARGC;
    }
    /* checks to see if zip file */
    if (!IsZipFile(argv[1])) 
    {
        printf("To use this program, type:\n./EX8Q1.exe <full-file-path.zip>");
        return ERROR_EXT;
    }

    return UnzipFile(argv[1]);
}

