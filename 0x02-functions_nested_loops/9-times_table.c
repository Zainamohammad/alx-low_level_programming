#include "main.h"
/**
 * times_table - print the 9 times table
 * Return: 0
 */
void times_table(void)
{
	int i, j, times;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			times = i * j;
			if (times < 10 && j != 0)
				_putchar(' ');
			if (times < 10)
				_putchar(times + 48);
			else
			{
				_putchar((times / 10) + 48);
				_putchar((times % 10) + 48);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
