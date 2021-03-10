#include "function_pointers.h"

/**
 * array_iterator - iteration to print the name
 * @array:  array of character pointers
 * @size: receives the number of times to be able to do the iteration
 * @action: function to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action)
	{
		for (x = 0; x < size; x++)
			(*action)(array[x]);
	}
}
