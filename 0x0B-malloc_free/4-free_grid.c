#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid created by the
 * alloc_grid function
 * @grid: pointer to a pointer to the output of alloc_grid function
 * @height: column of the 2d array in alloc_grid function
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
