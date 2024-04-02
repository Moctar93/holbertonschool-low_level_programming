#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to the lists
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	printf("[");
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", h->str);
		}
		count++;
		if (h->next != NULL)
		{
			printf(", ");
		}
		h = h->next;
	}
	printf("]\n");
	return (count);
}
