#include "lists.h"
/**
 * dlistint_len - function to return number of elements in a linked list
 * @h: h start of elemnts to count
 *
 * Return: count of elements in linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
