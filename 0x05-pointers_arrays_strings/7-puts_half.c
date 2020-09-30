#include "holberton.h"
/**
 * puts_half - print Print every 2 odd characters
 * @str: variables - char pointer to string
 * Return: void.
 */
void puts_half(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 1)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
