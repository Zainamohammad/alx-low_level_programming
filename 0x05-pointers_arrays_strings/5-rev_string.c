#include "main.h"
/**
 * rev_string - function to reverse a string
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
	str = s;
	*str = *s;
	for (i = 1; i < count; ++i)
	{
		++str;
		--s;
		*str = *s;
	}
	printf("%c", *s);
}
