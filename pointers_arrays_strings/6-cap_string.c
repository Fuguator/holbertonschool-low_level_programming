#include "main.h"
/**
 * cap_string - func
 * @str: variable
 * Return: str
 */
char *cap_string(char *str)
{
	char sym[] = ",;.!?(){}\n\t\" ";
	int a, i, tr = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			tr = 1;

		for (a = 0; sym[a] != '\0'; a++)
		{
			if (sym[a] == str[i])
				tr = 1;
		}

		if (tr == 1)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				tr = 0;
			}

			else if ((str[i] > 64 && str[i] < 91) || (str[i] > 47 && str[i] < 58))
				tr = 0;
		}
	}

	return (str);
}
