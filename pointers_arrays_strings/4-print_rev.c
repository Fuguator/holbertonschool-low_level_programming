#include "main.h"
/**
 */
void print_rev(char *s)
{
	int a = 0, b, len;

	while (s[a] != '\0')
		a++;

	for (b = len - 1; b >= 0; b--)
		_putchar(s[b]);

	_putchar('\n');

}
