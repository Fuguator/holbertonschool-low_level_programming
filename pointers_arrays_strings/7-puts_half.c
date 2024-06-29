#include "main.h"
/**
 * puts_half - func
 * @str: variable
 */
void puts_half(char *str)
{
	int len = 0, a, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		for (a = len / 2; str[a] != '\0'; a++)
			_putchar(str[a]);
	else
		for (n = (len - 1) / 2; n < len - 1; n++)
			_putchar(str[n + 1]);

	_putchar('\n');

}
