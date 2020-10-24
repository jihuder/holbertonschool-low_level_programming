#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - memory allocation by means of malloc
 *
 * @b: memory allocation
 *
 * Return: should cause normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *jc;
jc = malloc(b);
if (jc == NULL)
{
exit(98);
}
return (jc);
}
