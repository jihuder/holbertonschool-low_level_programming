#include "holberton.h"
/**
 * *_strncat - check the code of holberton school students
 * @dest: this is accountant
 * @src: this is the second accountant
 * @n: this is the third accountant
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int b;
for (i = 0; *(dest + i) != '\0'; i++)
;
for (b = 0; b < n && src[b] != '\0'; b++)
{
dest[i + b] = src[b];
}
return (dest);
}
