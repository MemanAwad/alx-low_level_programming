#include "lists.h"

/**
 * sum_dlistint - function to sum all the elememt of a double linked list
 * @head: the head of the list
 *
 * Return: the sum of node's values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
