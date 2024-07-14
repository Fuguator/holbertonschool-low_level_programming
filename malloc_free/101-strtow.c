#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * strtow - var
 * @str: var
 * Return: NULL
 */
char **strtow(char *str)
{
	char *a = NULL;
	unsigned int i = 0, j = 0, k = 0;

	if (strncmp(str, "", 1) || str == NULL)
		return (NULL);

	a = malloc((i + j + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (; k < i; k++)
		a[k] = str[k];

	i = k = 0;

	for (; k < j; k++, i++)
		a[i] = str[k];

	a[i] = 0;

	return (NULL);
}
