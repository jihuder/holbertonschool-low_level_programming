#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of the list.
 * @head: recive first node.
 * @n: recive data.
 * Return: new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *present = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (present)
	{
		while (present->next)
		{
			present = present->next;
		}
		new_node->prev = present;
		present->next = new_node;
	}
	else
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	return (new_node);
}
