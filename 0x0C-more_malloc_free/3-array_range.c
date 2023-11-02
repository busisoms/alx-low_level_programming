#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: the first element
 * @max: the last element
 *
 * Return: pointer to created array, otherwise return NULL
 */

int *array_range(int min, int max)
{
	int i, j, len = 0;
	int *a;

	if (min > max)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		len++;
	}

	a = malloc(len * sizeof(int));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = min; i < len && j <= max; i++)
	{
		a[i] = j;
		j++;
	}
	return (a);
}
