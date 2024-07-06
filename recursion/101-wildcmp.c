#include "main.h"
/**
 * wildcmp - func
 * @s1: first string
 * @s2: second string
 * Return: 1 if both strings are the same, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\n' && *s2 == '\n')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	return (1);
}
