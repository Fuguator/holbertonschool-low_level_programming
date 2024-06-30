#include "main.h"
/**
 * *rot13 - func
 * @str: variable
 * Return: root13 encoded str
 */
char *rot13(char *str)
{
	char *r = str, a;

	while (*str)
	{
		a = (*str & 32) + 65;
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			*str = (*str - a + 13) % 26 + a;
		str++;
	}
	return (r);
}
