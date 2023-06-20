#include <stdio.h>
/**
 * main - entry point
 *
 * Description - a program that displays the first
 * 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int sum, fir = 2, sec = 3;

	for (i = 1; i < 4; ++i)
	{	printf("%d", i);
		if (i != 3)
			printf(", ");
	}
	for (i = 4; i <= 50; ++i)
	{
		sum = fir + sec;
		printf("%d, ", sum);
		if (i != 50)
			printf(", ");
		fir = sec;
		sec = sum;
	}
	printf("\n");
	return (0);
}

