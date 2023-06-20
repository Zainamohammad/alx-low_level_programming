#include <stdio.h>
/**
 * main - entry point
 *
 * Description - a program that displays even fibonacci
 * terms which are less than 4x10^6
 *
 * Return: 0
 */
int main(void)
{
	int i, sum = 0, sum2 = 0, fir = 0, sec = 1;

	for (i = 1; sum < 4000000; ++i)
	{
		sum = fir + sec;
		if ((sum % 2 == 0) && (sum < 4000000))
			sum2 = sum2 + sum;
		fir = sec;
		sec = sum;
	}
	printf("%d\n", sum2);
	return (0);
}


