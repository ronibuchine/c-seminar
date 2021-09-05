#include "transpose.h"

#pragma warning(disable:4996)

int main(void)
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


	TransposeMatrix(matrix, dimension);

	printf("Here is the transpose of your matrix:\n");
	PrintMatrix(matrix, dimension);
}