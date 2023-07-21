#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum
 * of all its parameters
 *
 * @n: number of arguments
 *
 * Return: the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, x;
	unsigned int i;

	va_list pars;
	va_start(pars, n);

	if (n > 0)
	{
		for (i = 0; i < n; ++i)
		{
			x = va_arg(pars, int);
			sum = sum + x;
		}
		return (sum);
	}	
	va_end(pars);
	return (0);
}
