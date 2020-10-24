#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - join two text strings
 * @s1: receives the first text string
 * @s2: receives the second text string
 * Return: Null on invalid str - str:pointer to new array
 *
 */

char *str_concat(char *s1, char *s2)
{
char *str;
unsigned int x, y;
unsigned int len1 = 0, len2 = 0;

if (s1 != NULL)
{
while (s1[len1])
len1++;
}

if (s2 != NULL)
{
while (s2[len2])
len2++;
}

str = malloc((sizeof(char) * (len1 + len2))+1);

if (str == NULL)
{
return (NULL);
}
for (x = 0; x < len1; x++)
{
str[x] = s1[x];
}
for (y = 0; y < len2; y++)
{
str[x] = s2[y];
x++;
}
str[x] = '\0';
return (str);
}
