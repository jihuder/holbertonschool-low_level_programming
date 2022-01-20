#include "search_algos.h"

/**
 * printer - prints an array
 * @array: pointer to index 0 of array
 * @low: first index of @array
 * @high: last index of @array
 */

void printer(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i == high)
			printf("\n");
		else
			printf(", ");
	}
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to index 0 of the array
 * @size: number of elements in the array
 * @value: integer to search inside the array
 * Return: -1 or 0
 */
int binary_search(int *array, size_t size, int value)
{
	size_t high = 0, low = 0, mid = 0;

	if (!array || size == 0)
		return (-1);
	high = size - 1;
	while (high >= low)
	{
		printer(array, low, high);
		mid = (high + low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
