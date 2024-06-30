#include "main.h"
/**
 * reverse_array - func
 * @a: variable
 * @n: variable
 */
void reverse_array(int *a, int n)
{
	int x, rev;

	for (x = 0; x < (n / 2); x++)
	{
		rev = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = rev;
	}
}
