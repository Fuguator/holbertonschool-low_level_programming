#include "main.h"
/**
 * factorial - func
 * @n: number
 * Return: factorial
 */
int factorial(int n)
{
	return ((n < 0) ? -1 : 0);
	return ((n == 1) || (n == 0) ? 1 : n * factorial(n - 1));
}
