#include "main.h"
/**
 * *_memcpy - func
 * @dest: variable
 * @src: variable
 * @n: size
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
