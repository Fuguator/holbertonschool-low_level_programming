#include "main.h"
/**
 * factorial - func
 * @n: number
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else
		return ((n == 1) || (n == 0) ? 1 : n * factorial(n - 1));
}
