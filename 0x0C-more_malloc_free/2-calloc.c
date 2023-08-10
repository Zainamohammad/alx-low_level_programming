#include "main.h"
#include <string.h>
/**
 * _calloc - a function that allocates memory for
 * an array using malloc
 *
 * @nmemb: number of elements in the array
 * @size: size of element
 *
 * Return: returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return ('\0');
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return ('\0');
	memset(arr, 0, nmemb * size);
	return (arr);
}

