#include "main.h"

/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 *@dest: destination area
 *@src: source memory area
 *@n: number of bytes to copy
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest  = dest;
	char *ptr_src = src;

	while (n > 0)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
		n--;
	}
	return (dest);
}
