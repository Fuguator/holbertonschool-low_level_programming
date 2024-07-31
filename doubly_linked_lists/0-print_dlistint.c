#include "lists.h"
/**
 * print_dlistint - func
 * @h: var
 * Return: i
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *a = h;

	for (; h; i++)
		a = a->next;
	return (i);
}
