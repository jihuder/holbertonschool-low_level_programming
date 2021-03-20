#include "lists.h"

/**
 * free_list - function free a list_t list.
 * @head: pointer that receive a list of addressess
 * Return:return a type of data void
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	if (head->next)
		free_list(head->next);

	free(head->str);
	free(head);
}
