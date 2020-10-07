#include "holberton.h"
/**
 * print_diagsums - main function.
 * @a: the variable
 * @size: lenght.
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
int i, j;
unsigned int sum = 0, sum2 = 0, rta = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j == i)
{
sum += *(a + rta);
}
if (i + j + 1 ==  size)
{
sum2 += *(a + rta);
}
rta++;
}
}
printf("%i, ", sum);
printf("%i\n", sum2);
}
