#include "lists.h"

/**
 * pop_listint - deletes the head node of a  linke
 * @head: receives header pointer
 *
 * Return: head-list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int tempint = 0;

	temp = *head;
	if (temp)
	{
		tempint = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (tempint);
}
