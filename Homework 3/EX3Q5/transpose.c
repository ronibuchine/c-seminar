#include "transpose.h"
#pragma warning(disable:4996)


void TransposeMatrix(int** matrix, size_t dimension)
{
	int temp;

	/* iterate through the matrix */
	for (size_t i = 0; i < dimension; ++i)
	{
		for (size_t j = i + 1; j < dimension; ++j)
		{

			/* swap values across main diagonal */
			temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
}
void LoopNFunc(int** matrix, size_t dimension, void (*func)(int**, size_t, size_t))
{
	for (size_t i = 0; i < dimension; ++i)
	{
		for (size_t j = 0; j < dimension; ++j)
		{
			func(matrix, i, j);
		}
	}
}

void InputValues(int** matrix, size_t row, size_t column)
{
	int input;
	scanf("%d", &input);
	matrix[row][column] = input;
}

void PrintMatrix(int** matrix, size_t dimension)
{
	/* iteraate through matrix */
	for (size_t i = 0; i < dimension; ++i)
	{
		for (size_t j = 0; j < dimension; ++j)
		{
			printf("%d ", matrix[i][j]);
		}
		/* print new line between each row */
		printf("\n");
	}
}



