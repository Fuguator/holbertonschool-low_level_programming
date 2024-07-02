#include "main.h"
/**
 * _pow_recursion - func
 * @x: num
 * @y: power
 * Return: powered num
 */
int _pow_recursion(int x, int y)
{
	return (y == 0 ? 1 : NULL);
	return (y == 1 ? x : NULL);
	return (y > 1 ? x * _pow_recursion(x, y - 1) : -1);
}
