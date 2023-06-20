#include "main.h"
/**
 * main - entry point
 * Description: print _putchar using putchar function
 * Return: 0
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
		putchar(word[i]);
	putchar('\n');
	return (0);
}
