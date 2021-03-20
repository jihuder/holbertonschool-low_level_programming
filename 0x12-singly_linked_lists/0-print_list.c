#include "lists.h"

/**
 * print_list -imprint list.
 * @h: It enters as a parameter a list.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");

		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
