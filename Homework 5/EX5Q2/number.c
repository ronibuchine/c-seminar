#include "number.h"

void ReceiveInput(NumberBase *number)
{
	char garbage;
    size_t input;
	printf("Please state the type of number to calculate:\n1 = Real Number\n2 = Imaginary Number (format: a + b, DO NOT TYPE THE 'i')\n");
    scanf_s("%d", &input, sizeof(size_t));
    
	switch (input)
	{
	case 1:
		/* real number */
		number->isReal = 1;
		scanf_s(" %lf", &number->baseNumber.realNumber, sizeof(double));
		break;
	case 2:
		/* imaginary number */
		number->isReal = 0;
		scanf_s(" %f", &number->baseNumber.imaginaryNumber.realPart, sizeof(float));
		scanf_s(" %c", &garbage, sizeof(char));
		scanf_s(" %f", &number->baseNumber.imaginaryNumber.imaginaryPart, sizeof(float));
		break;

	default:
		printf("ERROR, PLEASE INPUT A VALID CHOICE NEXT TIME\n");
		break;
	}
}

	void Add(NumberBase *number1, NumberBase *number2)
	{
        
		if (!number1->isReal && !number2->isReal)
		{
            number1->baseNumber.imaginaryNumber.imaginaryPart = number1->baseNumber.imaginaryNumber.imaginaryPart + number2->baseNumber.imaginaryNumber.imaginaryPart;
            number1->baseNumber.imaginaryNumber.realPart = number1->baseNumber.imaginaryNumber.realPart + number2->baseNumber.imaginaryNumber.realPart;
		}
        else if (!number1->isReal || !number2->isReal)
        {
            if (number1->isReal)
            {
                number1->baseNumber.imaginaryNumber.realPart = number1->baseNumber.realNumber + number2->baseNumber.imaginaryNumber.realPart;
                number1->baseNumber.imaginaryNumber.imaginaryPart = number2->baseNumber.imaginaryNumber.imaginaryPart;
            }
            else
            {
                number1->baseNumber.imaginaryNumber.realPart = number2->baseNumber.realNumber + number1->baseNumber.imaginaryNumber.realPart;
                number1->baseNumber.imaginaryNumber.imaginaryPart = number1->baseNumber.imaginaryNumber.imaginaryPart;
            }
        }
        else
        {
            number1->baseNumber.realNumber = number1->baseNumber.realNumber + number2->baseNumber.realNumber;
        }
	}

void Subtract(NumberBase *number1, NumberBase *number2)
{
    if (!number1->isReal && !number2->isReal)
    {
        number1->baseNumber.imaginaryNumber.imaginaryPart = number1->baseNumber.imaginaryNumber.imaginaryPart - number2->baseNumber.imaginaryNumber.imaginaryPart;
        number1->baseNumber.imaginaryNumber.realPart = number1->baseNumber.imaginaryNumber.realPart - number2->baseNumber.imaginaryNumber.realPart;
    }
    else if (!number1->isReal || !number2->isReal)
    {
        if (number1->isReal)
        {
            number1->baseNumber.imaginaryNumber.realPart = number1->baseNumber.realNumber - number2->baseNumber.imaginaryNumber.realPart;
            number1->baseNumber.imaginaryNumber.imaginaryPart = number2->baseNumber.imaginaryNumber.imaginaryPart;
        }
        else
        {
            number1->baseNumber.imaginaryNumber.realPart = number2->baseNumber.realNumber - number1->baseNumber.imaginaryNumber.realPart;
            number1->baseNumber.imaginaryNumber.imaginaryPart = number1->baseNumber.imaginaryNumber.imaginaryPart;
        }
    }
    else
    {
        number1->baseNumber.realNumber = number1->baseNumber.realNumber - number2->baseNumber.realNumber;
    }
}
void Multiply(NumberBase *number1, NumberBase *number2)
{
    if (!number1->isReal && !number2->isReal)
    {
        number1->baseNumber.imaginaryNumber.imaginaryPart = number1->baseNumber.imaginaryNumber.imaginaryPart * number2->baseNumber.imaginaryNumber.imaginaryPart;
        number1->baseNumber.imaginaryNumber.realPart = number1->baseNumber.imaginaryNumber.realPart * number2->baseNumber.imaginaryNumber.realPart;
    }
    else if (!number1->isReal || !number2->isReal)
    {
        if (number1->isReal)
        {
            number1->baseNumber.imaginaryNumber.realPart = number1->baseNumber.realNumber * number2->baseNumber.imaginaryNumber.realPart;
            number1->baseNumber.imaginaryNumber.imaginaryPart = number2->baseNumber.imaginaryNumber.imaginaryPart;
        }
        else
        {
            number1->baseNumber.imaginaryNumber.realPart = number2->baseNumber.realNumber * number1->baseNumber.imaginaryNumber.realPart;
            number1->baseNumber.imaginaryNumber.imaginaryPart = number1->baseNumber.imaginaryNumber.imaginaryPart;
        }
    }
    else
    {
        number1->baseNumber.realNumber = number1->baseNumber.realNumber * number2->baseNumber.realNumber;
    }
}

void Divide(NumberBase* number1, NumberBase* number2)
{

}


