#include "lists.h"
/**
 * get_dnodeint_at_index - func
 * @head: adress
 * @index: value
 * Return: nth node of a list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *a = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	for (; a; i++)
	{
		if (i == index)
			return (i);
		a = a->next;
	}
	return (a);
}
