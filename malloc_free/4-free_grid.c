#include "main.h"
/**
 * free_grid - func
 * @grid: matrix
 * @height: var
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
