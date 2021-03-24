#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the head of the linked list.
 * @idx: the index to insert the new node.
 * @n: the vlue of the new node.
 * Return: new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnodo, *current = *head;
	unsigned int i = 0;

	newnodo = malloc(sizeof(listint_t));
	if (!newnodo)
		return (NULL);

	newnodo->n = n;
	if (idx == 0)
	{
		newnodo->next = current;
		*head = newnodo;
		return (newnodo);
	}

	while (current)
	{
		if (i == idx - 1)
		{
			newnodo->next = current->next;
			current->next = newnodo;
			return (newnodo);
		}
		current = current->next, i++;
	}
	return (NULL);
}
