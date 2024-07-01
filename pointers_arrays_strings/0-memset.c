#include "main.h"
/**
 * *_memset - fills certain block of memory
 * @s: memory block
 * @b: which bite will be
 * @n: filling size
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
		s[n - 1] = b, n--;
	return (s);
}
