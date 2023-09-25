#include "lists.h"

/**
 * free_listint - function to delete linked list
 * @head: the head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}

