#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - this function will add node in the beginning of a linked list
 * @head: the head of the linked list
 * @str: the string to be stored in the node
 * Return: pointer to the new node
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
