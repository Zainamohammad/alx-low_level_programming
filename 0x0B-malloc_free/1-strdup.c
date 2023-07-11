#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter
 *
 * @str: the string to be copied
 *
 * Return: a pointer to the duplicated string
 * and returns NULL if str = NULL or there isn't sufficient
 * memory available
 */
char *_strdup(char *str)
{
	char *dup;
	int i, count = 0;

	for (i = 0; str[i] != '\0'; ++i)
		++count;
	if (count == 0)
		return ('\0');
	dup = malloc(sizeof(char) * count);
	if (str == NULL)
		return ('\0');
	for (i = 0; str[i] != '\0'; ++i)
		dup[i] = str[i];
	return (dup);
}
