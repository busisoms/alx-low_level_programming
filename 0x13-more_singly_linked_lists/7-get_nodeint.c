#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to node
 * @index: index of the required node
 *
 * Return: nth node of a linked list, otherwise return NULL
 * if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;


	if (head == NULL)
	{
		return (NULL);
	}

	current = head;
	i = 0;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}

