#include <stdio.h>
#include <limits.h>
/**
 * main - entry point
 *
 * Description - a program that displays the first
 * 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int sum = 0, fir = 2, sec = 3;

	for (i = 1; i < 4; ++i)
		printf("%d, ", i);
	for (i = 4; i <= 98; ++i)
	{
		sum = fir + sec;
		if (sum < ULONG_MAX)
			printf("%lu", sum);
		if (i != 98)
			printf(", ");
		fir = sec;
		sec = sum;
	}
	printf("\n");
	return (0);
}
