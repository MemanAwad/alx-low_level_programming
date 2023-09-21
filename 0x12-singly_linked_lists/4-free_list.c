#include "lists.h"

/**
 * free_list - this function will delete the element of s linked list
 * @head: the head of the linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
