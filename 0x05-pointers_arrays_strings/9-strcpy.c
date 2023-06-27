#include "main.h"
/**
 * _strcpy - a function that copies a string
 * into a buffer
 *
 * @dest: a pointer to the buffer
 * @src: the string to be copied
 *
 * return: a pointer to the buffer (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	for (i = 0; src[i] != '\0'; ++i)
	{
		++count;
	}
for (i = 0; i < count; ++i)
{
dest[i] = src[i];
}
return (dest);
}
