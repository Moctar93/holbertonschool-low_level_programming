#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints a string, in reverse
 * @s: variable
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	while (l-1 >= -1)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
