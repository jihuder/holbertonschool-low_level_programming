#include "holberton.h"
/**
 * print_chessboard - print a chessboard.
 * @a: matriz
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
int i, f, g;
g = sizeof(a);
for (i = 0; i < g ; i++)
{
for (f = 0; f < g; f++)
{
_putchar(a[i][f]);
}
_putchar('\n');
}
}
