#include "lists.h"
/**
 * add_node - adds new node
 * @head: adress
 * @str: data
 * Return: new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0, len = 0;
	char *new_node;
	list_t *new;

	while (*(str + i))
		len++, i++;

	if (head == NULL || str == NULL)
		return (NULL);

	i = 0;
	new = *head;
	new_node = malloc(sizeof(char) * (len + 1));

	if (new_node == NULL)
		return (NULL);
	while (*(str + i))
		*(new_node + i) = *(str + i), i++;
	*(new_node + i) = '\0';
	new = malloc(sizeof(size_t));
	if (new == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new->str = new_node;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
