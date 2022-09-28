#include "main.h"
/**
 * print_most__numbers - function that checks fo 1-9
 * main - entry pont
 * Return: Always (0)
 *
 */
void print_most_numbers(void)
{
 int x;
 for (x = '0'; x <= '9'; x++)
 {
 if (!(x == '2' || x == '4'))
 _putchar(x);
 }
 _putchar('\n');
 }
