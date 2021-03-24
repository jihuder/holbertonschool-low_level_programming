#include "lists.h"
/**
 * free_listint - that frees a listint_t list.
 * @head: pointer analyzes the list.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
