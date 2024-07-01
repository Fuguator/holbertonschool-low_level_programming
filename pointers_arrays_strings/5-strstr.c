#include "main.h"
/*
 * _strstr - func
 * @haystack: variable
 * @needle: variable
 * Return: haystack or end of the str
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle != 0)
	{
		while (*haystack++)
		{
			i = 0;

			if (haystack[i] == needle[i])
			{
				do {
					if (needle[i + 1] == '\0')
						return (haystack);
					i++;
				}
				while (haystack[i] == needle[i])
					;
			}
		}
	}
	else
		return (haystack);

	return ('\0');
}
