#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates grid of height h and width w
 * @w: width of grid
 * @h: height of grid
 * Return: a 2D array
 */

int **alloc_grid(int w, int h)
{
	int **grid;
	int i = 0;

	if (w <= 0 || h <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * h);

	for (; i < h; i++)
	{
		grid[i] = malloc(sizeof(int) * w);
		if (grid[i] == NULL)
		{
			for (; i > -1; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

		i = 0;

		for (; i < h; i++)
		{
			int j = 0;

			if (grid[i] != NULL)
			{
				for (; j < w; j++)
				{
					*(*(grid + i) + j) = 0;
				}
			}
		}
	return (grid);
}


