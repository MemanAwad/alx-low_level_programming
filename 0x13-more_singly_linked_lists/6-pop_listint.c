#include "lists.h"

/**
 * pop_listint - function that delete a node from the begining of a linked list
 * @head: the head of the list
 * Return: the value of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;
	int value;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	temp2 = (*head)->next;
	value = temp->n;
	free(temp);
	*head = temp2;

	return (value);
}

