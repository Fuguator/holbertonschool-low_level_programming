#include "main.h"
/**
 * len - func
 * @s: var
 * Return: l + 1
 */
int len(char *s)
{
	int l = 0;

	if (*s != '\0')
		l++;

	return (l + 1);
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
		else
			return (1);
		i++, j--;
	}
	{
		if (s[i] == s[j])
			return (1);
	}
	return (1);
}
