#include "main.h"
/**
 * print_times_table - func
 * @n: variable
 */
void print_times_table(int n)
{
	int a, mult, res;

	if (n >= 0 && n <= 15)
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				res = a * mult;
				if (res <= 9)
					_putchar(' ');
				else if (res <= 99)
					putchar(' ');
				if (res > 99)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10)) % 10 + '0');
					else if (res > 9 && res <= 99)
						_putchar((prod / 10) + '0');
					_putchar((res % 10) + '0');
				}
			}
		}
}
