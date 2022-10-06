#include "main.h"
/**
 * _print_rev_recursion - function to print string through recusrion
 * @s: string to take in and pass through if statement
 * Return: recusion
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
