#include "function_pointers.h"

/**
 * print_name - Prints a name using _putchar
 *
 * @name: A pointer to a string containing the name to print
 * @f: A function pointer to a function that takes a pointer to a character
 *     and returns void
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (*name != '\0')
	{
		f(name);
		print_name(name + 1, f);
	}
	else
	{
		f("\n");
	}
}

