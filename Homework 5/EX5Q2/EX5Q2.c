// EX5Q2.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "number.h"

int main()
{
	size_t running = 1;
	
	NumberBase number1;
	NumberBase number2;

	char operation;
	ReceiveInput(&number1);

	while (running)
	{		

		printf("Please enter an operation: '+', '-', '*', '/' or any other character to see result\n");
		scanf_s(" %c", &operation, sizeof(char));

		

		switch (operation)
		{
		case '+':
			ReceiveInput(&number2);
			Add(&number1, &number2);
			break;
		case '-':
			ReceiveInput(&number2);
			Subtract(&number1, &number2);
			break;
		case '*':
			ReceiveInput(&number2);
			Multiply(&number1, &number2);
			break;
		case '/':
			ReceiveInput(&number2);
			Divide(&number1, &number2);
			break;
		default:
			if (number1.isReal)
			{
				printf("%lf", number1.baseNumber.realNumber);
			}
			else
			{
				printf("%f + %f i", number1.baseNumber.imaginaryNumber.realPart, number1.baseNumber.imaginaryNumber.imaginaryPart);
			}
			printf("\nexiting...\n");
			running = 0;
			break;
		}		
	}
}

