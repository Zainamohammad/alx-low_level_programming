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
	unsigned long int f1, f2, rem1, rem2, sumf, sumrem;

	for (i = 1; i < 4; ++i)
		printf("%d, ", i);
	for (i = 4; i <= 92; ++i)
	{
		sum = fir + sec;
		printf("%lu", sum);
		printf(", ");
		fir = sec;
		sec = sum;
	}
	f1 = fir / 10000000000;
	f2 = sec / 10000000000;
	rem1 = fir % 10000000000;
	rem2 = sec % 10000000000;
	for (i = 93; i <= 98; ++i)
	{
		sumf = f1 + f2;
		sumrem = rem1 + rem2;
		printf("%lu%lu", sumf, sumrem);
		if (i != 98)
			printf(", ");
		f1 = f2;
		f2 = sumf;
		rem1 = rem2;
		rem2 = sumrem;
	}
	printf("\n");
	return (0);
}
