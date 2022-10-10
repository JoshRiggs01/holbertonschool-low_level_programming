#include "main.h"
/**
 * _sqrt - checks for sqrt of y
 * @x: guess sqrt
 * @y: number to sqrt
 * Return: -1 of sqrt of y
 */
int _sqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (_sqrt(x + 1, y));
}

/**
 * _sqrt_recursion - returns natural swrt of number
 * @n: given number to find sqrt of
 *  Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
