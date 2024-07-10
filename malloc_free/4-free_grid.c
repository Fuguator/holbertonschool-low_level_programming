#include "main.h"
/**
 * free_grid - func
 * @grid: matrix
 * @height: var
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
