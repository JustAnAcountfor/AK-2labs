#include "calculator.h"
//Jif

int Calculator::Add (double a, double b)
{
	return a + b;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
