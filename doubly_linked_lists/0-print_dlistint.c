#include "lists.h"
/**
 * print_dlistint - func
 * @h: var
 * Return: i
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	for (; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
