#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert a node at a given index
 * @h: the head of the list
 * @idx: the given index
 * @n: the value of the node
 *
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = NULL;

	temp = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = temp;
	new->n = n;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
