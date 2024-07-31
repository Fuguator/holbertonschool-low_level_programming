#include "lists.h"
/**
 * print_dlistint - func
 * @h: var
 * Return: i
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *a = n;
	int i = 0;

	for (; h; i++)
	{
		printf("%d", a->n);
		a = a->next;
	}
	return (i);
}
