#include "main.h"
/**
 * _strcmp - a function that compares two strings
 *
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 *
 * Return: returns -ve integer if the first is
 * lexicographically less than the second and +ve integer
 * if the first is more.
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, comp = 0;

	for (i = 0, j = 0; s1[i] != '\0' || s2[j] != '\0'; ++i, ++j)
	{
		if (s1[i] == s2[j])
			continue;
		if (s1[i] != s2[j])
		{
			comp = s1[i] - s2[j];
			break;
		}
	}
	return (comp);
}
