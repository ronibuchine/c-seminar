#pragma once
#include <stdlib.h>
#include <string.h>

/**
* @brief macro used in debug mode to trace variables of type int, size_t, char* and double
*/
#ifdef _DEBUG
#define TRACE_VAR(t, x) {                                           \
if (strcmp((#t), "double") == 0)                                    \
    printf("Variable Name: %s\nValue: %lf\n", (#x), (x));           \
else if (strcmp((#t), "size_t") == 0 || strcmp((#t), "int") == 0)   \
    printf("Variable Name: %s\nValue: %d\n", (#x), (x));            \
else if (strcmp((#t), "char*") == 0)                                \
    printf("Variable Name: %s\nValue: %s\n", (#x), (x));            \
}
#endif

#define ARRAY_SIZE 10


