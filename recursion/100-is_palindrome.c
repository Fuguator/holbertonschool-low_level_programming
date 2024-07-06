#include "main.h"
#include <string.h>
/**
 */
int is_palindrome(char *s)
{
	int i = 0, j = strlen(s) - 1;

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
