#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer pointing to node
 *
 * Return: returns the head node's data otherwise return 0
 * if linked list is empty
 */

int pop_listint(listint_t **head)
{
	int popped = 0;
	listint_t *next = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	next = (*head)->next;
	popped = (*head)->n;

	free(*head);
	*head = next;

	return (popped);
}


