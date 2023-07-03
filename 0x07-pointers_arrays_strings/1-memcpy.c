#include "main.h"
/**
 * _memcpy - function to copy n bytes from a memory
 * area to another
 *
 * @src: a pointer to the memory area to be copied
 * @dest: a pointer to the destination memory area
 * @n: number of bytes of memory area to be copied
 *
 * Return: a pointer to the memory area (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
		/*++dest;*/
	}
	return (dest);
}
