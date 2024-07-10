#include "main.h"
/**
 * alloc_grid - func
 * @width: var
 * @height: var
 * Return: null of res
 */
int **alloc_grid(int width, int height)
{
	int i, j, **res;

	if (width <= 0 || height <= 0)
		return (NULL);

	res = malloc(height * sizeof(int));

	if (res == NULL)
	{
		free(res);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		res[i] = malloc(width * sizeof(int));

		if (res[i] == NULL)
		{
			while (i >= 0)
			{
				free(res);
				i--;
			}
			free(res);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			res[i][j] = 0;
	}
	return (res);
}
