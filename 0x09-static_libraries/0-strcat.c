#include "main.h"
/**
 * _strcat - a function to concatenate two strings
 *
 * @dest: a pointer to the destination string
 * @src: a pointer to the string to be appendded
 * to the destination one
 *
 * Return: (dest) the pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, count = 0, length = 0, total = 0;

	for (i = 0; dest[i] != '\0'; ++i)
		++count;
	for (j = 0; src[j] != '\0'; ++j)
		++length;
	total = count + length;
	for (i = count, j = 0; i <= total; ++i, ++j)
		dest[i] = src[j];
	/*dest[total] = '\0';*/
	return (dest);
}
