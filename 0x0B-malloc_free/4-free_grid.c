#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the space allocated to the grid passed
 * as the argument
 * @grid: malloc to be freed
 * @height: height of the allocated 2D array memory space.
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
