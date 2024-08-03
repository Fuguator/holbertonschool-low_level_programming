#include "main.h"
/**
 * flip_bits - func
 * @n: num
 * @m: num
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, xor = n ^ m;

	while (xor)
	{
		if (1 & xor)
			i++;
		xor >>= 1;
	}
	return (i);
}
