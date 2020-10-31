#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: enter a data type list_t
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
size_t i;

i = 1;

if (!h)
return (0);
if ((*h).next)
i += list_len((*h).next);

return (i);
}
