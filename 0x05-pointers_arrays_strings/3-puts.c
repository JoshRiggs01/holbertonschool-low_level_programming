#include "main.h"
/**
 * _puts - function- prints string
 * @str: declaring str for puts
 * Return: Always 0
 */
void _puts(char *str)

{
	int x;
	for (x = 0; str[x] != 0; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
