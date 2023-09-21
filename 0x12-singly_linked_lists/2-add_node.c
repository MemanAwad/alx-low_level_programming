#include "lists.h"
#include <stdio.h>

/**
 * list_len - this function will count the lenght of s linked list
 * @h: the head of the linked list
 * Return: number of the node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length;

	length = strlen(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;
	return (new);
}
