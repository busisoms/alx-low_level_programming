#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of datatype
 *
 * Return: pointer to allocated memory, otherwise terminate with a status of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
