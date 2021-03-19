#include "lists.h"

/**
 * print_list -imprint list.
 * @h: It enters as a parameter a list.
 * Return : The number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;
	if (h != NULL)
	{
		while(h != NULL)
		{
			if(h->str == NULL)
				printf("[0] (nill)\n");
			else
				printf("[%d] %s\n" h->len, h-str);

			h = h->next;
			n++;
		}
		return (n);
	}
	return (0);
}
