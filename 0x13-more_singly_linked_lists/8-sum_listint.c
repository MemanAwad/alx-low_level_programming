#include "lists.h"

/**
 * sum_listint - function return the sum of all data in listint_t
 * @head: the head of the list
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (sum);
	}
	else
	{
		temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
			sum += temp->n;
		}
	}
	return (sum);
}
