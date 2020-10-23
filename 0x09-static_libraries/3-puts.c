#include "holberton.h"
/**
 * _puts - print string and new line
 * @str: *variable
 *
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
