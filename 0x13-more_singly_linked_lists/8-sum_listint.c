#include "lists.h"

/**
 * sum_listint - sums all the data of a listint_t linked list
 * @head: pointer to node
 *
 * Return: the sum of all data of a listint_t or return 0 if list
 * is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;


	if (head == NULL)
	{
		return (0);
	}

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}


