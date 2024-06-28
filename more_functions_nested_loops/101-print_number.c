#include "main.h"
/**
 * print_number - func
 * @n: variable
 */
void print_number(int n)
{
	unsigned int a = n;

	if (a > 9)
	{
		print_number(num / 10);
	}
	else if ((a <= 9) && (a >= 0))
		_putchar(a + '0');
	else
	{
		_putchar('-');
		a = -a;
	}
	_putchar(a % 10 + '0');

}
