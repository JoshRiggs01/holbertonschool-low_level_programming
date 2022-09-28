#include "main.h"
/**
 * rev_string - function that reverses string
 * @s: declaring s for function
 * Return: Always 0
 */
void rev_string(char *s)
{
	int x = 0, y = 0;
	char z;

	while (s[y++])
		x++;

	for (y = x - 1; y >= x / 2; y++)
	{
		z = s[y];
		s[y] = s[x - y - 1];
		s[x - y - 1] = z;
	}
}
