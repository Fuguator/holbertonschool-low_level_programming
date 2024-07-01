#include "main.h"
#include <stddef.h>
/**
 * *_strchr - func
 * @s: str
 * @c: character
 * Return: s + 1 if founded, NULL otherwise
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; (s[a] != c) && (s[a] != '\0'); a++);
	return ((s[a] == c) ? (s + a) : (NULL));
}
