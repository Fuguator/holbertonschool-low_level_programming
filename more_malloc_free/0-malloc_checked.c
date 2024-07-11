#include "main.h"
/**
 * malloc_checked - func
 * @b: var
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
