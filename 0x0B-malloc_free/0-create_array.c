#include "holberton.h"
/**
 * create_array - main funcion
 * @size : size of the arrangement
 * @c : pre-determined bytes
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	str = malloc(sizeof(str) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned int i = 0;

		for (i = 0; i < size; i++)
	{
			str[i] = c;
	}
	return (str);
}
}
