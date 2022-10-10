#include "main.h"
/**
 * factorial - function that does factorial of given number using recursion
 * @n: number to be taken in to factorial out.
 * Return: -1 if n is less than 0 otherwise will reutnr factorial of n.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
