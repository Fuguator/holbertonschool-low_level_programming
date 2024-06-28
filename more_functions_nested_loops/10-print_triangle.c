#include "main.h"
/**
 * print_triangle - func
 * @size: variable
 */
void print_triangle(int size)
{
	int a, b = 0, space;

	if (size > 0)
	{
		while (y++ < size)
		{
			space = size - y - 1;
			while (x++ < size)
			{
				if (space > x)
					_putchar(' ');
				else
					_putchar('#');
			}
			x = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
