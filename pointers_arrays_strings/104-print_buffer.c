#include "main.h"
#include <stdio.h>
/**
 * print_line - func
 * @c: variable
 * @s: variable
 * @l: variable
 */
void print_line(char *c, int s, int l)
{
	int y, z;

	for (y = 0; y <= 9; y++)
	{
		y <= s ? printf("%02x", c[l * 10 + y]) : printf("  ");
		y % 2 ? putchar(' ') : 0;
	}
	for (z = 0; z <= s; z++)
	{
		if (c[l * 10 + z] > 31 && c[l * 10 + z] < 127)
			putchar(c[l * 10 + z])
		else
			putchar('.');
	}
}
/**
 * print_buffer - func
 * @b: variable
 * @size: variable
 */
void print_buffer(char *b, int size)
{
	int x;

	for (x = 0; x <= (size - 1) / 10 && size; x++)
	{
		printf("%08x: ", x * 10);
		x < size / 10 ? print_line(b, 9, x) : print_line(b, size % 10 - 1, x);
		putchar('\n');
	}
	size == 0 ? putchar('\n') : 0;
}
