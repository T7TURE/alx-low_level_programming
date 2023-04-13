#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets the memory to zero.
 * @nmemb: The number of array elements to allocate.
 * @size: The size of each array element.
 *
 * Return: If memory allocation fails or either argument is 0 - NULL.
 *         Otherwise - a pointer to the newly allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		mem[i] = 0;

	return (mem);
}

