#include "main.h"
/**
 * *_strpbrk - func
 * @s: variale
 * @accept: variable
 * Return: end of string 
*/

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[i]; a++)
		{
			if (accept[a] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
