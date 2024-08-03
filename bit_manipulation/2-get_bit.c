#include "main.h"
/**
 * get_bit - func
 * @n: num
 * @index: index
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (1 & (n >> index));
}
