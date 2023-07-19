#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 *
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: a pointer to the function that's used to
 * compare the values
 *
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		cmp(array[i]);
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
