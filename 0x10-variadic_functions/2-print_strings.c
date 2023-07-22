#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 * followed by a new line
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list strs;

	va_start(strs, n);

	if (n > 0)
	{
		for (i = 0; i < n; ++i)
		{
			x = va_arg(strs, char *);
			if (x == NULL)
				printf("(nil)");
			else
				printf("%s", x);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(strs);
}
