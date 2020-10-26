#include "function_pointers.h"

/**
 * print_name - method to print the name
 *
 * @name: receives a name
 * @f: It is a pointer to the function - receives capital letters and name
 */


void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

