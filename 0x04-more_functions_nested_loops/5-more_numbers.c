#include "main.h"
/**
 * more_numbers - prints the range of 0-14
 * Return: Always (0)x
 *
 */
void more_numbers(void)
{
int x, y;

x = y = 0;
while (x < 10)
{
while (y <= 14)
{
if (y >= 10)
_putchar(y / 10 + '0');
_putchar(y % 10 + '0');
y++;
}
_putchar('\n');
y = 0;
x++;
}
}
