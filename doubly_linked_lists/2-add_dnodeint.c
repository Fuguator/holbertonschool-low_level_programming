#include "lists.h"
/**
 * add_dnodeint - func
 * @head: adress
 * @n: value
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *elem, *tmp = *head;

	elem = malloc(sizeof(dlistint_t));
	if (elem == NULL)
		return (NULL);

	elem->n = n;
	elem->next = *head;
	elem->prev = NULL;
	
	if (*head != NULL)
		tmp->prev = elem;
	*head = elem;
	return (elem);
}
