#include "function+pointers.h"
/**
 * array_iterator - func
 * @array: var
 * @size: var
 * @action: func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action != NULL || size != NULL)
		for (; i < size; i++)
			(*action)(*(array + (int)i));
}
