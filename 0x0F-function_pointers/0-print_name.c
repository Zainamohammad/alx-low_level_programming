#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 *
 * @name: the string to be printed
 *
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (*f == NULL)
		return;
	f(name);
}

