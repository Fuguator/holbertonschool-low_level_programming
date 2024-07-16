#include "function_pointers.h"
/**
 * int_index - func
 * @array: var
 * @size: var
 * @cmp: func
 * Return: -1 or i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == 0 || cmp == 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
