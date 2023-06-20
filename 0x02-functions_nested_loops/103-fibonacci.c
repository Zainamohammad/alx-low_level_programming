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
	int i, sum, fir = 2, sec = 3;

	printf("%d, ", 2);
	for (i = 0; sum < 4000000; ++i)
	{
		sum = fir + sec;
		if ((sum % 2 == 0) && (sum < 4000000))
			printf("%d", sum);
		fir = sec;
		sec = sum;
		if (sum < 4000000)
			printf(", ");
	}
	printf("\n");
	return (0);
}


