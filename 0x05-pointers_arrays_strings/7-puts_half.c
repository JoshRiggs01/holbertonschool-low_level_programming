#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: to be printed.
 */
void puts_half(char *str)
{
	int x = 0, y = 0, n;

	while (str[x++])
		y++;

	if ((y % 2) == 0)
		n = y / 2;

	else
		n = (y + 1) / 2;

	for (x = n; x < y; x++)
		_putchar(str[x]);

	_putchar('\n');
}
