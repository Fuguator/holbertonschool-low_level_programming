#include "main.h"
/**
 * _strcpy - func
 * @dest: variable
 * @src: variable
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, a;

	while (src[len] != '\0')
		len++;

	for (a = 0; a < len; a++)
		dest[a] = src[a];

	dest[a] = '\0';

	return (dest);
}
