#include "ziphelp.h"
#include <string.h>
#include <malloc.h>

size_t IsZipFile(char* filePath)
{
    size_t filePathLength = strlen(filePath);

    if (!strcmp(filePath + filePathLength - 3, "zip"))
    {
        return 1;
    }
    return 0;
}

char *CreateUnzippedFileName(char* filePath)
{
    if (filePath)
    {
        size_t filePathLength = strlen(filePath);
        char* newFilePath = (char*)malloc(sizeof(char) * (filePathLength - 3));

        strcpy_s(newFilePath, filePathLength - 4, filePath);

        return newFilePath;
    }
    return NULL;
}