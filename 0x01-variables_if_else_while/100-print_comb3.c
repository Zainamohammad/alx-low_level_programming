#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing every possible combination of two digits
 *
 * Return: 0
 */

int main(void)
{
	int x;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (z = 0; z <= 9; z++)
		{
			if (x != z && x < z)
			{
				putchar(48 + x);
				putchar(48 + z);
			}
			if (x != z && x < z && x != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
