#include "main.h"
/**
 * _strncpy - a function that copies an n number
 * of elements of a string into a buffer
 *
 * @dest: a pointer to the buffer
 * @src: the string to be copied
 * @n: number of elements to be copied
 *
 * Return: a pointer to the buffer (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, count = 0;

	for (i = 0; src[i] != '\0'; ++i)
		++count;
	for (i = 0; i < n; ++i)
	{
		if (i < count)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);
}
