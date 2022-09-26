#include "main.h"
/**
 * print_diagnal - print \ across terminal
 *@n: number of line to print
 * Return: Always 0
 */
void print_diagonal(int n)
{
int i, x;

if (n > 0)
{
for (x = 0; x <= n; x++)
{
for (i = 1; i <= x; i++)
{
if (i != 1)
_putchar(' ');
if (i == x)
{
_putchar('\\');
_putchar('\n');
}
}
}
}
else
_putchar('\n');
}
