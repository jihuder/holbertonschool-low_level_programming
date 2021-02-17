#include "holberton.h"

/**
 * _strlen - return string length
 * @s: varible string
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
