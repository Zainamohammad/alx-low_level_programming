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
	int check = 0, i, j, sum = 0, num;

	for (i = 1; i < argc; ++i)
	{
		for (j = 0; argv[i][j] != '\0'; ++j)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				check = 1;
				break;
			}
		}
	}
	for (i = 1; i < argc; ++i)
	{
		num = atoi(argv[i]);
		if (check == 1)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}

