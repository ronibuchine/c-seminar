#pragma once

#include<stdio.h>

#define TRUE 1
#define FALSE 0

/**
* @brief checks whether the second parameter is  substring of the first
* @param superstring
* @param sub-string
* @return 1 if it is a substring, 0 if it is not
*/
size_t isSubstring(char* str, char* subStr);