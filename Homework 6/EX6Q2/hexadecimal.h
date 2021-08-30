#pragma once
#include <stdio.h>

/**
 * @brief function prints hexadecimal representation of a variable passed * 
 * @param address the pointer to the address to be printed
 * @param addressSize the size of the type of variable
 * 
 * addressSize goes unused here because the function simply calls printf with a %X parameter
*/
void PrintHex(void *address, size_t addressSize);


