#include "main.h"
/**
 * rev_string - function that reverses string
 * @s: declaring s for function
 * Return: Always 0
 */
void rev_string(char *s)
{
	int x, y, b;
	char *a, z;

	a = s;

	while (s[y] != '\0')
	{
		y++;
	}

	for (b = 1; b < y; b++)
	{
		a++;
	}

	for (x = 0; x < (y / 2); x++)
	{
		z = s[x];
		s[x] = *a;
		*a = z;
		a--;
	}
}
