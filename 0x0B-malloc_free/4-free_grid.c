#include "main.h"

/**
 * free_grid -  function to frees a 2D grid created alloc_grid.
 * @grid: pointer to free 2D array
 * @height: height of grid.
 *
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
		return;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
