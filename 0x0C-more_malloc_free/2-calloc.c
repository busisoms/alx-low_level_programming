#include "main.h"
#include <string.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of array
 *
 * Return: a pointer to allocated memory, otherwise return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = malloc(nmemb * size);

	if (s == NULL)
	{
		return (NULL);
	}

	memset(s, 0, nmemb * size);
	return (s);
}
