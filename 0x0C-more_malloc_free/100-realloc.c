#include "main.h"
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
		dest[i] = src[i];
	return (dest);
}
/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free
 *
 * @ptr: a pointer to the memory previously
 * allocated with a call to malloc
 *
 * @old_size: is the size, in bytes, of the allocated
 * space for ptr
 *
 * @new_size: is the new size, in bytes of the new
 * memory block
 *
 * Return: pointer to the newly allocated block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		free(ptr);
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
		return (ptr2);
	}
	if (new_size == old_size)
		return (ptr);

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	if (new_size > old_size)
		_memcpy(ptr2, ptr, old_size);
	if (old_size > new_size)
		_memcpy(ptr2, ptr, new_size);
	free(ptr);
	return (ptr2);
}

