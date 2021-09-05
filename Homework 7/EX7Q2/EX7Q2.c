// EX7Q2.c : This file contains the 'main' function. Program execution begins and ends there.
//
#include "macros.h"
#include <stdio.h>


int main()
{
    /* test #1 */
    int variable = 72;

    TRACE_VAR(int, variable);
    printf("\n");
    /* test #2 */
    int sum = 0;
    size_t grades[ARRAY_SIZE] = { 97, 60, 88, 78, 90, 66, 80, 100, 89, 77 };
    double average;
    for (size_t index = 0; index < ARRAY_SIZE; ++index)
    {
        sum += grades[index];
        average = sum / (index + 1);
        TRACE_VAR(size_t, index);
        TRACE_VAR(size_t, grades[index]);
        TRACE_VAR(int, sum);
        TRACE_VAR(double, average);
    }

}


