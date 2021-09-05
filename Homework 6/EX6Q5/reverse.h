#pragma once
#include <stdio.h>

/**
 * @brief accepts numbers until a character is typed if it fails it returns a 0 and a 1 if succeeds
 * @param numbers the dynamic array of numbers
 * @return a 1 if it read a number and a 0 if it read a character
*/
unsigned int AcceptNumbersInitial(int* numbers);

/**
 * @brief accepts numbers for an array with any size
 * @param numbers the array opf integers
 * @param currentSize the size of the array currently
 * @return 1 if the next value was a number and 0 if it was a character
*/
unsigned int AcceptNumbers(int* numbers, size_t currentSize);

/**
* @brief prints an array of number in reverse
*/
void PrintInReverse(int* numbers, size_t arraySize);

/**
* @brief will perform a hard copy between 2 arrays
* @param numbers the arry to copy from
* @param copyOfNumbers the array to copy to
* @param size the size of the array numbers
*/
void CopyArray(int* numbers, int* copyOfNumbers, size_t size);