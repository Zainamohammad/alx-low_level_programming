#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers
 *
 * @width: the first dimension of the array
 * @height: the second dimension of the array
 *
 * Return: a pointer to the array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return ('\0');
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return ('\0');
	}
	for (i = 0; i < height; ++i)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			return ('\0');
		}
		for (j = 0; j < width; ++j)
			array[i][j] = 0;
	}
	return (array);
}
