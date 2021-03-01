#include "holberton.h"

/**
 * _strcpy - check the code of holberton school students.
 * @src: the variable
 * @dest: another variable
 * Return: the ariable finished
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
