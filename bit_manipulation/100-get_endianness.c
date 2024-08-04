#include "main.h"
/**
 * get_endianness - func
 * Return: be or le
 */
int get_endianness(void)
{
	int i = 1;

	return ((*(char *) & i) + 48);
}
