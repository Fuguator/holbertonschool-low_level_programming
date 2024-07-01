#include "main.h"
#include <string.h>
/*
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0, h = 0;

	while (1)
	{
	if (needle[a] == haystack[b])
	{
		if (h == 0)
			h = b;
		a++, b++;
		if (a >= strlen(needle))
			return (h);
		if (b >= strlen(haystack))
			return (-1);
	}
	else
		b++, a = 0, h = 0;
	}
}
