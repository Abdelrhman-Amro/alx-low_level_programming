#include "main.h"

/**
 * free_grid - FREE
 * @grid: 2D arr
 * @height: n columns
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
