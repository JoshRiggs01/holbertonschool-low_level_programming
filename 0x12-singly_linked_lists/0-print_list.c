#include "lists.h"
/**
 * print_list - function taht prints all elements of list_t
 * @h: pointer to list_t
 *
 * Return: count of nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}
	return (c);
}
