#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * linked list
 * @head: pointer to pointer pointing to a node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *prev;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	prev = *head;
	for (i = 0; i < index - 1 && prev != NULL; i++)
	{
		prev = prev->next;
	}

	if (prev == NULL || prev->next == NULL)
	{
		return (-1);
	}

	temp = prev->next;
	prev->next = temp->next;
	free(temp);

	return (1);
}

