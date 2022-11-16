#include "lists.h"
/**
 * free_dlistint - free a list
 * #head: list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *strt, *chk;

	strt = head;
	while (strt != NULL)
	{
		chk = strt->next;
		free(strt);
		strt = chk;
	}
}
