#include "main.h"
/**
 * more_numbers - prints 10x numbers from 0 to 14
 * return: 0
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; ++j)
	{
		for (i = 0; i <= 14; ++i)
		{
			if (i > 9)
				_putchar(49);
			_putchar(48 + (i % 10));
		}
		_putchar('\n');
	}
}

