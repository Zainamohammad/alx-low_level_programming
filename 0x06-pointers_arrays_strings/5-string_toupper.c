#include "main.h"
/**
 * string_toupper - a function that converts lowercase
 * characters in a string into uppercase characters
 *
 * @a: a pointer to the string to be converted
 *
 * Return: returns the string in uppercase
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; ++i)
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
	}
	return (a);
}
