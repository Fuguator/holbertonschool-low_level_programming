#include "lists.h"
/**
 * sum_dlistint - func
 * @head: adress
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0, i = 0;
	dlistint_t *a = head;

	if (!head)
		return (0);

	while (a)
	{
		i += a->n;
		a = a->next;
		sum += i;
	}
	return (sum);
}
