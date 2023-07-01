#include "main.h"
#define MAX 25
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
	int count = 0, i, arr[MAX];
	unsigned int q, num;

	num = (unsigned)(n);
	if (num == 0)
		_putchar(48);
	while (num != 0)
	{
		if (num < 0)
		{
			_putchar('-');
			num = (unsigned)(-n);
		}
		q = num % 10;
		arr[count] = q;
		num = num / 10;
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(48 + arr[i]);
	}
}
