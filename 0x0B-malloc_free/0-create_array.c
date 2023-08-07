#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of
 * chars, and initializes it with a specific char
 *
 * @size: the size of the array
 * @c: the char with which the array is to be initialized
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return ('\0');
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return ('\0');
	for (i = 0; i < size; ++i)
		str[i] = c;
	return (str);
}

