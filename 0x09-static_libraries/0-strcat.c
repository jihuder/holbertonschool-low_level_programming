#include "holberton.h"

/**
 * *_strcat - check the code of holberton school students
 * @dest: thi is variable 1
 * @src: this is variable 2
 * Return: always 0.
 */

char *_strcat(char *dest, char *src)
{
	int count1;
	int count2;
	for (count1 = 0; dest[count1] != '\0'; count1++)
		;
	for (count2 = 0; src[count2] != '\0'; count2++)
	{
		dest[count1 + count2] = src[count2];
	}
	return (dest);
}
