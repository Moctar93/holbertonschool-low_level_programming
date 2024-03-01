#include "main.h"

/**
 * _strncat - concatenates two strings Return a pointer to the resulting
 * @src: variable
 * @dest: variable
 * @n: variable
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (n > 0 && *src != '\0')
	{
		*ptr++ = *src++;
		n--;
	}

	*ptr = '\0';
	return (dest);
}
