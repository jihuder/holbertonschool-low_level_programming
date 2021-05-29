#include "hash_tables.h"

/**
 * hash_table_set - add a hash table.
 * @ht: receive address from a till table
 * @key: add the key
 * @value: Key value
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	copy = ht->array[index];
	while (copy)
	{
		if (strcmp(copy->key, key) == 0)
		{
			copy->value = strdup(value);
			return (1);
		}
		copy = copy->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
