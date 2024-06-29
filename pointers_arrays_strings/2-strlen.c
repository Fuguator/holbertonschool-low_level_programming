#include "main.h"
/**
 * _strlen - func
 * @s: pointer
 * Return: length of a string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\n')
		a++;

	return (a);

}
