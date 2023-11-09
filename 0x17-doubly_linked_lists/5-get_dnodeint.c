#include "lists.h"

/**
 * get_dnodeint_at_index - function to get the node at the given index
 * @head: the head of the list
 * @index: the given index
 *
 * Return: the nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
