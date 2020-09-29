#include "holberton.h"
/**
 * print_rev - print backwards
 * @s: variable printing variable
 *
 */
void print_rev(char *s)
{
int i;
while (*s != '\0')
{
i++;
s++;
}
while (i > 0)
{
s--;
i--;
putchar(*s);
}
putchar('\n');
}
