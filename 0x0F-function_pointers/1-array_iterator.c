#include "function_pointers.h"
/**
 * array_iterator - performs function on array
 * @array: array
 * @size: size_t
 * @action: function to be performed
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
