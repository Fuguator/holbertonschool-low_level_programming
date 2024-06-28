#include "main.h"
/**
 * print_number - func
 * @n: variable
 */
void print_number(int n)
{
	int a = n;

	if (a > 9)
		print_number(a / 10);
	else if (a < 0)
	{
		_putchar('-');
		a = -a;
	}
	else
		_putchar(a + '0');
	_putchar(a % 10 + '0');

}
