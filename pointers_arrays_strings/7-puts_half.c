#include "main.h"
/**
 * puts_half - func
 * @str: variable
 */
void puts_half(char *str)
{
	int a = 0, len;

	while (str[a] != '\0')
		a++;

	len = a / 2;

	while (a >= len)
		_putchar(str[a]);

	_putchar('\n');

}
