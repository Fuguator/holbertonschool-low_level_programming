#include "main.h"
/**
 */
int is_palindrome(char *s)
{
	int i, a;

	if (sizeof(s) > 4)
	{
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
	else
		return (1);
}
