#include "main.h"
/**
 * leet - func
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] == 'a' || str[a] == 'A')
			str[a] = 4;

		else if (str[a] == 'e' || str[a] == 'E')
			str[a] = '3';

		else if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';

		else if (str[i] == 't' || str[i] == 'T')
			str[i] = '7';

		else if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
	}
	
	return (str);
}
