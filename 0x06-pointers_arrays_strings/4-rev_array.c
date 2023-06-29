#include "main.h"
/**
 * reverse_array - a function to reverse a string
 *
 * @a: a pointer to the string to be reversed
 * @n: the number of elements in the string
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; a[i] != '\0'; ++i)
		++n;
	for (i = 0; i < n / 2; ++i)
	{
		x = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = x;
	}
}
