#include "calculator.h"
#include <limits.h>

int Calculator::Div (int a, int b)
{
	if (b == 0)
	{
		return INT_MIN; 
	}
	return a / b;
}

int Calculator::Mul (int a, int b)
{
	return a * b;
}
