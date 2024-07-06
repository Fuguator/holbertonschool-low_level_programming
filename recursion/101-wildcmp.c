#include "main.h"
/**
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\n' && *s2 == '\n')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return wildcmp(s1, s2 + 1) || (s1 != '\0' && wildcmp(s1 + 1, s2));
}
