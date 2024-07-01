#include "main.h"
/**
* print_diagsums - func
* @a:matrix
* @size: variable
*/
void print_diagsums(int *a, int size)
{
	int i, dg1 = 0, dg2 = 0;

	for (i = 0; i < size; i++)
		dg1 += a[i], a += size;

	a -= size;

	for (i = 0; i < size; i++)
		dg2 += a[i], a -= size;

	printf("%d, %d\n", dg1, dg2);
}
