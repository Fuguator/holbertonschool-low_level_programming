#include "main.h"
/**
 * _strspn - func
 * @s: variable
 * @accept: variable
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, n = 0;

	while (*s)
	{
		while (accept[a])
		{
			if (accept[a] == *s)
			{
				n++;
				break;
			}
			else if ((accept[a + 1]) == '\0')
				return (n);
			a++;
		}
		s++;
	}
	return (n);
}
