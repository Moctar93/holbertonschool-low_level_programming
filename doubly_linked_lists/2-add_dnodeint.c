#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: double pointer of the list
 * @n: data to be added
 * Return: &n or Null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}
	(*head) = new_node;

	return (new_node);
}
