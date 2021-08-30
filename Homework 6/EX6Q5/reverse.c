#include "reverse.h"
#include <malloc.h>
#define ARRAY_HEAD 0
#define INIT_ARRAY_SIZE 0

unsigned int AcceptNumbers(int *numbers, size_t currentSize)
{
    int input;
    if (scanf_s("%d", &input))
    {
        /* allocate a larger array by 1 */
        int* newNumbers = (int*)malloc((currentSize + 1) * sizeof(int));
        /* hard copy over array and reassign pointers */
        CopyArray(numbers, newNumbers, currentSize);
        int* temp = numbers;
        numbers = newNumbers;
        if (currentSize)
        {
            free(temp);
        }
        numbers[currentSize] = input;
        return 1;
    }
    else
    {
        /* value read was a char */
        return 0;
    }
}

unsigned int AcceptNumbersInitial(int *numbers)
{
    return AcceptNumbers(numbers, INIT_ARRAY_SIZE);   
}

void PrintInReverse(int* numbers, size_t arraySize)
{
    for (int index = arraySize - 1; index >= 0; --index)
    {
        printf("%d ", numbers[index]);
    }
}

void CopyArray(int* numbers, int* copyOfNumbers, size_t size)
{
    for (size_t index = 0; index < size; ++index)
    {
        copyOfNumbers[index] = numbers[index];
    }
}