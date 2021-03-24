#include "list.h"
/**
 * print_listint - that prints all the elements of a listint_t list.
 * @h:parameter analizes header
 *
 * Return: nodes
 */


size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	if (h)
	{
		while (h)
		{
			printf("%i\n", h->n);
			i++;
			h = h->next;
		}
	}
	return (i);
}
