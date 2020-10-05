#include "holberton.h"
/**
 * reverse_array - check the code of holberton school students
 * @a: this is the first accountant
 * @n: this is the second accountant
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int i = 0;
int b = 0;
for (i = 0; i < n; i++)
{
b = a[i];
a[i] = a[n - 1];
a[--n] = b;
}
}
