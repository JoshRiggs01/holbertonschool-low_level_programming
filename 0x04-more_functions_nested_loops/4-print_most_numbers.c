#include "main.h"
/**
 * print_numbers - function that checks fo 1-9
 *
 * Return: Always (0)
 *
 */
void print_most_numbers(void)
{
int x = '0';
while (x <= '9')
{
if (x == '2' || x == '4')
{
x++;
continue;
}
_putchar(x);
x++;
}
_putchar('\n');
}