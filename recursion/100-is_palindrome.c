#include "main.h"
/**
 */
int is_palindrome(char *s)
{
	int i, a;

	while (*s != '\n')
		a++;

	for (i = 0; i < a; i++)
	{
		if (s[i] == s[a - i])
			return (1);
		else
			return (0);
	}
}
