#include "ziphelp.h"
#include "miniz.h"
#include <string.h>
#include <malloc.h>

#define BUFFER_SIZE 256

size_t IsZipFile(char* filePath)
{
    size_t filePathLength = strlen(filePath);

    if (!strcmp(filePath + filePathLength - 3, "zip"))
    {
        return ERROR_EXT;
    }
    return CODE_SUCCESSFUL;
}

char *CreateUnzippedFileName(char* filePath)
{
    size_t length = strlen(filePath);
    
    for (size_t index = length - 1; index >=0; --index)
    {
        /* uses '/' as delimiter */
        if (filePath[index] == '/')
        {
            return filePath + index + 1;
        }
        if (index == 0)
        {
            return filePath;
        }
    }
    return filePath;
}

size_t UnzipFile(char *filePath)
{
    /* create and initialize the archive struct */
    mz_zip_archive zipArchive;
    mz_zip_zero_struct(&zipArchive);

    /* unzips the file */
    if (!mz_zip_reader_init_file(&zipArchive, filePath, 0))
    {
        printf("Unable to unzip this file\n");
        return ERROR_UNKNOWN;
    }

    /* iterate over files and extract all those which are not directories */
    mz_uint numFiles = mz_zip_reader_get_num_files(&zipArchive);    
    for (size_t index = 0; index < numFiles; ++index)
    {
        /* non-directory files enter this block */
        if (!mz_zip_reader_is_file_a_directory(&zipArchive, index))
        {
            char fileName[BUFFER_SIZE];
            mz_zip_reader_get_filename(&zipArchive, index, fileName, BUFFER_SIZE);
            char* actualFileName = CreateUnzippedFileName(fileName);
            mz_zip_reader_extract_to_file(&zipArchive, index, actualFileName, 0);
        }
    }
    /* stop reading from zip */
    mz_zip_reader_end(&zipArchive);
    return CODE_SUCCESSFUL;
}
