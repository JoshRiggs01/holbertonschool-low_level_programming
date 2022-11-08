#include "lists.h"

/**
 * list_len - prints number of elements in linked list
 *
 * @h: pointer to string
 *
 * Return: counter
 */
size_t list_len(const list_t *h)
{
	int c;

	c = 0;
	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
