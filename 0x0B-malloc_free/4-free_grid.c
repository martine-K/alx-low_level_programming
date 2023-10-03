#include <stdlib.h>
#include "main.h"

/**
 * free_grid - the function frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: the grid to be free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
