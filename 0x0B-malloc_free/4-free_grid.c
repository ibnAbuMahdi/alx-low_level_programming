#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees an initialized grid
 * @grid: the grid
 * @h: grid height
 */

void free_grid(int **grid, int h)
{
	int i = 0;

	for (; i < h; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
