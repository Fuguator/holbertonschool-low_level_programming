#include "main.h"
/**
 * print_number - func
 * @n: variable
 */
void print_number(int n)
{
	if (n < 0 && n >= -9)
	{
		_putchar('-');
		_putchar('0' - n % 10);
	}
	else if (n < -9)
	{
		_putchar('-');
		print_number(n / -10);
		_putchar('0' - n % 10);
	}
	else
	{
		if (n > 9)
			print_number(n / 10);

		_putchar(n % 10 + '0');
	}
}
