#include <stdio.h>
#include <stdlib.h>
/**
 * main - Alphabet printing
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int letra = 97;
while (letra < 122)
{
putchar(letra);
letra++;
}
putchar('\n');
return (0);
}
