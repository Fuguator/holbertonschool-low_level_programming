#include "main.h"
/**
 * print_last_digit - func
 * @n: variable
 * Return: a
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
		a *= -1;
	_putchar(a + '0');
	return (a);
}
