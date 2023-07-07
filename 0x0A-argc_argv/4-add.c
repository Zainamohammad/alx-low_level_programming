#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: a program that adds positive numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	int num;

	for (i = 1; i < argc; ++i)
	{
		num = atoi(argv[i]);
		if (num <= 0 )
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
