#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *create_array - func
 * @size: var
 * @c: var
 * Return: a if str not empty
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a

	*a = malloc(sizeof(size) * a);

	if (size == 0 || a == NULL)
		return (NULL);

	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
