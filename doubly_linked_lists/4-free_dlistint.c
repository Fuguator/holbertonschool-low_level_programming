#include "lists.h"
/**
 * free_dlistint - removes a node
 * @head: adress
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *file;

	while (head)
	{
		file = head;
		head = head->next;
		free(file);
	}
}
