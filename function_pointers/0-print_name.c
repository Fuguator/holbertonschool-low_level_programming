#include "main.h"
/**
 * print_name - func
 * @name: var
 * @f: func
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
