#include "main.h"
/**
 * clear_bit - func
 * @n: num
 * @index: index
 * Return: -1 if error, 1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n &= (unsigned long int)(~(1 << index));
	return (1);
}
