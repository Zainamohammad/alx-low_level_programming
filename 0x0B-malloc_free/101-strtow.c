#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - a function that splits a string into words
 *
 * @str: the string to be split
 *
 * Return: returns a pointer to an array of words
 */
char **strtow(char *str)
{
	char **s;
	int i, j = 0, len = 0, sen = 0, n, m = 0, x;
	char *arr;

	if (str == NULL || *str == '\0')
		return ('\0');
	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] != ' ')
		{
			++len;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
				++sen;
		}

	}
	arr = malloc(sizeof(char) * (len + sen));
	if (arr == NULL)
		return ('\0');
	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; j < (len + sen); ++j)
		{
			if (str[i] != ' ')
			{
				arr[j] = str[i];
				if (str[i + 1] == ' ' || str[i + 1] == '\0')
					arr[j] = '\n';
			}
		}
	}
	s = malloc(sizeof(char *) * (sen + 1));
	if (s == NULL || sen == 0)
		return ('\0');
	for (i = 0; i < sen; ++i)
	{
		for (; arr[j] != ' '; ++j)
		{
			++m;
		}
		++j;
		s[i] = malloc(sizeof(char) * m);
		if (s[i] == NULL)
		{
			for (n = 0; n < i; ++i)
				free(s[n]);
			free(s);
			return ('\0');
		}
		for (x = 0; x < m; ++x)
			s[i][x] = arr[j - 1 - m + x];
		m = 0;
	}
	return (s);
}
