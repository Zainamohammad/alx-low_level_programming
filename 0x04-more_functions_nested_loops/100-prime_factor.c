#include <stdio.h>

#define MAX 100000000000

/**
 * main - Entry point
 *
 * Description: A program that finds the highest prime factor of a number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, arr[MAX], array[MAX], m = 0, j, k = 0;
	unsigned long int num = 612852475143;

	for (i = 2; i < num; ++i)
	{
		for (j = 2; j <= i; ++j)
		{
			if (i % j == 0)
				break;
			if (i == j)
			{
				arr[k] = i;
				++k;
			}
		}
	}

	for (i = 0; i < k; ++i)
	{
		while (num % arr[i] == 0)
		{
			array[m] = arr[i];
			num = num / arr[i];
			++m;
		}
	}
	printf("%lu\n", array[m - 1]);

	return (0);
}
