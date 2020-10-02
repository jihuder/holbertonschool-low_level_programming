#include "holberton.h"
/**
 * puts_half - print Print every 2 odd characters
 * @str: variables - char pointer to string
 * Return: void.
 */
void puts_half(char *str)
{
int i = 0;
int div ;
for (i = 0; str[i] != '\0';i++)
{
i++;
div = i / 2;
div = i - div;
}
while(str[div] != '\0')
{
div++;
_putchar(str[div]);
}
_putchar('\n');
}
