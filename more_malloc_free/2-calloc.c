#include "main.h"
/**
 * _calloc - func
 * @nmemb: var
 * @size: var
 * Return: a
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, len = 0;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(sizeof(nmemb) * size);

	while (a)
		len++;

	while (i < len)
	{
		a[i] = nmemb;
		i++;
	}

	return (a);
}
