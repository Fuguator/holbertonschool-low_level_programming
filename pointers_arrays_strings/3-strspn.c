#include "main.h"
/**
 * _strspn - func
 * @s: variable
 * @accept: variable
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, n;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (accept[a] == *s)
				bytes++, break;
			else if ((accept[a + 1]) == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
