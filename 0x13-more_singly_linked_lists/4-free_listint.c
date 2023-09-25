#include "lists.h"

/**
 * free_listint - function to delete linked list
 * @head: the head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	
	temp = malloc(sizeof(listint_t));
	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}

