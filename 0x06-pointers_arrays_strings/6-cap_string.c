#include "main.h"
/**
 * cap_string - a function that capitalizez all words
 *
 * @a: a pointer to the string to be converted
 *
 * Return: returns the string in uppercase
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; ++i)
	{
		if (i == 0)
		{
			if (a[i] >= 97 && a[i] <= 122)
				a[i] = a[i] - 32;
		}
		if (a[i - 1] == 32 || a[i - 1] == 46)
		{
			if (a[i] >= 97 && a[i] <= 122)
				a[i] = a[i] - 32;
		}
		if (a[i - 1] == 9 || a[i - 1] == 10)
		{
			if (a[i] >= 97 && a[i] <= 122)
				a[i] = a[i] - 32;
		}
	}
	return (a);
}
