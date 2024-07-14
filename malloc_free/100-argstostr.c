#include "main.h"
/**
 * argstostr - func
 * @ac: var
 * @av: var
 * Return: a
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
		for (; av[i][j]; j++)
			k++;

	a = malloc(sizeof(char) * (1 + k + ac));
	i = j = k = 0;

	if (a == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		for (; av[i][j]; j++)
		{
			a[k] = av[i][j];
			k++;
		}
		k++;
		a[k] = '\n';
	}
	a[k] = 0;

	return (a);
}
