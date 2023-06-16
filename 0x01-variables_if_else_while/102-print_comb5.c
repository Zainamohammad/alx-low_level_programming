#include <stdio.h>
/**
 * main - entry point
 *
 * Description: printing possible two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int z;
	int y;
	int i;

	for (x = 0; x <= 9; x++)
	{
		for (z = 0; z <= 9; z++)
		{
			for (y = 0; y <= 9; y++)
			{
				for (i = 0; i <= 9; i++)
				{
					if (x * 10 + z < y * 10 + i)
					{
						putchar(48 + x);
						putchar(48 + z);
						putchar(' ');
						putchar(48 + y);
						putchar(48 + i); }
					if (x * 10 + z < y * 10 + i && x * 10 + z < 98)
					{
						putchar(',');
						putchar(' '); }
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
