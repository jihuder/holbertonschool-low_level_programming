#include "variadic_functions.h"

/**
 * print_numbers - Print the numbers you enter
 * @separator: pointer between the numbers
 * @n: receive the number of parameters
 *
 * Return: void - prints list of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list arguments;

unsigned int count = 0;

if (separator == NULL)
separator = "";

va_start(arguments, n);

while (count < n)
{
int d = va_arg(arguments, int);

printf("%d", d);
if (count != n - 1)
{
printf("%s", separator);
}

count++;
}
printf("\n");
va_end(arguments);
}
