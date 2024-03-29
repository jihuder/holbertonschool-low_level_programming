#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need.
 * to flip to get from one number to another.
 * @n: base number entry.
 * @m: number to transform.
 * Return: the number of bit transformations needed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, result = 0;

	i = sizeof(n) * 8 - 1;
	while (i >= 0)
	{

		i--;
		if (((n ^ m) >> i) & 1)
			result++;
	}
	return (result);
}
