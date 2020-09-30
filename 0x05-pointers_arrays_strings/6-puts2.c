#include "holberton.h"
/**
 * puts2- print Print every 2 characters
 * @str: variables - char pointer to string
 * Return: void.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
