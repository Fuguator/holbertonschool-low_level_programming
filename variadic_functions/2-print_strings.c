#include "variadic_functions.h"
#include <stdarg.h>
/**
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	char *a;
	va_list ap;

	if (n == 0)
		return (NULL);

	va_start(ap, n);

	for (; i < (int)n; i++)
	{
		s = va_arg(ap, char *);

		s == NULL ? printf("(nil)") : printf("%s, s");
		(i < (int)n - 1 && separator) ? printf("%s", separator) : 0; 
	}
	printf("\n");
	va_end(ap);
}
