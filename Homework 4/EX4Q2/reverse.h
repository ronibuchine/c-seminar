#pragma once

/**
* @brief function that takes in a sentence as a parameter and reverses it
* 
* @param sentence the array of chars which will represent the sentence (space separated)
*
*/
void PrintReversedSentence(char* sentence);

/**
* @brief will find the next word of the sentence (space seperated)
* 
* @param sentence the sentence you'd like to find the next word for
* @return a pointer to the first character in the next word
*/
char* FindNextWord(char* sentence);

/**
* @brief will print a string up until whitespace or end of string
* 
* @param sentence the string to be printed
*/
void PrintToNextSpace(char* sentence);
