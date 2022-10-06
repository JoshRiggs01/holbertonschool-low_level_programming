#include "main.h"
/**
 * _puts_recursion - function to print string through recusrion
 * @s: string to take in and pass through if statement
 * Return: recusion
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
		return;
	}
	_putchar('\n');
}
