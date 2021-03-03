#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - concatenates the arguments of a program
 * @ac: recieves arguments to tell
 * @av: pointing at the array
 * Return: returns NULL if ac == 0 or av == NULL
 * to new array
 *
 */

char *argstostr(int ac, char **av)
{
	char *arr;
	int x = 0, y, len = 0, p = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (av[x])
	{
		y = 0;
		while (av[x][y])
		{
			len++;
			y++;
		}
		x++;
	}

	arr = malloc(len + ac + 1);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			arr[p] = av[x][y];
			p++;
		}
		arr[p] = '\n';
		p++;
	}
	arr[p] = '\0';
	return (arr);
}
