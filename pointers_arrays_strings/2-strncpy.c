#include "main.h"
/**
 * _strncpy - func
 * @dest: destination
 * @src: soource
 * @n: size of sring
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (dest[a] != '\0')
		dest[a++] = src[a++];
	dest[a] = '\0';

	return (dest);
}
