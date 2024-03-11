#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -  function that creates an array of chars
 * Return: Null if size is 0
 * @size:size of array
 * @c: initialisation of array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));

	if (array != NULL)
	{
		for (i = 0; i < size; ++i)
		{
			array[i] = c;
		}
	}
	return (array);
}
