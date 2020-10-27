#include <stdio.h>
#include "variadic_functions.h"
/**
 * p_char - Print your own name
 * @c: array pointe
 * Return: void
 */
void p_char(va_list c)
{
printf("%c", va_arg(c, int));
}

/**
 * p_integer - Print your own name
 * @i: array pointe
 * Return: void
 */

void p_integer(va_list i)
{
printf("%d", va_arg(i, int));
}

/**
 *  p_float - Print your own name
 * @f: array pointe
 * Return: void
 */
void p_float(va_list f)
{
printf("%f", va_arg(f, double));
}
/**
 *  p_string - Print your own name
 * @s: array pointe
 * Return: void
 */
void p_string(va_list s)
{
char *stg;

stg = va_arg(s, char *);
if (stg == NULL)
stg = "(nil)";
printf("%s", stg);
}

/**
 * print_all - program that prints its name.
 * @format: array of character pointers
 * Return: void.
 */
void print_all(const char * const format, ...)
{
int i, j;
va_list a;
char *separator;

fmt_t match[] = {
{'c', p_char},
{'i', p_integer},
{'f', p_float},
{'s', p_string},
{'\0', NULL}
};

separator = "";
va_start(a, format);
i = 0;
while (format && format[i])
{
j = 0;
while (match[j].c)
{
if (format[i] == (match[j]).c)
{
printf("%s", separator);
match[j].f(a);
separator = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(a);
}
