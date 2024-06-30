#include "main.h"
/**
 * *_strncat - func
 * @dest: destination
 * @src: source
 * @n: size of appended string
 * Return: result of concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
		dest[a++] = src[b++];

	dest[a] = '\0';

	return (dest);
}
