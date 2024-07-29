#include "lists.h"
/**
* list_len - funcion
* @h: data
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (; h; i++)
		h = h->next;
	return (i);
}
