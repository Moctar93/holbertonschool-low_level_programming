#include "main.h"

/**
 * swap_int - swap two variables
 * @a: is a variable
 * @b: is variable
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
