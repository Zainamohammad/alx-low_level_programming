#include "main.h"
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
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	if (new_size > old_size)
		memcpy(ptr2, ptr, old_size);
	if (old_size > new_size)
		memcpy(ptr2, ptr, new_size);
	return (ptr2);
}

