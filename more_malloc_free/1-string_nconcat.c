#include "main.h"
/**
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, res;
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


}
