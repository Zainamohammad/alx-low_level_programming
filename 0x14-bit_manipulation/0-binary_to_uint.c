#include "main.h"
/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int
 *
 * @b: a string of 0 and 1
 * Return: the converted string
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int num = 0, base = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (j = i - 1; j >= 0; --j)
	{
		num = num + (b[j] - 48) * base;
		base = base * 2;
	}
	return (num);
}
