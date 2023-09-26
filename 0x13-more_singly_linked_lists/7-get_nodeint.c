#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of a linked list
 * @head: the head of the list
 * @index: the node index starting from 0
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;
	unsigned int count = 0;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (head == NULL || index >= count)
	{
		return (NULL);
	}
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
