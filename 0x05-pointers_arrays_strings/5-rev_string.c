#include "holberton.h"

/**
 * rev_string - print backwards
 * @s: variables - char pointer to string
 *
 */

void rev_string(char *s)
{
	int indice;
	int var1;
	char ubicacion0;
	char *ubica1;
	char *ubica2;

	indice = 0;

	for (; *s != '\0'; s++)
		indice++;
	if (indice % 2 != 0)
		var1 = (indice - 1) / 2;
	else
		var1 = indice / 2;
	for (s = s - indice; var1 > 0; var1--)
	{
		ubica1 = s + var1 - 1;
		ubica2 = s + indice - var1;
		ubicacion0 = *ubica1;
		*ubica1 = *ubica2;
		*ubica2 = ubicacion0;
	}
}
