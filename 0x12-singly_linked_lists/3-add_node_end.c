#include "lists.h"

/**
 * add_node_end - que añade un nuevo nodo al final de una lista_t.
 * @head: list_t address
 * @str: a pointer to a char
 * Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new;

	if (!(*head)) || !((*head)->next))
	{
		new = malloc(sizeof(list_t));

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
		new->next = NULL;

		if (!(*head))
			(*head) = new;
		else
			(*head)->next = new;

		return (new);


	}

return (add_node_end(&(*head)->next, str));
}
