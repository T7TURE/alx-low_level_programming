#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the minimum integer value
 * @max: the maximum integer value
 *
 * Return: On success, the function returns a pointer
 *to the newly created array.
 * If min > max, return NULL. If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int size;
	int *arr;
	int i;

	/* Check if min is greater than max */
	if (min > max)
		return (NULL);
	/* Determine the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	arr = malloc(size * sizeof(int));

	/* Check if malloc failed */
	if (arr == NULL)
		return (NULL);

	/* Initialize the array with values from max to min */
	for (i = size - 1; i >= 0; i--)
		arr[i] = max--;

	/* Return the pointer to the newly created array */
	return (arr);
}

