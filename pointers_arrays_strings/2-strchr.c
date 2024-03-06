#include "main.h"
#include <stddef.h>
/**
 *_strchr - locates a characer in a string
 *@s: the string to search
 *@c: the character to locate
 *Return: Null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (Null);
}
