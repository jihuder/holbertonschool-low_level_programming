#include "lists.h"
/**
 * print_dlistint - Prints all the data inside the nodes of a DDL.
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	int con_tador = 0;

	if (!h)
	{
		return (con_tador);
	}
	else
	{
		while (node)
		{
			printf("%i\n", node->n);
			node = node->next;
			con_tador++;
		}
	}
	return (con_tador);
}
