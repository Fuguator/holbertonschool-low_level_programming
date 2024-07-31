#include "lists.h"
/**
 * print_dlistint - func
 * @h: var
 * Return: i
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *a = h;
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", a->n);
		a = a->next;
		i++;
	}
	return (i);
}
