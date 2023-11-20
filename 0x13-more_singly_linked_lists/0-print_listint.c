#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * of a listint_t list
 * @h: pointer to node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	long int count = 0;

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}


