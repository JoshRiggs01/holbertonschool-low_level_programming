#include "holberton.h"
/**
 *
 *
 *
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar ("%d", n);
	}
	if (n == 0)
		_putchar ('0');

	if (n > 0)
		_putchar ("%d", n);
}
