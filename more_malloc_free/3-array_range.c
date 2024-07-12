#include "main.h"
/**
 */
int *array_range(int min, int max)
{
	int i, *a;

	a = malloc(sizeof(int) * (max - min));

	for (i = min; i <= max; i++)
		*(a + i) = i;

	return (a);
}
