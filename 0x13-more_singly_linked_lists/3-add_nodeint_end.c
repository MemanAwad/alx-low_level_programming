#include "lists.h"
/**
 * add_nodeint_end - function that add a node at the end of a linked list
 * @head: the head of the list
 * @n: the node value
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node;

	}
	else
	{
		temp = malloc(sizeof(listint_t));
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}

