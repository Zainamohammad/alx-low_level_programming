#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: a pointer to the destination string
 * @src: a pointer to the string to be appendded
 * to the destination one
 * @n: number of elements to be appended
 *
 * Return: (dest) pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, count = 0, length = 0, total = 0;

	for (i = 0; dest[i] != '\0'; ++i)
		++count;
	for (j = 0; src[j] != '\0'; ++j)
		++length;
	total = count + n + 1;
	for (i = count, j = 0; j < n; ++i, ++j)
	{
		dest[i] = src[j];
		if (j >= length)
			break;
	}
	/*if (n >= length)
		total = count + length;*/
	dest[total] = '\0';
	return (dest);
}
