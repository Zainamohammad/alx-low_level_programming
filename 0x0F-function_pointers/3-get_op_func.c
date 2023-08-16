#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - the function that selects the correct
 * function to perform the operation
 *
 * @s: a pointer to the operator from the arguments passed
 * to the program
 *
 * Return: returns a pointer to the function that
 * corresponds to the operator
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
	int i = 0;

	while (i <= 4)
	{
		if (*s == *ops[i].op)
			return (*ops[i].f);
		++i;
	}
	return ('\0');
}

