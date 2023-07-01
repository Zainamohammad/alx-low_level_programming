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

	if (n == 0)
		_putchar(48);
	if (n < 0)
		{
			_putchar('-');
			num = (unsigned)(-n);
		}
	else
		num = (unsigned)n;
	while (num != 0)
	{
		
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
