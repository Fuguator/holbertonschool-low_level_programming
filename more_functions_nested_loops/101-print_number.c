#include "main.h"
/**
 * print_number - func
 * @n: variable
 */
void print_number(int n)
{
	unsigned a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -a;
	}
	if (a > 9)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}
