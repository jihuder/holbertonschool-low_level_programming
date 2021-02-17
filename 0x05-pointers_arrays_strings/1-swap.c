#include "holberton.h"

/**
 * swap_int - change values
 * @a: variable
 * @b: variable
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
