#include "main.h"
#include <string.h>
/**
 * string_nconcat - func
 * @s1: str1
 * @s2: str2
 * @n: var
 * len2 = (strlen(s2) >= n) * n + (strlen(s2) < n) * strlen(s2);
 * Return: strncat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, len2 = 0;
	char *a;

	if (s1 != NULL)
		while (s1 != '\0')
			len1++;

	if (s2 != NULL)
		while (s2 != '\0')
			len2++;

	a = malloc(sizeof(char) * (len1 + len2) + 1);

	if (a == NULL)
		return (NULL);

	for (; i < len1; i++)
		a[i] = s1[i];
	i = 0;

	for (; i < len2; i++)
		a[len1 + i] = s2[i];
	i = 0;

	a[len1 + len2] = '\0';

	return (a);
}
