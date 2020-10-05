#include "holberton.h"
/**
 * cap_string - function
 * @str: char
 * Return: str
 */
char *cap_string(char *str)
{
int x;
int count2;
char crt[13] = {' ', '\t', '\n', ',', '.', ';', '!', '?', '"', '(', ')',
'{', '}'};
for (x = 0; str[x] != '\0'; x++)
{
if (str[0] < 123 && str[0] > 96)
str[x] -= 32;
for (count2 = 0; count2 < 13; count2++)
{
if (str[x] == crt[count2] && (str[x + 1] < 123
&& str[x + 1] > 96))
{
str[x + 1] -= 32;
}
}
}
return (str);
}
