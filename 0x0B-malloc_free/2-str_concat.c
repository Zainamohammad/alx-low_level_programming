#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by
 * the contents of s2, and null terminated
 * and returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, ls1 = 0, ls2 = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; ++i)
		++ls1;
	for (i = 0; s2[i] != '\0'; ++i)
		++ls2;
	new = malloc(1 + sizeof(char) * (ls1 + ls2));
	if (new == NULL)
		return ('\0');
	for (i = 0; s1[i] != '\0'; ++i)
	{
		new[i] = s1[i];
	}
	for (i = ls1, j = 0; s2[j] != '\0'; ++i, ++j)
	{
		new[i] = s2[j];
	}
	return (new);
}
