#include 'holberton'
/**
 * print_array -  print characters from an array.
 * @a: array Matriz varibles
 * @n: int prints its value
 * Return: void.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n ; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
