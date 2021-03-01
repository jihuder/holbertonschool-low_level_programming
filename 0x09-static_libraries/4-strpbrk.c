#include "holberton.h"

/**
 * *_strpbrk - main function.
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 * Return: s.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
