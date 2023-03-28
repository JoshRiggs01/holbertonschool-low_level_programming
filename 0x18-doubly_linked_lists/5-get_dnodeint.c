#include "lists.h"
/**
 * get_dnodeint_at_index - node at index
 * @head: head of dlistint
 * @index: index of the node
 *
 * Return: current pointer to head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currentpointertohead = head;
	unsigned int count = 0;

	while (currentpointertohead != NULL && count < index)
	{
		currentpointertohead = currentpointertohead->next;
		count++;
	}
	if (count < index)
	{
		return (NULL);
	}
	else
	{
		return (currentpointertohead);
	}
}
