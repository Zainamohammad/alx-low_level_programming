#include "main.h"
/**
 * print_line - a function that prints _ n times
 *
 * @n: number of times _ is printed
 *
 * Return - 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; ++i)
			_putchar(95);
		/*_putchar('\n');*/
	}
	/*else*/
	_putchar('\n');

}
