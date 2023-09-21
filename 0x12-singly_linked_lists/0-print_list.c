#include "lists.h"
#include <stdio.h>

/**
 * print_list - this function will print the content of the linked list
 * @h: the head of the linked list
 * Return: number of the node
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while(h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", h->str);
		}
		printf("\n");
		h = h->next;
		count++;
	}
	return (count);
}
