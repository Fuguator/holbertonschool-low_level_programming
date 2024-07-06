#include "main.h"
/**
 * len - func
 * @s: var
 * Return: l + 1
 */
int len(char *s)
{
	int l = 0;

	if (*s)
		l++;

	return (l);
}
/**
 * is_palindrome - func
 * @s: var
 * Return: ;
 */
int is_palindrome(char *s)
{
	int i = 0, j = len(s) - 1;

	if (i < j)
	{
		if (s[i] != s[j])
			return (0);
		i++, j--;
	}
	else if (i == j)
	{
		if (s[i] == s[j])
			return (1);
	}
	return (1);
}
