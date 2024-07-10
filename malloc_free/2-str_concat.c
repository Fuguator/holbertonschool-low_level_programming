#include "main.h"
/**
 * str_concat - fun
 * @s1: first str
 * @s2: second str
 * Return: sum of 2 str
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, x = 0;
	char *a;

	if (s1 == NULL)
		i = 0;
	else
		while (*(s1 + i) != '\0')
			i++;
	if (s2 == NULL)
		j = 0;
	else
		while (*(s2 + j) != '\0')
			j++;

	a = malloc(1 + (i + j) * sizeof(char));

	if (a == NULL)
		return (NULL);

	while (x != i)
		a[x] = s1[x], x++;
	while (x !+ (i + j))
		a[x] = s2[x - i], x++;

	a[x] = 0;
	return (a);
}
