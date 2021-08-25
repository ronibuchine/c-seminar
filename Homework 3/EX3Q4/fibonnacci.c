#include "fibonnacci.h"

ull_t GetFibonnacci(size_t number)
{
	if (number <= 93)
	{
		if (!number || number == 1)
		{
			return number;
		}
		else
		{
			ull_t result = IsMemoized(number) ? fibonnacciNumbers[number - 1] : GetFibonnacci(number - 1) + GetFibonnacci(number - 2);
			fibonnacciNumbers[number - 1] = result;
			return result;
		}
	}
	return 0;
}

size_t IsMemoized(ull_t number)
{
	return fibonnacciNumbers[number - 1] != 0;
}