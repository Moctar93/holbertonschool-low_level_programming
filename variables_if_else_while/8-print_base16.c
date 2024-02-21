#include <stdio.h>
/**
 *main - program that prints all the numbers of base 16 in lowercase
 *Return: Always 0
 */

int main(void)
{
	char hexa_decimal;

	for (hexa_decimal = '1'; hexa_decimal <= '9'; ++hexa_decimal)
	{
		putchar(hexa_decimal);
	}
	for (hexa_decimal = 'a'; hexa_decimal <= 'f'; ++hexa_decimal)
		{
		putchar(hexa_decimal);
		}

	putchar('\n');
	return (0);
}
