#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using putchar to display alphabet in lower and upper cases
 *
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a', ALPHA = 'A';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
		putchar(ALPHA);
	putchar('\n');
	return (0);
}
