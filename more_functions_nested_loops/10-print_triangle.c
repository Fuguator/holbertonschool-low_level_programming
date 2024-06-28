#include "main.h"
/**
 * print_triangle - func
 * @size: variable
 */
void print_triangle(int size)
{
	int w, l = 0, space;

	if (size > 0)
	{
		while (l < size)
		{
			space = size - l - 1;
			while (w < size)
			{
				if (space > w)
					_putchar(' ');
				else
					_putchar('#');
				w++;
			}
			l++;
			w = 0;

			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
