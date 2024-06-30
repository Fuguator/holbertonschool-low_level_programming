#include "main.h"
/**
 * *string_toupper - func
 * @res: result
 * Return: res
 */
char *string_toupper(char *res)
{
	int a;

	for (a = 0; res[a] != '\0'; a++)
		if (res[a] > 96 && res[a] < 123)
			res[a] -= 32;

	return (res);
}
