#include "lists.h"
/**
 * free_dlistint - releases list .
 * @head: receives first node.
 * Return: NULL.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *backup = NULL;

	while (current)
	{
		backup = current;
		current = current->next;
		free(backup);
	}
}
