#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers
 * followed by a new line
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x, j, len = 0;
	va_list nums;

	va_start(nums, n);

	if (separator != NULL)
	{
		for (j = 0; separator[j] != '\0'; ++j)
			++len;
	}
	if (n > 0)
	{
		for (i = 0; i < n; ++i)
		{
			x = va_arg(nums, int);
			printf("%d", x);
			if (i != n - 1 && separator != NULL)
			{
				for (j = 0; j < len; ++j)
					printf("%c", separator[j]);
			}
		}
	}
	printf("\n");

	va_end(nums);
}

