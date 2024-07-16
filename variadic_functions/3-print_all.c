#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - func
 * @format: int/char/float/string
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *a;
	va_list ap;

	if (format)
	{
		for (; *(format + i); i++)
		{
			j = 1;

			switch (*(format + i--))
			{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
                        case 'l':
                                printf("%ld", va_arg(ap, long int));
                                break;
			case 's':
				a = va_arg(ap, char *);
				a != NULL ? printf("%s", a) : printf("(nil)");
				break;
			}
		}
		while (*(format + i) && j)
			printf(", ");

		j = 0;
	}
	printf("\n");
	va_end(ap);
}
