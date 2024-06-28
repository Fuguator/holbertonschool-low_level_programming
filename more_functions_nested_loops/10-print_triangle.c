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
		while (b++ < size)
		{
			space = size - b - 1;
			while (a++ < size)
			{
				if (space > a)
					_putchar(' ');
				else
					_putchar('#');
			}
			a = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
