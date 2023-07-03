#include "main.h"
/**
 * print_diagsums - a function that prints the sums of the
 * two diagonals of a square matrix
 *
 * @a: the matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; ++i)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
