#include "main.h"
#include <stdio.h>

/**
 * _isupper- function that checks for uppercase character
 * @c: variable
 *
 * Return: 1 if c is uppercase, 0 else
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
