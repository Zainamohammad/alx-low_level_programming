#include "main.h"
/**
 * swap_int - a function that swaps the values of 2 integers
 * @a: integer number 1
 * @b: integer number 2
 * return: 0
 */
void swap_int(int *a, int *b)
{
	int *c;
	int x;

	c = &x;
	*c = *a;
	*a = *b;
	*b = *c;
}
