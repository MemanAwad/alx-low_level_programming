#include "lists.h"
#include <stdio.h>

/**
 * print_listint - it will print the linked list ineger value
 * @h: the head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t total_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		total_node++;
	}
	return (total_node);
}
