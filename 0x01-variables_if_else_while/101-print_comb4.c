#include <stdio.h>
/**
 * main - entry point
 *
 * Description: printing every possible three different digit combination
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int z;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (z = 0; z <= 9; z++)
		{
			for (y = 0; y <= 9; y++)
			{
				if (x < z && z < y)
				{
					putchar(48 + x);
					putchar(48 + z);
					putchar(48 + y);
				}
				if (x < z && z < y && x != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
