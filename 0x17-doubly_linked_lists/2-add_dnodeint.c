#include "lists.h"

/**
 * add_dnodeint - function to add a node at beginning of a double linked list
 * @head: the head of the list
 * @n: the value of the new node
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (*head);
}
