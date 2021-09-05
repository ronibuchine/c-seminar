#pragma once
#pragma warning(disable:4996)
#include <stdio.h>

/**
 * @brief A function that loops through a nxn matrix and transposes it
 *
 * @param matrix a 2d array which represents the matrix
 * @param dimension which is the dimension of the matrix, since its nxn there is no need for a separate row and column dimension
 * @return -1 if skew-symmetric, 1 if symmetric and 0 if niether
 */
short TransposeMatrix(int** matrix, size_t dimension);

/**
* @brief checks the elements of the matrix to see if it is equal to its transpose
* @param matrix the matrix which is being checked
* @param dimension the size of the nxn matrix
* 
* @return 1 if symmetric
* and 0 if not symmetric
* 
*/
short IsSymmetric(int** matrix, size_t dimension);

/**
* @brief checks the elements of the matrix to see if they're skew-symmetric
* 
* @param matrix the matrix in question
* @param dimension size of the matrix
* @return 1 if it is skew-symmetric
* and 0 if it isn't skew-symmetric
*/
short IsSkewSymmetric(int** matrix, size_t dimension);

/**
*@brief A Function that acts as a for each loopand performs a function
*
* @param matrix the 2d array which we loop through
* @param dimension the size of the matrix
* @param func the function pointer passed which in turn takes the matrix, rowand column dimension
*/
void LoopNFunc(int** matrix, size_t dimension, void (*func)(int**, size_t, size_t));

/**
* @brief a function that can be passed to LoopNFunc as a function pointer and inputs values to the matrix
*
* @param matrix the 2d array which is getting the values
* @param row the number of rows
* @param column the number of colummns
*/
void InputValues(int** matrix, size_t row, size_t column);

/**
* @brief method which prints the matrix as a square
*
* @param matrix our matrix in question (a 2d array)
* @param dimension the size of the matrix
*/
void PrintMatrix(int** matrix, size_t dimension);
