#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 * Return: NULL.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash = NULL;
	unsigned long int cont = 0;
	char *separator = "";
	if (!ht)
		return;
	printf("{");
	while (cont < ht->size)
	{
		hash = ht->array[cont];
		while (hash)
		{
			printf("%s", separator);
			separator = ", ";
			if (hash->key)
				printf("'%s': '%s'", hash->key, hash->value);
			hash = hash->next;
		}
		cont++;
	}
	printf("}\n");
}
