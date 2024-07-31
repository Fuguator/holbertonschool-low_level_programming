#include "lists.h"
/**
 * print_dlistint - func
 * @h: var
 * Return: i
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *a = h;
	int i = 0;

	for (; h != NULL; i++)
	{
		printf("%d\n", a->n);
		a = a->next;
	}
	return (i);
}
