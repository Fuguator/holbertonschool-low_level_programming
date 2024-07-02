#include "main.h"
/**
 * _puts_recursion - func
 * @s: variable
 */
void _puts_recursion(char *s)
{
	if (s[i] != '\n')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
