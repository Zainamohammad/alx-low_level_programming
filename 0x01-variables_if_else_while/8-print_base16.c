#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char alpha;

	for (i = 0; i < 10; i++)
		putchar(48 + i);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
