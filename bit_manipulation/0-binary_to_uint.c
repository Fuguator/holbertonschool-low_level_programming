#include "main.h"
/**
 * binary_to_uint - func
 * @b: binary number
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, len = 0, res = 0;

	if (!b)
		return (0);
	while (*b)
		len++;
	for (; i < len; i++)
	{
		if (*(b + i) > '1' || *(b + i) < '0')
			return (0);
		res = (res << 1) + (*(b + i) - '0');
	}
	return (res);
}
