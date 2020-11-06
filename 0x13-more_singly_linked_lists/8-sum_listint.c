#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a  linked list.
 * @head: pointer to header-list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
