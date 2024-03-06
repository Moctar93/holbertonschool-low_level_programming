#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * Return: pointer s of the memory
 * @n: bytes of the memory
 * @b: constant byte s
 * @s: pointer of the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
