#include "main.h"
#include <stdio.h>
/**
 * leet - encode a string into "1337"
 * @str: string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	char *s = str;
	char *lettres = "aAeEoOtTlL";
	char *leet_chars = "4433007711";
	int i;

	while (*s)
	{
		for (i = 0; lettres[i]; i++)
		{
			if (*s == lettres[i])
			{
				*s = leet_chars[i];
				break;
			}
		}
		s++;
	}
	return (str);
}
