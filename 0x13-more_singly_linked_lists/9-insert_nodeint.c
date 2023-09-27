#include "lists.h"

/**
 * insert_nodeint_at_index - insert node t hte given index
 * @head: the head of the list
 * @idx: the index to instert the new node in it
 * @n: the value of the new node
 * Return: pointer to the new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	unsigned int count = 0;
	listint_t *temp = *head;
	listint_t *new;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL || idx > count)
	{
		return (NULL);
	}
	new->n = n;
	if (head == NULL)
	{
		*head = new;
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		temp = *head;
		while (i < (idx - 1))
		{
			temp = temp->next;
			i++;
		}
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
