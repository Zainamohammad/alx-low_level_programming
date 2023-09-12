#include "main.h"
/**
 * print_binary - a function that prints the binary
 * representation of a number
 *
 * @n: the number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	unsigned long int b;

	b = n;
	for (i = 0; b != 0; ++i)
		b = b >> 1;
	b = 1;
	if (i > 0)
		b = b << (i - 1);
	for (; b != 0;)
	{
		if (n & b)
			_putchar(49);
		else
			_putchar(48);
		b = b >> 1;
	}
}
