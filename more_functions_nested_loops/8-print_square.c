#include "main.h"
/**
 * print_square - func
 * @size: variable
 */
void print_square(int size)
{
	int l, w;

	if (size >= 0)
	{
		for (l = 0; l < size; l++)
		{
			for (w = 0; w < (size - 1); w++)
				_putchar('#');
			_putchar('\n');
			_putchar('#');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
