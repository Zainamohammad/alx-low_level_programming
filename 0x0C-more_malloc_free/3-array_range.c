#include "main.h"
/**
 * array_range - a function that creates
 * an array of integers
 *
 * @min: the first number of the interval
 * @max: the last number of the interval
 *
 * Return:a function that creates an array of integers
 */
int *array_range(int min, int max)
{
	int i, j;
	int *array;

	if (min > max)
		return ('\0');
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return ('\0');
	for (i = min, j = 0; i <= max; ++i, ++j)
		array[j] = i;
	return (array);
}
