#include <stdio.h>
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n:pointer to an unsigned long integer
 * @index:position of the bit that we want to set to 0 in the binary
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int size = sizeof(unsigned long int) * 8;
	
	if ((unsigned int)index >= (unsigned int)size || n == NULL)
	{
		return (-1);
    }
	*n &= ~(1UL << index);
	return (1);
}

