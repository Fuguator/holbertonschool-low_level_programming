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
	unsigned int a = 0;

	while (a < n)
		dest[a++] = src[a++];
	return (dest);
}
