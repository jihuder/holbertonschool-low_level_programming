#include "holberton.h"

/**
 * _puts_recursion - function
 * @s: the address of memory to print.
 * Return: s.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
