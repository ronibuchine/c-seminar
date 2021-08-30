#include "binary.h"
#include <malloc.h>
#define BYTE_SIZE 8

unsigned int *ConvertBinary(unsigned int *value, size_t size)
{
    /* declare an array which will hold the binary numbers */
    unsigned int *binaryNumbers = (unsigned int *)malloc(BYTE_SIZE * size * sizeof(unsigned int));

    /* keep dividing the number by two and place the remainder in the array of binary digits */
    unsigned int storedValue = *value;
    unsigned int index = 0;
    if (binaryNumbers)
    {
        while (storedValue / 2 != 0)
        {
            binaryNumbers[index] = storedValue % 2;
            ++index;
            storedValue /= 2;
        }

        binaryNumbers[index++] = storedValue % 2;
        /* pad the rest with 0's */
        while (index < BYTE_SIZE * size)
        {
            binaryNumbers[index++] = 0;
        }

        return binaryNumbers;
    }
    return NULL;
}

void PrintBinary(unsigned int* value, size_t size)
{
    /* retrieves the converted binary number in the form of an array */
    unsigned int *binaryNumber = ConvertBinary(value, sizeof(value));

    if (binaryNumber)
    {
        /* the number is reversed in the array */
        for (int index = BYTE_SIZE * size - 1; index >= 0; --index)
        {
            printf("%d", binaryNumber[index]);
        }
        /* free allocated memory */
        free(binaryNumber);
    }
     
}