#include "main.h"
/**
 * set_bit - func
 * @n: num
 * @index: index
 * Return: -1 if error, 1 ootherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
