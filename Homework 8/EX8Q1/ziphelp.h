#pragma once
#include <stdio.h>
typedef enum
{
    CODE_SUCCESSFUL,
    ERROR_ARGC,
    ERROR_EXT,
    ERROR_UNKNOWN
} ErrorCode_t;


/**
 * @brief Function used for telling if a file is a zip file on a windows system
 * @param filePath the filePath name
 * @return boolean value 1 if true and 0 if false
*/
size_t IsZipFile(char *filePath);

/**
 * @brief will give a file name based off of the original file name but without the zip
 * @param filePath name of the file
 * @return the file path name without the suffix .zip
*/
char *CreateUnzippedFileName(char* filePath);

/**
 * @brief given the full path to a file it will unzip the file and place in the directory of the executable
 * @param filePath the full file path/ or relative file path to the executable
 * @return ErrorCode_t of differing types depending on success or failure of extraction
*/
size_t UnzipFile(char* filePath);

