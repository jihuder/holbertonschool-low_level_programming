#include "holberton.h"
/**
 * solve_prime - prints buffer in hexa
 * @y: the address of memory to print
 * @n: the address of memory to print
 * Return: s.
 */
int solve_prime(int n, int y)
{
if (n < 2)
{
return (0);
}
else if (y * y > n)
{
return (1);
}
else if (y * y == n)
{
return (0);
}
else
{
return (solve_prime(n, y + 1));
}
}

/**
 * is_prime_number - prints buffer in hexa
 * @n: the address of memory to print
 * Return: s.
 */

int is_prime_number(int n)
{
return (solve_prime(n, 1));
}
