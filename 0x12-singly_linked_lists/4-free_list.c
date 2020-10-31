#include "lists.h"

/**
 * free_list - function  frees a list_t list.
 * @head: pointer that receives a list of addresses
 * Return: return a type of data void
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
