#include "main.h"
#include <stdlib.h>
/**
 * free_grid - check the code that frees a 2 dimensional grid
 * @grid: check the grid
 * @height: check the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
