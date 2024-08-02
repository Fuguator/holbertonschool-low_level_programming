#include "lists.h"
/**
 * delete_dnodeint_at_index - func
 * @head: adress
 * @index: index
 * Return: -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
{
	dlistint_t *tmp = *head, *del_node;
	unsigned int i = 0;

	for (; tmp; i++)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = tmp->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				del_node->next = tmp->next;
				if (tmp->next)
					tmp->next->prev = del_node;
			}
			free(tmp);
			return (1);
		}
		del_node = tmp;
		tmp = tmp->next;
	}
	return (-1);
}
