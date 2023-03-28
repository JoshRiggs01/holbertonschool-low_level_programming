#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data  of a dlistint_t linked list.
 * @head: pointer to the head node of the linked list.
 *
 * Return: sum of all the data (n) of the linked list or 0 if the list is emp
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
