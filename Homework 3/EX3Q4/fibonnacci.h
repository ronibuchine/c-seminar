#pragma once
#include <stdio.h>
#define FIB_ARRAY_LENGTH 100
typedef unsigned long long ull_t;

/**
* @brief This function will return the nth fibonnacci number
*
* @param number The fibonnacci number that you want
*/
ull_t GetFibonnacci(size_t number);

static ull_t fibonnacciNumbers[FIB_ARRAY_LENGTH];

size_t IsMemoized(ull_t number);
