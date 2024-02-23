#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: positive, zero or negative integer
 * Return: 1 if positve, -1 if negative else 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
