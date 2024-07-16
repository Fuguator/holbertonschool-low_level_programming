#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - func
 * @separator: var
 * @n: var
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	va_list ap;

	va_start(ap, n);
	for (; i < (int)n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i <= (int)n && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end ap;
}
