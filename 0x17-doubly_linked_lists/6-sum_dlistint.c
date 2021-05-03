#include "lists.h"
/**
 * sum_dlistint - return sum of all data
 * @head: receives first node
 * Return: return sum - if the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int suma = 0;
	dlistint_t *present = head;

	while (present)
	{
		suma += present->n;
		present = present->next;
	}
	return (suma);
}
