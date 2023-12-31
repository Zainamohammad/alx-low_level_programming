#include "main.h"
/**
 * _memset - function to fill memory with a constant byte
 *
 * @s: a pointer to the memory area to be filled
 * @b: the constant to fill the memory are with
 * @n: number of bytes of memory area to be filled
 *
 * Return: a pointer to the memory are (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
