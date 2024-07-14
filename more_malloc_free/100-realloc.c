#include "main.h"
/**
 * _realloc - func
 * @ptr: var
 * @old_size: var
 * @new_size: var
 * Return: p
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *a;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	a = malloc(new_size);

	if (a == NULL)
		return (NULL);

	for (; i < (old_size && new_size); i++)
		a[i] = ((char *)ptr)[i];

	free(ptr);

	return (a);
}
