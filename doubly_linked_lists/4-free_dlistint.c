#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - function that frees a dlistint_t
 * @head: pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}