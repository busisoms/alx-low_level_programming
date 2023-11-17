#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer that points to a node
 * @str: new data that is a string
 * Return : address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *last;

	end = malloc(sizeof(list_t));
	if (end == NULL)
	{
		return (NULL);
	}

	end->str = strdup(str);
	if (end->str == NULL)
	{
		free(end);
		return (NULL);
	}

	end->len = strlen(str);
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (*head);
	}

	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = end;

	return (*head);
}

