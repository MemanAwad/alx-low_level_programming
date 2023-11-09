#include "lists.h"

/**
 * add_dnodeint_end - function to add a node at the end of a double linked list
 * @head: the head of the list
 * @n: the value of the new node
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = NULL;

	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}
