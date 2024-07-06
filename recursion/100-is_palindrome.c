#include "main.h"
/**
 * len - func
 * @s: var
 * Return: l
 */
int len(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		return (l);
	}
	else
		return (0);
}
/**
 * is_palindrome - func
 * @s: var
 * Return: 1 if palindrome, 0 otherwise
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
	return (1);
}
