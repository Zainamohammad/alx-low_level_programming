#include "main.h"
/**
 * print_rev - a function that reverses a string
 *
 * @s: the string to be reversed
 *
 * return: 0
 */
void rev_string(char *s)
{
  	int i, count = 0;
	char *str;

	for (i = 0; *s != '\0'; ++i)
	{
		++count;
		++s;
	}
	--s;
	for (i = 1; i < count / 2; --i)
	{
		str[i] = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = str[i];
  }
}
