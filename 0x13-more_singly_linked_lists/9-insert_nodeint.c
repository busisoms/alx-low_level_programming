#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer pointing to node
 * @idx: index of the list where the new node should be added
 * @n: data to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *current;

	if (*head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (*head);
	}

	current = *head;
	i = 0;

	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = current->next;
	current->next = new;

	return (new);
}

