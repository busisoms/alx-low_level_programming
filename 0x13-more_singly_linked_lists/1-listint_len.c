#include "lists.h"

/**
 * listint_len - returns number of elemnts in linked list
 * @h: pointer to linked list node
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	long int count = 0;

	current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}

