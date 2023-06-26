#include "main.h"
/**
 * print_rev - a function that prints the
 * second half of a string
 *
 * @str: the string to be printed
 *
 * return: 0
 */
void puts_half(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		++count;
  }
	for (i = count - 1; i > count / 2 - 1; --i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
	
