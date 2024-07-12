#include "main.h"
/**
 * _calloc - func
 * @nmemb: var
 * @size: var
 * Return: a
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (;i < nmemb * size; i++)
		a[i] = 0;

	return (a);
}
