#include "main.h"
#include <string.h>
/**
 * string_nconcat - func
 * @s1: str1
 * @s2: str2
 * @n: var
 * Return: strncat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0,len1 = 0,len2 = 0;
	char *a;

	int b = strlen(s1);

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

	for (; *(s1 + i) != '\0'; i++)
		a[i] = s1[i];

	k = i;
	i = 0;

	for (; *(s2 + i) != '\0'; i++)
		a[k + i] = s2[i];

	a[i + k] = '\0';

	return (a);
}
