#include "holberton.h"
/**
 * clear_bit - sets the value of a 0 in an index.
 * @n: pointer to number.
 * @index: changing index.
 * Return: 1 on success, -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
