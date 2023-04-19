#include "function_pointers.h"

/**
 * array_iterator - executes a function as paramenter on each array element
 * @size: size of the array
 * @array: array pointed to
 * @action: pinter to function to execute
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}

