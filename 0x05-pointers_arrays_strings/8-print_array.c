#include "main.h"
/**
 * print_array - a function that prints n number
 * of elements of an array
 *
 * @a: the array
 * @n: number of elements to be printed
 *
 * return: 0
 */
void print_array(int *a, int n)
{
	int i, count = 0;
	for (i = 0; a[i] != '\0'; ++i)
	{
		++count;
	}
	if (n <= count - 1)
	{
		for (i = 0; i < n; ++i)
		{
			_putchar(a[i]);
			if (i < n - 1)
				printf(", ");
		}
	}
_putchar('\n');
}
