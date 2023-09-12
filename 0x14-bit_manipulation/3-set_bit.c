#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1
 * at a given index
 *
 * @n: a pointer to the number
 * @index: the index of the bit to be changed
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int b;

	if (n == NULL || index > 63)
		return (-1);
	b = 1;
	for (i = 0; i < index; ++i)
		b = b * 2;
	*n = *n + b;
	return (1);
}

