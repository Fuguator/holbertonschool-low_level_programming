#include "main.h"
/**
 * print_square - func
 * @size: variable
 */
void print_square(int size)
{
	int l, w;

	for (l = 0; l < size; l++)
	{
		for (w = 0; w < size; w++)
			_putchar('#');
		_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
