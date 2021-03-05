#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - use malloc to allocate memory to the array
 * @nmemb: memory bytes
 * @size: size
 *
 * Return: Null if nmemb or size equals 0 or malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		mem[i] = 0;
	return (mem);
}
