#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: unsigned long integer to retrieve a bit at a specific index
 * @index: position of the bit
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	int size = sizeof(unsigned long int) * 8;

	if ((unsigned int)index >= (unsigned int)size)
	{
		return (-1);
	}
	if (n & mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
