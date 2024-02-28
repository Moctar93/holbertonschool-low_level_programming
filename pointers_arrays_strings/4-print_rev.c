#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints a string, in reverse
 * @s: variable
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		 l++;
	}
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
