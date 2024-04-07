#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: unsigned long integer
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	int i;
	int flag = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if (n & mask)
		{
			printf("1");
			flag = 1;
		}
		else if (flag)
		{
			printf("0");
		}
	}
}
