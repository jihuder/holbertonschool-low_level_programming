#include "3-calc.h"


/**
 * get_op_func - analize 2 place on argv to find operator
 *
 * @s: operator to analize
 * Return: pointer to function corresponding to the rigth operator
 */


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int x = 0;

	while (ops[x].op)
	{
		if (*ops[x].op == *s)
			return (ops[x].f);
		x++;
	}
	return (NULL);
}
