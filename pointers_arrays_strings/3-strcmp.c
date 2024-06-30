#include "main.h"
/**
 * _strcmp - func
 * @s1: variable
 * @s2: variable
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		a++;
	}

	return (0);
}
