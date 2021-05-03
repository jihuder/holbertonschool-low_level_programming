#include "lists.h"
/**
 * delete_dnodeint_at_index - removes a node in the index of a linked list.
 * @head: receives firts node.
 * @index: position of the node.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *present, *node;
	unsigned int i = 0;

	if (!(*head))
	{
		return (-1);
	}
	present = *head;

	if (index == 0 && (*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}

	else if (index == 0)
	{
		*head = present->next;
		(*head)->prev = NULL;
		free(present);
		return (1);
	}
	while (i < index - 1)
	{
		present = present->next;
		if (present == NULL)
			return (-1);
		i++;
	}
	node = present->next->next;
	free(present->next);
	present->next = node;

	if (present->next)
		present->next->prev = present;

	return (1);
}
