#include "main.h"
/**
 * factorial - a function that returns the factorial
 * of a number
 *
 * @n: the number whose factorial is to be calculated
 *
 * Return: the factorial of the number, or -1
 * if the number is < 0
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < -1)
		return (-1);
	return (n * factorial(n - 1));
}

