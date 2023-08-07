#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - a function that concatenates all the
 * arguments of the program
 *
 * @ac: number of arguments
 * @av: a pointer to an array of the arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return ('\0');
	for (i = 0; i < ac; ++i)
	{
		len = len + strlen(av[i]);
	}
	str = malloc(sizeof(char) * len + ac);
	if (str == NULL)
		return ('\0');
	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j] != '\0'; ++j)
		{
			str[k] = av[i][j];
			++k;
		}
		str[k] = '\n';
		++k;
	}
	return (str);
}
