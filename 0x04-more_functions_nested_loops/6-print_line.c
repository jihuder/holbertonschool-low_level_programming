#include "holberton.h"

/**
 * print_line - prints the string "Holberton" from a character array.
 *@n: this is the variable
 * Return: 0 on success.
 */

void print_line(int n)
{

	int j;


	if (n <= 0)
	{
		_putchar('\n');
		return;
	}


	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
