#include "main.h"
/**
 * _puts - func
 * @str: pointer
 */
void _puts(char *str)
{
	int a = 0;

	while (a++ != '\0')
		_putchar(str[a]);
	_putchar('\n');
}
