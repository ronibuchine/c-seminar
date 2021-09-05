#include "fibonnacci.h"

size_t GetFibonnacci(size_t number)
{
	if (!number || number == 1)
	{
		return number;
	}
	else
	{
		return GetFibonnacci(number - 1) + GetFibonnacci(number - 2);
	}
}