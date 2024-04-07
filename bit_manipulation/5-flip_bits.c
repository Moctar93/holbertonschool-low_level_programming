#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits get from one number to another
 * @n: unsigned long integer
 * @m: unsigned long integers to tranform n
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;
	
	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return count;
}
