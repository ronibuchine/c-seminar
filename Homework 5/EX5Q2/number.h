#pragma once
#include <stdio.h>

typedef struct Imaginary_t
{
	float realPart;
	float imaginaryPart;
} Imaginary;

typedef union Number_t
{
	double realNumber;
	Imaginary imaginaryNumber;
} Number;

typedef struct NumberBase_t
{
	Number baseNumber;
	size_t isReal;
} NumberBase;

void ReceiveInput(NumberBase *number);

void Add(NumberBase *number1, NumberBase *number2);

void Subtract(NumberBase* number1, NumberBase* number2);

void Multiply(NumberBase* number1, NumberBase* number2);

void Divide(NumberBase* number1, NumberBase* number2);
