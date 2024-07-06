#include "main.h"
/**
 * len - func
 * @s: var
 * Return: l
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}
int palind_rec(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (palind_rec(s, i + 1, j - 1));
}
/**
 * is_palindrome - func
 * @s: var
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (palind_rec(s, 0, len(s) - 1));

}
