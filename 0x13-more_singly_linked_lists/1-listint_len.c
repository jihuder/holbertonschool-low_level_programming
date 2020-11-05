#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: analyze header
 *
 * Return: elements
 */

size_t listint_len(const listint_t *h)
{
int x = 0;

if (h)
{
while (h)
{
x++;
h = h->next;
}
}
return (x);
}
