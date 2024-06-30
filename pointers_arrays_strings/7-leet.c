#include "main.h"
/**
 * leet - func
 * @str: string
 * Return: r
 */
char *leet(char *str)
{
	char *r = str;
	char a[] = { 'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L' };
	char n[] = { 4, 3, 0, 7, 1, 4, 3, 0, 7, 1 };
	int i = 0;

	while (*str)
	{
		for (i = 0; i < 5; i++)
			if (*str == a[i])
				*str = n[i] + '0';
		str++;
	}
	return (r);
}
