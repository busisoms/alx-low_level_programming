#include "function_pointers.h"

/**
 * int_index -  searches for an integer
 * @array: array of integers
 * @size: the number of elements
 * @cmp: a pointer to the function pointed to by @cmp
 *
 * Return: returns the index of the first element for
 * which the cmp function does not return 0, otherwise return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
