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
	int i, j, len;
	char **str;

	if (ac == 0 || av == NULL)
		return ('\0');
	str = malloc(sizeof(char *) * ac);
	if (str == NULL)
		return ('\0');
	for (i = 1; i < ac; ++i)
	{
		len = strlen(av[i]);
		str[i] = malloc(sizeof(char) * len + 1);
		if (str[i] == NULL)
		{
			for (j = 0; j < i; ++j)
				free(str[i]);
			free(str);
			return ('\0');
		}
		for (j = 0; j < len; ++j)
		{		
			str[i][j] = av[i][j];
			str[i][len] = '\n';
		}
	}
	return (*str);
}
