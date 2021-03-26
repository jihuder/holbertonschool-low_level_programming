#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: receive a long integer.
 * @index: receive start index.
 * Return: value of the bit at the index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > sizeof(n) * 8 - 1) ? -1 : (int)(n >> index) & 1);
}
