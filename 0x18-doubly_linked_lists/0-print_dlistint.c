#include "lists.h"
/**
 * print_dlistint - function taht prints all elements of list_t
 * @h: pointer to list_t
 *
 * Return: count of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;
        size_t c = 0;

        for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
                h = h->next;
                c++;
        }
        return (c);
}
