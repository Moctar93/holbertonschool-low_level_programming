#include <stdio.h>
/**
 *main - program that prints all the numbers of base 16 in lowercase
 *Return: Always 0
 */

int main(void)
{
	char i;

	for (i = '1'; i <= '9'; ++i)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; ++i)
		{
		putchar(i);
		}

	putchar('\n');

	return (0);
}
