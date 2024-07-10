#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - func
 * @str: string
 * Return: duplicated str
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *a;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		i++;

	a = malloc(1 + sizeof(char) * i);

	if (a  == NULL)
		return (NULL);

	while (j < i)
	{
		a[j] = *(str + j);
		j++;
	}

	a[i] = 0;

	return (a);
}
