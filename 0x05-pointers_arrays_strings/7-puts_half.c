#include "main.h"
/**
 * puts_half - a function that prints the
 * second half of a string
 *
 * @str: the string to be printed
 *
 * return: 0
 */
void puts_half(char *str)
{
	int i, count = 0, n;

	for (i = 0; str[i] != '\0'; ++i)
	{
		++count;
	}
	if (count % 2 == 0)
	{
		for (i = count / 2; i < count; ++i)
			{
				_putchar(str[i]);
			}
	}
	else 
	{
		n = (count - 1) / 2;
		for (i = n + 1; i < count; ++i)
			_putchar(str[i]);
	}
	_putchar('\n');
}
