// EX1Q8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <limits.h>
#include "edges.h"

#pragma warning(disable:4996)





int main()
{
    int result[2];
    AlmostEdges(result);
    printf("second smallest: %d\nsecond largest : %d\n", result[0], result[1]);
}