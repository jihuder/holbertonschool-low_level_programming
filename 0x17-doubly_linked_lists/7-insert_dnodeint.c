#include "lists.h"
/**
 * insert_dnodeint_at_index - that inserts a new node at a given position.
 * @h: receives firts node.
 * @idx: new position.
 * @n: receive data.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *present = *h, *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (present)
	{
		if (i == idx - 1 && present->next != NULL)
		{
			new->n = n;
			new->next = present->next;
			new->prev = present;
			present->next->prev = new;
			present->next = new;
		}
		else if (i == idx - 1 && present->next == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
		present = present->next;
		i++;
	}
	if (idx > i)
	{
		return (NULL);
	}
	return (new);
}
