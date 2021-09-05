#pragma once
#include <stdio.h>
#define ENV_DELIM '='

/**
* @brief seperates the variable name from the argument variable
* @param str argument variable
* @return variable name
*/
char* VariableName(char* str);

/**
* @brief seperates the variable value from the argument variable
* @param str argument variable
* @return variable value
*/
char* VariableValue(char* str);

/**
 * @brief gets the length of a string up to a specified delimiter
 * @param str string passed
 * @param delim given delimiter
 * @return the length of the string up to the delimiter
*/
size_t StringLengthDelimited(char* str, char delim);
