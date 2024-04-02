#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len  - function that returns the number of elements in a linked list_t list.
 * @h: pointer to the lists
 * Return: the number of elements in a linked list
 */

size_t print_list(const list_t *h)
{
        size_t count = 0;

        while (h != NULL)
        {
                while (h->next != NULL)
                {
                        h = h->next;
			count++;
                }
        }
        return (count);
}
