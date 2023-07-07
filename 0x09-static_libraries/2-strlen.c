#include "main.h"
/**
 * _strlen - a function that prints the length of
 * a string
 *
 * @s: the string the length of which is to be calculated
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; *s != '\0'; ++i)
	{
		++s;
		++count;
	}
	return (count);
}
