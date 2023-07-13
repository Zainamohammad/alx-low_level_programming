#include "main.h"
/**
 * malloc_checked - a function that allocates memory
 * using malloc
 *
 * @b: the size of the memory to be allocated
 *
 * Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}


