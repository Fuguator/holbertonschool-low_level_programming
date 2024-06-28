#include "main.h"
/**
 * print_triangle - func
 * @size: variable
 */
void print_triangle(int size)
{
	int h, w;
	
	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 1; w <= h; w++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
