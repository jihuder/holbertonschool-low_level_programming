
#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - funcion copy text
 * @str: gets the text string
 *
 * Return:  Null on  invalid str - j: copy of the pointing
 *
 */

char *_strdup(char *str)
{

	char *jx;
	int i = 0;
	int p = 0;


	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	jx = malloc((sizeof(char) * i) + 1);

	if (jx == NULL)
	{
		return (NULL);
	}

	for (p = 0; p < i; p++)
	{

		jx[p] = str[p];
	}
	return (jx);
}
