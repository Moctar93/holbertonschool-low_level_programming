#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - calculates the value of x rised to the power of y
 * @x: the base
 * @y: the exponent
 * Return: The result of x, y, or -1 if negative
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
