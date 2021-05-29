#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 *
 * @key: pre hash value.
 * @size: Size of the hash table.
 *
 * Return: Index hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
