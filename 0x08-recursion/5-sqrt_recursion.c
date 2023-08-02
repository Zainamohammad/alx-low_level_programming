#include "main.h"
/**
 * iterate - a function to iterate through
 * numbers until the natural square root of n
 * is reached
 *
 * @n: the number of which the square root is to be
 * evaluated
 *
 * @i: the number to iterate
 *
 * Return: returns the value of the natural square root
 * of n, or -1 if n doesn't have a square root
 */
int iterate(int n, int i)
{
	int square = i * i;

	if (square == n)
		return (i);
	if (square > n)
		return (-1);
	return (iterate(n, i + 1));
}
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 *
 * @n: the number of which the square root is to be printed
 *
 * Return: the natural square root of n
 * or -1 if n doesn't have a square root
 */

int _sqrt_recursion(int n)
{
	return (iterate(n, 1));
}


