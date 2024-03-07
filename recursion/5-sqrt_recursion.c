#include "main.h"
#include <stdio.h>
/**
 * squareRootSearch - fonction to search for the square root recursively
 * @i: the lower of search
 * @j: the upper oh search
 * @n: the number of square root searched
 *
 * Return: Return: Natural square root of n, or -1 if n does not have a
 * natural square root.
 */
int squareRootSearch(int i, int j, int n)
{
	int mid;
	int square;

	if (i > j)
	{
		return (-1);
	}
	mid = (i + j) / 2;
	square = (long)mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (squareRootSearch(mid + 1, j, n));
	}
	else
	{
		return (squareRootSearch(i, mid - 1, n));
	}
}
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: Natural square root of n, or -1 if n does not have a
 * natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (squareRootSearch(1, n / 2, n));
}
