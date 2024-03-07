#include "main.h"
#include <stdio.h>
/**
 * factorial - calculates the factorial
 * @n: number to calculat the factorial
 * Return: Factorial n, -1 if n is negative
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
