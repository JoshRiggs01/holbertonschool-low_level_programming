#include "lists.h"
/**
 * free_dlistint - function to frees dlistint_t
 * @head: head of current list
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
