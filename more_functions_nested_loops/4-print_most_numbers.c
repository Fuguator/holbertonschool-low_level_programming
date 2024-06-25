#include "main.h"
/**
 * print_most_numbers - func
 */
void print_most_numbers(void)
{
	int a = '0';

	while (a <= '9')
		if (a != '2' && a != '4')
			_putchar(a);
	_putchar('\n');
}
