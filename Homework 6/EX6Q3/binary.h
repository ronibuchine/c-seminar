#pragma once
#include <stdio.h>

/**
 * @brief Function which takes in a value and converts it to binary, any value which isn't an unsigned int must be cast as one
 * @param value a pointer to the value being converted
 * @param the size of the value in bytes
*/
size_t *ConvertBinary(unsigned int *value, size_t size);

/**
 * @brief Prints out a binary number corresponding to a specific value
 * @param value pointer to the value to be printed 
 * @param size the size of the value in bytes
*/
void PrintBinary(unsigned int *value, size_t size);
