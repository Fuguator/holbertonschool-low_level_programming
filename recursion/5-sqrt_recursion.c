#include "main.h"
/**
 * root - func
 * @n: variable
 * @i: variable
 * Return: root
 */
int root(int n, int i)
{
	if (i * i == n)
		return (i);
	return (i * i <= n ? root(n, i + 1) : -1);
}
/**
 * _sqrt_recursion - func
 * @n: variable
 * Return: root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (root(n, 2));
}
