#include "holberton.h"
/**
 *print_alphabet_x10 - this program print the alphabet x10
 *
 *Return: (0) Always
 */
void print_alphabet_x10(void)
{
int a;
int b;
for (a = 0; a <= 9; a++)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
