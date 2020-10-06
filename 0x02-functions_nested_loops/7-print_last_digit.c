#include "holberton.h"
/**
 *print_last_digit - unction that computes the absolute value of an integer.
 *@n: this variable
 *Return: the content saved in variable n
 */
int print_last_digit(int n)
{
int a;
a = n % 10;
if (a < 0)
{
_putchar('0' + (-a));
return ((-a));
}
_putchar('0' + a);
return (a);
}
