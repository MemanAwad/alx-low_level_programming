#include "lists.h"
#include <stdio.h>

/**
 * list_len - this function will count the lenght of s linked list
 * @h: the head of the linked list
 * Return: number of the node
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
