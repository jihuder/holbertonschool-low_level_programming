#include "variadic_functions.h"

/**
 * sum_them_all - Makes the sum of all the n
 * @n:  receives a certain number of parameters
 *
 * Return: returns the sum of the numbers
 */


int sum_them_all(const unsigned int n, ...)
{

int sum = 0;

va_list arguments;

if (arguments != NULL)
{
unsigned int count = 0;

va_start(arguments, n);

while (count < n)
{
sum += va_arg(arguments, int);
count++;
}

va_end(arguments);

return (sum);
}
}
