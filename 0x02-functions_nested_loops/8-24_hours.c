#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * return: 0
 */
void jack_bauer(void)
{
	int i, j, m, n;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (n = 0; n <= 9; n++)
				{
					if ((i * 10 + j <= 23) && (m * 10 + n <= 59))

					{
						_putchar(i + 48);
						_putchar(j + 48);
						_putchar(':');
						_putchar(m + 48);
						_putchar(n + 48);
						_putchar('\n');
					}
				}
			}
		}
	}
}
