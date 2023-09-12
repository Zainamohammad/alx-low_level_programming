#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit
 * to 0 at a given index
 *
 * @n: a pointer to the number
 * @index: the index at which the bit is to be cleared
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int b, q;
	int arr[64];

	if (n == NULL || index > 63)
		return (-1);
	b = *n;
	for (i = 0; i < 64; ++i)
	{
		q = b % 2;
		b = b / 2;
		arr[i] = q;
	}
	if (arr[index] == 0)
		return (1);
	b = 1;
	for (i = 0; i < index; ++i)
		b = b * 2;
	*n = *n - b;
	return (1);
}
