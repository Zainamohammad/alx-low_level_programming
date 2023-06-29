#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 *
 * @a: the string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *a)
{
	int i, j;
	char arr[] = "aeotlAEOTL";
	char array[] = "4307143071";

	while (a[i] != '\0')
	{
		for (j = 0; j < 10; ++j)
		{
			if (a[i] == arr[j])
				a[i] = array[j];
		}
		++i;
	}
	return (a);
}
