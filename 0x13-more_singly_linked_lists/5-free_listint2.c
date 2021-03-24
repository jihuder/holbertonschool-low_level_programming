#include "lists.h"
/**
 * free_listint2 - that frees a listint_t list.
 * @head: pointer analyzes the list.
 */

void free_listint2(listint_t **head)
{
	linstint_t *temp;

	if (head)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
	head = NULL;
}
