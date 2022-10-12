#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy a string to new space in mem
 * @str: string to copy
 *
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	unsigned int x, y;
		char *z;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		;

	x++;
	z = malloc(x * sizeof(char));
	if (z == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < x; y++)
	{
		z[y] = str[y];
	}
	return (z);
}
