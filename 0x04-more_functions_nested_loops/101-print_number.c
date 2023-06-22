#include "main.h"
#define MAX 19
/**
 * print_number - a function that prints a number
 * using _putchar only
 *
 * @n: the number to be printed
 *
 * Return: 0
 */
void print_number(int n)
{
	int count = 0, arr[MAX], q, i;

	if (n == 0)
		_putchar(48);
	while (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -1 * (n);
		}
		q = n % 10;
		arr[count] = q;
		n = n / 10;
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(48 + arr[i]);
	}
}
