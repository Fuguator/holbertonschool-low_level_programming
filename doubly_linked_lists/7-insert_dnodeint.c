#include "lists.h"
/**
 * insert_dnodeint_at_index - func
 * @h: adress
 * @idx: index
 * @n: data
 * Return: new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new_node;
	unsigned int i = 0;

	new_node = NULL;

	if (idx != 0)
	{
		while (tmp)
		{
			if ((i + 1) == idx)
			{
				if (tmp->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node)
					{
						new_node->n = n;
						new_node->prev = tmp;
						new_node->next = tmp->next;
						tmp->next->prev = new_node;
						tmp->next = new_node;
					}
				}
				break;
			}
			tmp = tmp->next;
			i++;
		}
	}
	return (new_node);
}
