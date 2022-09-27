#include "main.h"
/**
 * print_most__numbers - function that checks fo 1-9
 * main - entry pont
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
