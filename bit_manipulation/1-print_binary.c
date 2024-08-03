#include "main.h"
/**
 * ptint_num - func
 * @n: bit
 */
void print_num(unsigned long int n)
{
	if (!n)
		return;
	print_num(n >> 1);
	_putchar((n & 1) + '0');
}
/**
 * print_binary - func
 * @n: bit
 */
void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');
	print_num(n);
}
