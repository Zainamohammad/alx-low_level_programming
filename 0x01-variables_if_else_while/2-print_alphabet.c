#include <stdio.h>

/**
 * main - entry point
 *
 * Description: for statement to display the alphabet
 *
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
