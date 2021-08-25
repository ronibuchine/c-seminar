#include "dog.h"
#include <stdio.h>
#include <string.h>

void SortByName(Dog dogs[], size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		for (size_t j = i + 1; j < size; ++j)
		{
			if (strcmp(dogs[i].name, dogs[j].name) == 1)
			{
				Swap(&(dogs[i]), &(dogs[j]));
			}
			PrintArray(dogs, size);
		}
	}
}

void SortByWeight(Dog dogs[], size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		for (size_t j = i + 1; j < size; ++j)
		{
			if (dogs[i].weight > dogs[j].weight)
			{
				Swap(&dogs[i], &dogs[j]);
			}
			PrintArray(dogs, size);
		}
	}
}

void Swap(Dog *dog1, Dog *dog2)
{
	Dog temp = *dog1;
	*dog1 = *dog2;
	*dog2 = temp;
}

void PrintArray(Dog dogs[], size_t size)
{
	printf("[");
	for (size_t i = 0; i < size; ++i)
	{
		printf("%s ", dogs[i].name);
	}
	printf("]\n");
}