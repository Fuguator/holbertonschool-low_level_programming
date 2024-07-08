#include "main.h"
#include <stddef.h>
/**
 */
char *create_array(unsigned int size, char c)
{
	int a;
	
	c = malloc(sizeof(size));
	
	if (size != 0)
		return ("\n", c);
	else
		return (NULL);

