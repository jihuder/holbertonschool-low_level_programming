#include "holberton.h"
/**
 * print_diagonal - prints the string "Holberton" from a character array.
 *@n: this is the variable
 * Return: 0 on success.
 */
void print_diagonal(int n)
{
int j;
int d;

if (n <= 0)
{
_putchar('\n');
return;
}

for (j = 0; j < n; j++)
{
for (d = 0; d < j; d++)
{
_putchar(' ');
}

_putchar(92);
_putchar('\n');
}

}
