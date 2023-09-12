#include "main.h"
/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of changed bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b, mask;
	unsigned int i, j = 0;

	b = n ^ m;
	mask = b;
	for (i = 0; mask != 0; ++i)
		mask = mask >> 1;
	mask = 1;
	if (i > 0)
		mask = mask << (i - 1);
	for (; mask != 0;)
	{
		if (mask & b)
			++j;
		mask = mask >> 1;
	}
	return (j);
}
