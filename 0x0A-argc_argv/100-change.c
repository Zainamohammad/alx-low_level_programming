#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: a program that prints the minimum
 * number of coins to make change for an amount of money
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, num, n, arr[5] = {25, 10, 5, 2, 1}, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	n = num;
	for (i = 0; i < 5; ++i)
	{
		if (num > 0)
		{
			change = change + (n / arr[i]);
			n = n % arr[i];
		}
	}
	printf("%d\n", change);
	return (0);
}


