#include "main.h"
/**
 * string_nconcat - func
 * @s1: str1
 * @s2: str2
 * @n: var
 * Return: strncat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, k = 0;
	char *a;

	if (s1 != NULL)
		for (; *(s1 + i) != '\0'; i++)
			;
	else
		i = 0;
	if (s2 != NULL)
		for (; *(s2 + j) != '\0'; j++)
			;
	else
		j = 0;

	a = malloc(sizeof(char) * (i + j) + 1);

	if (a == NULL)
		return (NULL);

	while (s1 != '\0')
	{
		a[i] = s1[i];
		i++;
	}
	k = i;
	i = 0;

	while (s2 != '\0')
	{
		a[k + i] = s2[i];
		i++;
	}
	str[i + k] = '\0';

	return (a);
}
