#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 *
 * @array: A pointer to an array of integers
 * @size: The size of the array
 * @action: A function pointer to a function that takes an integer parameter
 *          and returns void
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *p = array;
	int *end = array + size;

	while (p < end)
	{
		action(*p);
		p++;
	}
}

