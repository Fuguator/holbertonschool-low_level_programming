#include "main.h"
/**
 * rev_string - func
 * @s: variable
 */
void rev_string(char *s)
{
	int a, i = 0, j = 0;
	char temp;

	while (s[i] != '\0')
		i++;

	j = i - 1;

	for (a = 0; a < i / 2; a++)
	{
		temp = s[a];
		s[a] = s[j];
		s[j] = temp;
		j--;
	}
}
