#include "lists.h"
/**
 * get_dnodeint_at_index - returns a node from a linked list.
 * @head: receives first node.
 * @index: receive node search.
 * Return: if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *present = head;

	while (index > 0)
	{
		present = present->next;
		index--;
		if (!present)
		{
			return (NULL);
		}
	}
	return (present);
}
