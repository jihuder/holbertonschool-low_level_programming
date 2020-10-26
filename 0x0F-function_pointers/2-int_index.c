#include "function_pointers.h"

/**
 * int_index - search number.
 * @array: pointer Data to analyze
 * @size: Number of times to iterate
 * @cmp: Compare values
 * Return: -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
int x = 0;

if (size <= 0)
return (-1);
if (array && cmp)
{
for (; x < size; x++)
{
if (cmp(array[x]) != 0)
return (x);
}
}
return (-1);
}
