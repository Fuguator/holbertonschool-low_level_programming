#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	while (i < size)
	{
		c[i] = '*';
		i++;
	}
}
