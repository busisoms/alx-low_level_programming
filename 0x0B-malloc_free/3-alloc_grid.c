#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of
 * integers
 * @width: row of 2d array
 * @height: column of 2d array
 * Return: pointer to 2d array of int, otherwise return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **) malloc(width * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		arr[i] = (int *) malloc(height * sizeof(int));
		if (arr[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(arr[k]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
