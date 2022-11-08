#include "lists.h"
/**
 * add_node - adds a node to beginning of list
 * @head: double pointer to the lists
 * @str: new string added to node.
 *
 * Return: the address of new node, Null is fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int count, i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = i;
	new->str = strdup(str);
	new->next = *head;
	(*head) = new;

	return (new);
}
