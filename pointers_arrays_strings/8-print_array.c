#include <stdio.h>
/**
 * print_array - func
 * @a: array
 * @n: size oof array
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(", %d", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
