// EX3Q6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "transpose.h"



int main()
{
	size_t dimension = 0;

	printf("enter the dimension of your array\n");
	scanf("%d", &dimension);

	/* allocate space for the array of arrays */
	int** matrix = (int**)malloc(sizeof(dimension * sizeof(int*)));

	/* allocate space for the subarrays */
	for (size_t i = 0; i < dimension; ++i)
	{
		matrix[i] = (int*)malloc(dimension * sizeof(int));
	}

	printf("enter %d values for your matrix\n", dimension * dimension);
	LoopNFunc(matrix, dimension, &InputValues);
	
	short symmetryValue = TransposeMatrix(matrix, dimension);

	printf("Here is the transpose of your matrix:\n");
	PrintMatrix(matrix, dimension);

	switch (symmetryValue)
	{
	case 1: printf("Your matrix is symmetrical!\n");
		break;
	case 0:
		printf("Your matrix isn't symmetrical or even skew-symmetrical...\n");
		break;
	case -1:
		printf("Your matrix is skew symmetrical!\n");
		break;
	default: printf("ERROR Transpose value is corrupted!\n");
		break;
	}
	return 0;
}


