#include "lists.h"
/**
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *a = h;

	for (; a; i++)
		a = a->next;
	return (i);
