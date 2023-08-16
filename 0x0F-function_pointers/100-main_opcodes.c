#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - a program that prints the opcodes of its own
 * main function
 *
 * @argc: number of arguments
 * @argv: array of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg, i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	arg = atoi(argv[1]);
	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (unsigned char *) &main;
	for (i = 0; i < arg; ++i)
	{
		if (i < arg - 1)
			printf("%02x ", ptr[i]);
		if (i == arg - 1)
			printf("%02x\n", ptr[i]);
	}
	return (0);
}
