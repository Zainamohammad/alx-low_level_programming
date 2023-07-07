#include "main.h"
/**
 * _puts - a function that prints a string on
 * the standard output followed by a new line
 *
 * @str: the string to be printed on stdout
 *
 * return: 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; ++i)
	{
		_putchar(*str);
		++str;
	}
	_putchar('\n');
}
