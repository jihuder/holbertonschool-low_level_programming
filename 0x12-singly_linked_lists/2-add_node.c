#include "lists.h"

/**
 * add_node-  that adds a new node at the beginning of a list_t list.
 * @head: is a pointer to a data type list_t
 * @str: is a pointer to a char type
 * Return:the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
int len;
list_t *new;

new = malloc(sizeof(list_t));
len = 0;

if (!new)
return (NULL);

new->str = strdup(str);

if (!(new->str))
{
free(new);
return (NULL);
}

for (len = 0; str[len]; len++)
;

new->len = len;
new->next = *head;
*head = new;

return (*head);
}
