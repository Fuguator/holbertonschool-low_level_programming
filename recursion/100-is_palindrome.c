#include "main.h"
#include <string.h>
/**
 */
int len(char *s)
{
	int l = 0;

	while (*s)
		l++;

	return (l + 1);

}

int is_palindrome(char *s)
{
	int i = 0, j = len(*s) - 1;

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
