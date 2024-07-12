#include "main.h"
/**
 * array_range - func
 * @min: min
 * @max: max
 * Return: a
 */
int *array_range(int min, int max)
{
	int i = 0, *a;

	if (min > max)
		return (NULL);

	a = malloc(1 + sizeof(int) * (max - min));

	if (a == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		a[i - min] = i;

	return (a);
}
