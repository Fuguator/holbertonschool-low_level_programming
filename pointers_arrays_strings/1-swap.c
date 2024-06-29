#include "main.h"
/**
 * swap_int - func
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
