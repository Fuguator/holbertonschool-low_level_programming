#include "main.h"
/**
 * mult - func
 * @i: variable
 * @n: variable
 * Return: 1 if prime
 */
int mult(int i, int n)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (mult(i + 1, n));
}
/**
 * is_prime_number - func
 * @n: number
 * Return: prime num
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (mult(2, n));
	else
		return (0);
}
