#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: pointer to the head of the list
 * @index: index of the node
 * if the node does not exist, return NULL
 * Return: the nth node of a dlistint_t
 * or return NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL || count < index)
	{
		return (NULL);
	}
	return (temp);
}
