#include "variadic_functions.h"
/**
 * print_char - a function that prints a character
 *
 * @args: a list of types of arguments
 */
void print_char(va_list args)
{
	char i;

	i = va_arg(args, int);
	printf("%c", i);
}
/**
 * print_int - a function that prints an integer
 *
 * @args: a list of types of arguments
 */
void print_int(va_list args)
{
	int i;

	i = va_arg(args, int);
	printf("%d", i);
}
/**
 * print_float - a function that prints a double
 *
 * @args: a list of types of arguments
 */
void print_float(va_list args)
{
	float i;

	i = va_arg(args, double);
	printf("%f", i);
}
/**
 * print_string - a function that prints a string
 *
 * @args: a list of types of arguments
 */
void print_string(va_list args)
{
	char *i;

	i = va_arg(args, char *);
	if (i == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", i);
}
/**
 * print_all - a function that prints anything
 *
 * @format: a list of types of arguments passed to
 * the function
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	char *sep = "";
	int i = 0, j;
	format_spec select_function[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(arg, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4 && (format[i] != *select_function[j].x))
			++j;
		if (j < 4)
		{
			printf("%s", sep);
			select_function[j].f(arg);
			sep = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(arg);
}
