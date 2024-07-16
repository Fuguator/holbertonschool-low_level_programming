#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - func
 * @n: var
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = 0, sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (; i < (int)n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
