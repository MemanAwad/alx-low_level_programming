#include "lists.h"

/**
 * dlistint_len - function to return the lenght of a double linked list
 * @h: the head of the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
