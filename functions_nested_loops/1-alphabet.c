#include "main.h"
#include <stdio.h>
/**
 * print_alphabet-print alphabets
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int c;c

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
