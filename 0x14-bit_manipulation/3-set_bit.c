#include "holberton.h"
/**
 * set_bit - Set the value of a bit in an index.
 * @n: receive pointer to a number
 * @index: index change
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
