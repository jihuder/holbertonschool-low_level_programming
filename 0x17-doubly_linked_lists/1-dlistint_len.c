#include "lists.h"
/**
 * dlistint_len - returns the items in the list
 * @h: receive list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
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
			node = node->next;
			con_tador++;
		}
	}
	return (con_tador);
}
