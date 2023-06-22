#include "main.h"
/**
 * print_diagonal - prints diagonal using \
 *
 * @n: number of \ forming the diagonal
 *
 * Return - 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (i != 1)
			{
				for (j = 1; j <= (i - 1); j++)
					_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
