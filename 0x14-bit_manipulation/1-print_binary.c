#include "holberton.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n: integer to convert
 */

void print_binary(unsigned long int n)
{
	unsigned long int pasa;
	int i;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (pasa = n, i = 0; (pasa >>= 1) > 0; i++)
		;
	for (; i >= 0; i--)
	{
		((n >> i) & 1) ? printf("1") : printf("0");
	}
}
