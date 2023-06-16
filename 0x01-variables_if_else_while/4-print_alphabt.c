#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing out the alphabet excluding e and q
 *
 * Return: 0
 */

int main(void)
{
	char alphabet[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i <= 23; i++)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
