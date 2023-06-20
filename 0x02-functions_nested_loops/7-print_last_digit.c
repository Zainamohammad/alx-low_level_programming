#include "main.h"
/**
 * print_last_digit - function to print the last digit of a number
 * @num: a variable in which the number is stored
 * Return: digit
 */

int print_last_digit(int num)
{
	int digit;

	if (num < 0)
		digit = -1 * (num % 10);
	else
		digit = num % 10;

	putchar(digit + 48);
	return (digit);
}
