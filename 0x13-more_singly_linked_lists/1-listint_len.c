#include "lists.h"

/**
 * listint_len - function that return the length of a linked list
 * @h: the head of the list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}

