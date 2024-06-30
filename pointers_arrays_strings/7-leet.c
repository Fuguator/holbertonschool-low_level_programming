#include "main.h"
/**
 * leet - func
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		while (str[a] == 'a' || str[a] == 'A')
			str[a] = 4;

		while (str[a] == 'e' || str[a] == 'E')
			str[a] = '3';

		while (str[a] == 'o' || str[a] == 'O')
			str[a] = '0';

		while (str[a] == 't' || str[a] == 'T')
			str[a] = '7';

		while (str[a] == 'l' || str[a] == 'L')
			str[a] = '1';
	}
	
	return (str);
}
