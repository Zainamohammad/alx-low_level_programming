#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing single digit numbers of base 10 using for loop
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
