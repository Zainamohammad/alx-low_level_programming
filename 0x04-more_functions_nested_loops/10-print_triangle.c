#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * using #
 *
 * @size: the number of lines used to form the triangle
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, x;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = (size - 1); j >= i; j--)
				_putchar(' ');
			for (x = 1; x <= i; x++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
