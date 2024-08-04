#include <stdio.h>
#include "main.h"
void f(void) __attribute__ ((constructor));
/**
 * f - func
 */
void f(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
