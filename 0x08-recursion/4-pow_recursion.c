#include "main.h"
/**
 * _pow_recursion - fuction to return x to the power of y
 * @x: base number
 * @y: exponent for base number
 * Return: x^y if y is less than 0 the -1 if y==0 then 1 if else x^y=z
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
