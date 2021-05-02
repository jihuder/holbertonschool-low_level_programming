#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a list.
 * @head: receive list.
 * @n: recive data.
 * Return: new nodo, or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	else
	{
		*head = new_node;
		new_node->next = NULL;
	}
	return (new_node);
}
