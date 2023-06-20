#include "main.h"
/**
 * print_sign - function to print the sign of a number
 * @num: the variable of type int in which numbers are stored
 *
 * Return: returns 1 if num is +ve, 0 if num == 0,
 * and -1 if num is -ve
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (num == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
