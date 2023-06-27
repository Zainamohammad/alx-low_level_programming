#include "main.h"
/**
 * _atoi - a function that converts a string
 * to an integer
 *
 * @s: the string to be converted
 *
 * return: 0
 */
int _atoi(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		++count;
		if (sizeof(s[i]) < 4)
		{
			s[i + 1] = s[i];
			--count;
		}
	}
	if (count == 0)
		return (0);
	if (count != 0)
	{
		for (i = 0; i < count; ++i)
			return (s[i]);
	}
}
