// EX8Q1.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "ziphelp.h"



int main(int argc, char* argv[])
{
    /* not the correct amount of arguments */
   /*if (argc != 2)
    {
        printf("To use this program, type:\n./EX8Q1.exe <full-file-path.zip>");
        return ERROR_ARGC;
    
    if (!IsZipFile(argv[1]))
    {
        printf("To use this program, type:\n./EX8Q1.exe <full-file-path.zip>");
        return ERROR_EXT;
    }*/

    return UnzipFile(argv[1]);
}

