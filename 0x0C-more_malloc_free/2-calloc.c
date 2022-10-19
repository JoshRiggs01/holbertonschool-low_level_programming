#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocated memory for arr
 * @nmemb: number of elements in array
 * @size: size in bytes of elemtes
 *
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (y = 0; y < (nmemb * size); y++)
		x[y] = 0;
	return (x);
}
