#include "main.h"
/**
 * *_strchr - func
 * @s: str
 * @c: character
 * Return: s + 1 if founded, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while ((s[a] != c) && (s[a] != '\0'))
		a++;
	return ((s[a] == c) ? s + 1 : 0);
}
