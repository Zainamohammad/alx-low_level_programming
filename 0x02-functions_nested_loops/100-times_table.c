#include "main.h"
/**
 * print_times_table - function that prints times table of a number
 * @n: variable where the input number is stored
 * Return: 0
 */
void print_times_table(int n)
{
	int i, j, times;

	for (i = 0; i <= n; ++i)
	{
		for (j = 0; j <= n; ++j)
		{
			times = i * j;
			if ((n <= 15) && (n >= 0))
			{
				if (times < 10 && j != 0)
				{	_putchar(' ');
					_putchar(' ');
				}
				if (times < 10)
					_putchar(times + 48);
				if ((times >= 10 && times < 100) && j != 0)
					_putchar(' ');
				if (times >= 10 && times < 100)
				{
					_putchar((times / 10) + 48);
					_putchar((times % 10) + 48);
				}
				if (times >= 100)
				{
					_putchar((times / 100) + 48);
					_putchar(((times % 100) / 10) + 48);
					_putchar((times % 10) + 48);
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	if ((n <= 15) && (n >= 0))
		_putchar('\n');
}
