#include "main.h"
/**
 * string_nconcat - a function that concatenates 2 strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes concatenated from s2
 *
 * Return: a pointer to a newly allocated string
 * that contains the two concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0, len2 = 0, i, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; ++i)
		++len1;
	for (i = 0; s2[i] != '\0'; ++i)
		++len2;
	if (n >= len2)
		n = len2;
	str = malloc(sizeof(char) * (len1 + n) + 1);
	if (str == NULL)
		return ('\0');
	for (i = 0; s1[i] != '\0'; ++i)
		str[i] = s1[i];
	for (i = len1; i < len1 + n; ++i, ++j)
		str[i] = s2[j];
	str[len1 + n] = '\0';
	return (str);
}

