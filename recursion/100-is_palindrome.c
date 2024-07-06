#include "main.h"
#include <string.h>
/**
 */
int len(char *s)
{
	int l = 0;

	while (*s)
		l++;

	return (l);

}

int is_palindrome(char *s)
{
	int i = 0, j = len(*s);

	if (i++ < j--)
	{
		if (s[i] == s[j])
			return (1);
		else
			return (0);
	}
	else
		return (1);
}
