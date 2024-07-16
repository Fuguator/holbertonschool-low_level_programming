#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - func
 * @separator: var
 * @n: var
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	char *a;
	va_list ap;

	va_start(ap, n);

	for (; i < (int)n; i++)
	{
		a = va_arg(ap, char *);

		a == NULL ? printf("(nil)") : printf("%s", a);
		(i < (int)n - 1 && separator) ? printf("%s", separator) : 0;
	}
	printf("\n");
	va_end(ap);
}
