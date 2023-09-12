#include "main.h"
/**
 * get_bit - a function that returns the value
 * of a bit at a given index
 *
 * @n: the number
 * @index: the index of the bit to be returned
 *
 * Return: the index of the required bit or -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b, q;
	unsigned int i, j;
	int arr[64];

	b = n;
	for (i = 0; b != 0; ++i)
		b = b >> 1;
	if (index > 63)
		return (-1);
	for (j = 0; j < 64; ++j)
	{
		q = n % 2;
		n = n / 2;
		arr[j] = q;
	}
	return (arr[index]);
}

