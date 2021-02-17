#include "holberton.h"

/**
 * print_rev - print backwards
 * @s: variable printing variable
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	i--;

	while (i >= 0)
	{
		s--;
		i--;
		_putchar(*s);
	}
	_putchar('\n');
}
