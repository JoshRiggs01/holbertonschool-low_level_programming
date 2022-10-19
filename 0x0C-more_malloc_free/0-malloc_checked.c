#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocated memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
