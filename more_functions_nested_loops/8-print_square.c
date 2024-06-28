#include "main.h"
/**
 * print_square - func
 * @size: variable
 */
void print_square(int size)
{
	int l;

	for (l = 0; l < size; l++)
		for (l = 0; l < size; l++)
			_putchar('#');
	_putchar('\n');
}
