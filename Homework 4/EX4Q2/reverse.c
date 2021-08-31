#include "reverse.h"
#include <string.h>
#include <stdio.h>
#pragma warning(disable:4996)

void PrintReversedSentence(char* sentence)
{
	if (*sentence == '\0')
	{
		/* sentence is the empty string, do nothing */
		return;
	}
	else
	{
		char* token = FindNextWord(sentence);
		/* call function recursively using the call stack to reverse word order */
		PrintReversedSentence(token);
		PrintToNextSpace(sentence);
	}
}

char* FindNextWord(char* sentence)
{
	char* charPointer = sentence;
	
	while (*charPointer != ' ' && *charPointer != '\0')
	{
		++charPointer;
	}
	/* if we ended on a space then it will return a pointer to the next letter otherwise returns NULL */
	return *charPointer ? charPointer + 1 : charPointer;
}

void PrintToNextSpace(char *sentence)
{
	/* also will ignore new line characters */
	while (*sentence != ' ' && *sentence != '\0' && *sentence != '\n')
	{
		printf("%c", *sentence);
		++sentence;
	}
	printf(" ");
}
