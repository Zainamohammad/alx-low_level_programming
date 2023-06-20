#include <stdio.h>
/**
 * main - entry point
 *
 * Description - a program that computes and prints
 * the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i < 1024; ++i)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
	}
	printf("%d", sum);
	return (0);
}
