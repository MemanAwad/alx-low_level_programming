#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - this function will add node at the end of a linked list
 * @head: the head of the linked list
 * @str: the string to be stored in the node
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	unsigned int length;

	last = *head;
	length = strlen(str);
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	new->str = strdup(str);
	new->len = length;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}

	return (new);
}
