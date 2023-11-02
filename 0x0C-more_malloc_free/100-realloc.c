#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: new size of new memory block
 *
 * Return: NULL if it fails to expand memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;


	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size > old_size)
	{
		ptr2 = malloc(new_size);

		if (ptr2 == NULL)
		{
			return (NULL);
		}
		memcpy(ptr2, ptr, new_size);
		free(ptr);
		return (ptr2);
	}
	return (NULL);
}
