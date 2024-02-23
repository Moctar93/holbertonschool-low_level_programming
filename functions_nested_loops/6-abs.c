#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @n: absolute value to integer
 * Return: if negative n * -1 else n
 */

int _abs(int n)
{

	if (n <= 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
