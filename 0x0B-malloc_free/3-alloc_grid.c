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
		grid[i] = malloc(sizeof(int) * w);

	if (grid != NULL)
	{
		i = 0;
		for (; i < h; i++)
		{
			int j = 0;

			for (; j < w; j++)
			{
				if (grid[i] != NULL)
				{
					*(*(grid + i) + j) = 0;
				}
				else
				{
					for (; i > -1; i--)
					{
						free(grid[i]);
					}
					free(grid);
					return (NULL);
				}
			}
		}
	}
	return (grid);
}


