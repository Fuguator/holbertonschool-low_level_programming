#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of list
 * @head: adress
 * @n: data
 * Return: new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head, *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
		return (NULL);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
		tmp->next = new_node;
		new_node->prev = tmp;
	}

	return (new_node);
}
