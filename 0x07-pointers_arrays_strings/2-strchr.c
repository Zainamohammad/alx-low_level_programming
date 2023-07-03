#include "main.h"
/**
 * _strchr - a function that locates a character in string
 *
 * @s: a pointer to the string
 * @c: the character to be fetched
 *
 * Return: a pointer to the first occurence of c
 * or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; ++s)
	{
		if (*s == c)
			break;
	}
	if (*s == c)
		return (s);
	return ('\0');
}

