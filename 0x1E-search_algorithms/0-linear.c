#include "search_algos.h"

/**
 * linear_search - algorithm: searches for value in an array of integers
 * @array:  pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: value to seach for
 * Return: index to the first occurrency of the value in the array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
