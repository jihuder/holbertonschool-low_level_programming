#include "holberton.h"

/**
 * print_numbers - prints the string "holberton" from a character array
 * Return: 0 on success
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
