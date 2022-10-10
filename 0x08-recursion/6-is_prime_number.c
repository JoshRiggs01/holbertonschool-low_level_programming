#include "main.h"
/**
 * check - checks number to see if prime
 * @i: factoring
 * @y: guess at prime number
 * Return: 1 if prime and 0 if not
 */
int check(int i, int y)
{
	if (y < 2 || y % i == 0)
		return (0);
	else if (i > y / 2)
		return (1);
	else
		return (check(i + 1, y));
}
/**
 * is_prime_number - function to check if number is prime
 * @n: number to check
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
