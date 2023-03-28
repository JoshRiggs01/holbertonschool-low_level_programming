#include "lists.h"
/**
 * print_dlistint_backward - Prints all the elements of a dlistint_t backward.
 * @h: A pointer to the tail of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count;

	if (h == NULL)
		return (0);

	current = h;
	while (current->next != NULL)
		current = current->next;

	count = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->prev;
		count++;
	}

	return (count);
}
