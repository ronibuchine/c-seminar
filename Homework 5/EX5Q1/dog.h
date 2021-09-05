#pragma once
#include <stdio.h>

typedef struct 
{
	char name[20];
	/* weight in kgs */
	float weight;
} Dog;

/**
* @brief function that sorts an array of dogs by name in lexicographical order
* @param dogs the array of dogs
* @param size size of the array
*/
void SortByName(Dog dogs[], size_t size);

/**
* @brief function that sorts an array of dogs by weight
* @param dogs the array of dogs
* @param size size of the array
*/
void SortByWeight(Dog dogs[], size_t size);

void Swap(Dog *dog1, Dog *dog2);

void PrintArray(Dog dogs[], size_t size);
