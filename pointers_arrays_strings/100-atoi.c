#include "main.h"
/**
 * _atoi - func
 * @s: variable
 * Return: n
 */
int _atoi(char *s)
{
	int i = 0, a = 0, b = 0, len = 0, n = 0, num = 0;

	while (s[len] != '\0')
		len++;

	if (f != 0)
	{
		while (i < len && b == 0)
		{
			if (s[i] == '-')
				++a;
			if (s[i] >= '0' && s[i] <= '9')
			{
				num = s[i] + '0';

				if (a % 2)
					num = -num;

				n = n * 10 + num;
				b = 1;

				if (s[i + 1] < '0' || s[i + 1] > '9')
					continue;

				b = 0;
			}

			i++;

		}
	}
	else
		return (0);

	return (n);
}
