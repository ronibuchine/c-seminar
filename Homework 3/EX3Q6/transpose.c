#include "transpose.h"


short TransposeMatrix(int** matrix, size_t dimension)
{
	int temp;
	short returnValue;
	if (IsSkewSymmetric(matrix, dimension))
	{
		returnValue = -1;
	}
	else
	{
		returnValue = IsSymmetric(matrix, dimension);
	}

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
	return returnValue;

}

short IsSymmetric(int** matrix, size_t dimension)
{
	for (size_t i = 0; i < dimension; ++i)
	{
		for (size_t j = 0; j < dimension; ++j)
		{
			if (matrix[i][j] != matrix[j][i])
			{
				return 0;
			}
		}
	}
	return 1;
}

short IsSkewSymmetric(int** matrix, size_t dimension)
{
	for (size_t i = 0; i < dimension; ++i)
	{
		for (size_t j = i + 1; j < dimension; ++j)
		{			
			if (matrix[i][j] != (-1 * matrix[j][i]))
			{
				return 0;
			}
		}
	}
	return 1;
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
