#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing single digit numbers of base 10 using putchar
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(48 + i);
	putchar('\n');
	return (0);
}
