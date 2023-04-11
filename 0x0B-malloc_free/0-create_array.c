#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 *initializes it with a specific char
 * @size: the size of the array to create
 * @c: the char to initialize the array with
 *
 * Return: On success, returns a pointer to the array.
 *On failure, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}

