#include "main.h"
/**
 * check - a function to iterate through numbers
 * less than n
 *
 * @n: the number
 * @x: the numbers below n
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check(int n, int x)
{
	if (n < 2)
		return (0);
	if (n % x == 0)
		return (0);
	if (x * x > n)
		return (1);
	return (check(n, x + 1));
}
/**
 * is_prime_number - a function to determine prime numbers
 *
 * @n: the number
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (check(n, 2));
}
