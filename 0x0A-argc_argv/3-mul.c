#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Description: a program that multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
