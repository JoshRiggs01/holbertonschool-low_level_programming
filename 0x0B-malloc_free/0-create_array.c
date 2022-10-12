#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of chars
 * @size: size of array
 * @c: char to int array
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	if (size == 0)
		return (NULL);
	y = malloc(size * sizeof(char));
	if (y == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		y[x] = c;
	}
	return (y);
}
