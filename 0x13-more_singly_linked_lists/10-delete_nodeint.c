#include "lists.h"

/**
 * delete_nodeint_at_index - delete node from the given index
 * @head: the head of the list
 * @index: the index to instert the new node in it
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int count;
	listint_t *temp = *head;
	listint_t *temp2;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (*head == NULL || index >= count)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
	}
	else
	{
		temp = *head;
		while (i < (index - 1) && temp->next != NULL)
		{
			temp = temp->next;
			i++;
		}
		temp2 = temp->next;
		temp->next = temp->next->next;
		temp2->next = NULL;
		free(temp2);
	}
	return (1);
}
