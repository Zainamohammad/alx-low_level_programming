#include "main.h"
/**
 * print_rev - a function that prints a string
 * in reverse order
 *
 * @s: the string to be reversed
 *
 * return: 0
 */
void print_rev(char *s)
{
	int i, count = 0;

	for (i = 0; *s != '\0'; ++i)
	{
		++count;
		++s;
	}
	--s;
	for (i = count; i > 0; --i)
	{
		_putchar(*s);
		--s;
	}
	_putchar('\n');
}
