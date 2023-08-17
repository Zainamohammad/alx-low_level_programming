#ifndef MY_HEADER
#define MY_HEADER
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * struct format - a new type
 *
 * @x: the format specifier
 * @f: a function pointer to print a data type according
 * to the format specifier
 */
typedef struct format
{
	char *x;
	void (*f)(va_list args);
} format_spec;
void print_all(const char * const format, ...);
void print_string(va_list args);
void print_float(va_list args);
void print_int(va_list args);
void print_char(va_list args);
#endif

